module.exports = grammar({
  name: 'duckyscript',
  rules: {
    source_file: $ => repeat($.block),
    newline: $ => choice("\r\n", "\n"),
    empty: $ => "",
    space: $ => " ",

    block: $ => seq(choice(
      $.keyseq,
      $.command,
      $.loop,
      $.if,
      $.while,
      $.function,
      $.func,
      $.declaration,
      $.assignment,
      $.newline,
    ), $.newline),

    binary_expr: $ => choice(
      prec.right(9, seq($.expr, "^", $.expr)),
      prec.left(8, seq($.expr, choice("*", "/", "%"), $.expr)),
      prec.left(7, seq($.expr, choice("+", "-"), $.expr)),
      prec.left(6, seq($.expr, choice("<<", ">>"), $.expr)),
      prec.left(5, seq($.expr, choice("<", ">", "<=", ">=", "==", "!="), $.expr)),
      prec.left(4, seq($.expr, "&", $.expr)),
      prec.left(3, seq($.expr, "|", $.expr)),
      prec.left(2, seq($.expr, "&&", $.expr)),
      prec.left(1, seq($.expr, "||", $.expr)),
    ),
    expr: $ => choice(
      seq("(", $.expr, ")"),
      $.uint,
      $.var,
      $.const,
      $.binary_expr
    ),

    uint: $ => /\d+/,
    int: $ => /-?\d+/,
    str: $ => /.+/,
    bool: $ => choice("TRUE", "FALSE"),

    identifier: $ => choice(
      /_+([a-zA-Z0-9]+_*)+/,
      /[a-zA-Z]([a-zA-Z0-9]*_*)*/
    ),
    var: $ => seq("$", $.identifier),
    const: $ => $.identifier,
    func: $ => seq($.identifier, "()"),
    param: $ => choice($.uint, $.var, $.const),
    param_signed: $ => choice($.param, $.int),
    param_str: $ => choice($.param_signed, $.str),

    assignment: $ => seq($.var, "=", $.expr),
    declaration: $ => choice(
      seq("DEFINE", $.const, choice($.uint, $.str, $.bool)),
      seq("VAR", $.assignment),
    ),

    if: $ => seq("IF", $.expr, "THEN", $.newline,
      repeat($.block),
      optional(repeat(seq("ELSE IF", $.expr, "THEN", $.newline, repeat($.block)))),
      optional(seq("ELSE", $.newline, repeat($.block))),
      "END_IF"
    ),
    while: $ => seq("WHILE", $.expr, $.newline, repeat($.block), "END_WHILE"),
    function: $ => seq("FUNCTION", $.func, $.newline, repeat($.block), "END_FUNCTION"),
    loop: $ => prec.left(seq($.loop_key, $.newline, repeat($.block))),

    loop_key: $ => /LOOP\d:/,
    swc_key: $ => choice(/SWCOLOR_[1-9]/, /SWCOLOR_1[0-5]/),
    comment: $ => choice("REM", "//"),

    command: $ => choice(
      seq($.comment, $.str),
      "LBREAK",
      "CONTINUE",
      "RETURN",
      seq("OLED_CURSOR", choice(
        seq($.param, $.param),
        $.const
      )),
      seq("OLED_PRINT", $.param_str),
      "OLED_CLEAR",
      "OLED_UPDATE",
      "OLED_RESTORE",
      seq("SWC_SET", choice(
        prec(1, seq($.param, $.param, $.param, $.param)),
        prec(2, seq($.const, $.param, $.param)),
        prec(3, seq($.const, $.param)),
        prec(4, $.const)
      )),
      seq("SWC_FILL", choice(
        prec.left(1, seq($.param, $.param, $.param)),
        prec.left(2, seq($.const, $.param)),
        prec.left(3, $.const)
      )),
      seq("SWC_RESET", $.param),
      seq("DEFAULTDELAY", $.param),
      seq("DEFAULTCHARDELAY", $.param),
      seq("DEFAULTCHARDELAYFUZZ", $.param),
      seq("DELAY", $.param),
      seq("STRING", $.param_str),
      seq("STRINGLN", $.param_str),
      seq("REPEAT", $.param),
      seq("MOUSE_MOVE", choice(
        seq($.param_signed, $.param_signed),
        $.const
      )),
      seq("MOUSE_WHEEL", $.param_signed),
      seq("KEYDOWN", $._key),
      seq("KEYUP", $._key),
      seq("SWCOLOR", choice(
        prec.left(1, seq($.param, $.param, $.param)),
        prec.left(2, seq($.const, $.param)),
        prec.left(3, $.const)
      )),
      seq($.swc_key, choice(
        prec.left(1, seq($.param, $.param, $.param)),
        prec.left(2, seq($.const, $.param)),
        prec.left(3, $.const)
      )),
      "DP_SLEEP",
      "PREV_PROFILE",
      "NEXT_PROFILE",
      seq("GOTO_PROFILE", $.param),
      seq("HOLD", $._key),
      seq("EMUK", $._key),
      seq("LCR", optional($.param))
    ),

    normal_key: $ => /[ -~]/,
    special_key: $ => choice(
      "CTRL", "RCTRL",
      "SHIFT", "RSHIFT",
      "ALT", "RALT",
      "WINDOWS", "RWINDOWS",
      "COMMAND", "RCOMMAND",
      "OPTION", "ROPTION",
      "ESC",
      "ENTER",
      "UP", "DOWN", "LEFT", "RIGHT",
      "SPACE",
      "BACKSPACE",
      "TAB",
      "CAPSLOCK",
      "PRINTSCREEN",
      "SCROLLLOCK",
      "PAUSE", "BREAK",
      "INSERT", "DELETE",
      "HOME", "END",
      "PAGEUP", "PAGEDOWN",
      "MENU",
      "POWER",
      choice(/F\d/, /F1\d/, /F2[0-4]/),
      "MK_VOLUP", "MK_VOLDOWN", "MK_MUTE",
      "MK_PREV", "MK_NEXT", "MK_PP", "MK_STOP",
      "NUMLOCK",
      "KP_SLASH", "KP_ASTERISK", "KP_MINUS", "KP_PLUS",
      "KP_ENTER", /KP_\d/, "KP_DOT", "KP_EQUAL",
      "LMOUSE", "RMOUSE", "MMOUSE"
    ),
    _key: $ => choice($.special_key, $.normal_key),
    keyseq: $ => seq(
      $.special_key,
      optional($._key),
      optional($._key),
      optional($._key),
      optional($._key),
      optional($._key)
    )
  }
});
