; =============================================================================
; keywords
; =============================================================================
"DEFINE" @keyword
"VAR" @keyword

"IF" @keyword
"THEN" @keyword
"ELSE" @keyword
"END_IF" @keyword

(loop_key) @keyword
"WHILE" @keyword
"END_WHILE" @keyword
"LBREAK" @keyword
"CONTINUE" @keyword

"FUNCTION" @keyword
"RETURN" @keyword

; =============================================================================
; builtin functions
; =============================================================================
"OLED_CURSOR" @function.builtin
"OLED_PRINT" @function.builtin
"OLED_CLEAR" @function.builtin
"OLED_UPDATE" @function.builtin
"OLED_RESTORE" @function.builtin

"SWCOLOR" @function.builtin
"SWC_SET" @function.builtin
"SWC_FILL" @function.builtin
"SWC_RESET" @function.builtin

"DELAY" @function.builtin
"DEFAULTDELAY" @function.builtin
"DEFAULTCHARDELAY" @function.builtin
"DEFAULTCHARDELAYFUZZ" @function.builtin

"STRING" @function.builtin
"STRINGLN" @function.builtin

"MOUSE_MOVE" @function.builtin
"MOUSE_WHEEL" @function.builtin

"PREV_PROFILE" @function.builtin
"NEXT_PROFILE" @function.builtin
"GOTO_PROFILE" @function.builtin

"HOLD" @function.builtin
"EMUK" @function.builtin
"KEYDOWN" @function.builtin
"KEYUP" @function.builtin

"REPEAT" @function.builtin
"LCR" @function.builtin
"DP_SLEEP" @function.builtin

; =============================================================================
; other
; =============================================================================
(uint) @number
(int) @number
(str) @string
(comment) @comment

(const) @constant
(bool) @constant
(var) @variable

(func) @function.method
(normal_key) @property
(special_key) @property
