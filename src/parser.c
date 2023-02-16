#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 37
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 136
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_CR_LF = 1,
  anon_sym_LF = 2,
  anon_sym_CARET = 3,
  anon_sym_STAR = 4,
  anon_sym_SLASH = 5,
  anon_sym_PERCENT = 6,
  anon_sym_PLUS = 7,
  anon_sym_DASH = 8,
  anon_sym_LT_LT = 9,
  anon_sym_GT_GT = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_AMP = 17,
  anon_sym_PIPE = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_PIPE_PIPE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  sym_uint = 23,
  sym_int = 24,
  sym_str = 25,
  anon_sym_TRUE = 26,
  anon_sym_FALSE = 27,
  aux_sym_identifier_token1 = 28,
  aux_sym_identifier_token2 = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_LPAREN_RPAREN = 31,
  anon_sym_EQ = 32,
  anon_sym_DEFINE = 33,
  anon_sym_VAR = 34,
  anon_sym_IF = 35,
  anon_sym_THEN = 36,
  anon_sym_ELSEIF = 37,
  anon_sym_ELSE = 38,
  anon_sym_END_IF = 39,
  anon_sym_WHILE = 40,
  anon_sym_END_WHILE = 41,
  anon_sym_FUNCTION = 42,
  anon_sym_END_FUNCTION = 43,
  sym_loop_key = 44,
  aux_sym_swc_key_token1 = 45,
  aux_sym_swc_key_token2 = 46,
  anon_sym_REM = 47,
  anon_sym_SLASH_SLASH = 48,
  anon_sym_LBREAK = 49,
  anon_sym_CONTINUE = 50,
  anon_sym_RETURN = 51,
  anon_sym_OLED_CURSOR = 52,
  anon_sym_OLED_PRINT = 53,
  anon_sym_OLED_CLEAR = 54,
  anon_sym_OLED_UPDATE = 55,
  anon_sym_OLED_RESTORE = 56,
  anon_sym_SWC_SET = 57,
  anon_sym_SWC_FILL = 58,
  anon_sym_SWC_RESET = 59,
  anon_sym_DEFAULTDELAY = 60,
  anon_sym_DEFAULTCHARDELAY = 61,
  anon_sym_DEFAULTCHARDELAYFUZZ = 62,
  anon_sym_DELAY = 63,
  anon_sym_STRING = 64,
  anon_sym_STRINGLN = 65,
  anon_sym_REPEAT = 66,
  anon_sym_MOUSE_MOVE = 67,
  anon_sym_MOUSE_WHEEL = 68,
  anon_sym_KEYDOWN = 69,
  anon_sym_KEYUP = 70,
  anon_sym_SWCOLOR = 71,
  anon_sym_DP_SLEEP = 72,
  anon_sym_PREV_PROFILE = 73,
  anon_sym_NEXT_PROFILE = 74,
  anon_sym_GOTO_PROFILE = 75,
  anon_sym_HOLD = 76,
  anon_sym_EMUK = 77,
  anon_sym_LCR = 78,
  sym_normal_key = 79,
  anon_sym_CTRL = 80,
  anon_sym_RCTRL = 81,
  anon_sym_SHIFT = 82,
  anon_sym_RSHIFT = 83,
  anon_sym_ALT = 84,
  anon_sym_RALT = 85,
  anon_sym_WINDOWS = 86,
  anon_sym_RWINDOWS = 87,
  anon_sym_COMMAND = 88,
  anon_sym_RCOMMAND = 89,
  anon_sym_OPTION = 90,
  anon_sym_ROPTION = 91,
  anon_sym_ESC = 92,
  anon_sym_ENTER = 93,
  anon_sym_UP = 94,
  anon_sym_DOWN = 95,
  anon_sym_LEFT = 96,
  anon_sym_RIGHT = 97,
  anon_sym_SPACE = 98,
  anon_sym_BACKSPACE = 99,
  anon_sym_TAB = 100,
  anon_sym_CAPSLOCK = 101,
  anon_sym_PRINTSCREEN = 102,
  anon_sym_SCROLLLOCK = 103,
  anon_sym_PAUSE = 104,
  anon_sym_BREAK = 105,
  anon_sym_INSERT = 106,
  anon_sym_DELETE = 107,
  anon_sym_HOME = 108,
  anon_sym_END = 109,
  anon_sym_PAGEUP = 110,
  anon_sym_PAGEDOWN = 111,
  anon_sym_MENU = 112,
  anon_sym_POWER = 113,
  aux_sym_special_key_token1 = 114,
  aux_sym_special_key_token2 = 115,
  aux_sym_special_key_token3 = 116,
  anon_sym_MK_VOLUP = 117,
  anon_sym_MK_VOLDOWN = 118,
  anon_sym_MK_MUTE = 119,
  anon_sym_MK_PREV = 120,
  anon_sym_MK_NEXT = 121,
  anon_sym_MK_PP = 122,
  anon_sym_MK_STOP = 123,
  anon_sym_NUMLOCK = 124,
  anon_sym_KP_SLASH = 125,
  anon_sym_KP_ASTERISK = 126,
  anon_sym_KP_MINUS = 127,
  anon_sym_KP_PLUS = 128,
  anon_sym_KP_ENTER = 129,
  aux_sym_special_key_token4 = 130,
  anon_sym_KP_DOT = 131,
  anon_sym_KP_EQUAL = 132,
  anon_sym_LMOUSE = 133,
  anon_sym_RMOUSE = 134,
  anon_sym_MMOUSE = 135,
  sym_source_file = 136,
  sym_newline = 137,
  sym_block = 138,
  sym_binary_expr = 139,
  sym_expr = 140,
  sym_bool = 141,
  sym_identifier = 142,
  sym_var = 143,
  sym_const = 144,
  sym_func = 145,
  sym_param = 146,
  sym_param_signed = 147,
  sym_param_str = 148,
  sym_assignment = 149,
  sym_declaration = 150,
  sym_if = 151,
  sym_while = 152,
  sym_function = 153,
  sym_loop = 154,
  sym_swc_key = 155,
  sym_comment = 156,
  sym_command = 157,
  sym_special_key = 158,
  sym__key = 159,
  sym_keyseq = 160,
  aux_sym_source_file_repeat1 = 161,
  aux_sym_if_repeat1 = 162,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_LF] = "\n",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_uint] = "uint",
  [sym_int] = "int",
  [sym_str] = "str",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_EQ] = "=",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_VAR] = "VAR",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_END_IF] = "END_IF",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_END_WHILE] = "END_WHILE",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_END_FUNCTION] = "END_FUNCTION",
  [sym_loop_key] = "loop_key",
  [aux_sym_swc_key_token1] = "swc_key_token1",
  [aux_sym_swc_key_token2] = "swc_key_token2",
  [anon_sym_REM] = "REM",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_LBREAK] = "LBREAK",
  [anon_sym_CONTINUE] = "CONTINUE",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_OLED_CURSOR] = "OLED_CURSOR",
  [anon_sym_OLED_PRINT] = "OLED_PRINT",
  [anon_sym_OLED_CLEAR] = "OLED_CLEAR",
  [anon_sym_OLED_UPDATE] = "OLED_UPDATE",
  [anon_sym_OLED_RESTORE] = "OLED_RESTORE",
  [anon_sym_SWC_SET] = "SWC_SET",
  [anon_sym_SWC_FILL] = "SWC_FILL",
  [anon_sym_SWC_RESET] = "SWC_RESET",
  [anon_sym_DEFAULTDELAY] = "DEFAULTDELAY",
  [anon_sym_DEFAULTCHARDELAY] = "DEFAULTCHARDELAY",
  [anon_sym_DEFAULTCHARDELAYFUZZ] = "DEFAULTCHARDELAYFUZZ",
  [anon_sym_DELAY] = "DELAY",
  [anon_sym_STRING] = "STRING",
  [anon_sym_STRINGLN] = "STRINGLN",
  [anon_sym_REPEAT] = "REPEAT",
  [anon_sym_MOUSE_MOVE] = "MOUSE_MOVE",
  [anon_sym_MOUSE_WHEEL] = "MOUSE_WHEEL",
  [anon_sym_KEYDOWN] = "KEYDOWN",
  [anon_sym_KEYUP] = "KEYUP",
  [anon_sym_SWCOLOR] = "SWCOLOR",
  [anon_sym_DP_SLEEP] = "DP_SLEEP",
  [anon_sym_PREV_PROFILE] = "PREV_PROFILE",
  [anon_sym_NEXT_PROFILE] = "NEXT_PROFILE",
  [anon_sym_GOTO_PROFILE] = "GOTO_PROFILE",
  [anon_sym_HOLD] = "HOLD",
  [anon_sym_EMUK] = "EMUK",
  [anon_sym_LCR] = "LCR",
  [sym_normal_key] = "normal_key",
  [anon_sym_CTRL] = "CTRL",
  [anon_sym_RCTRL] = "RCTRL",
  [anon_sym_SHIFT] = "SHIFT",
  [anon_sym_RSHIFT] = "RSHIFT",
  [anon_sym_ALT] = "ALT",
  [anon_sym_RALT] = "RALT",
  [anon_sym_WINDOWS] = "WINDOWS",
  [anon_sym_RWINDOWS] = "RWINDOWS",
  [anon_sym_COMMAND] = "COMMAND",
  [anon_sym_RCOMMAND] = "RCOMMAND",
  [anon_sym_OPTION] = "OPTION",
  [anon_sym_ROPTION] = "ROPTION",
  [anon_sym_ESC] = "ESC",
  [anon_sym_ENTER] = "ENTER",
  [anon_sym_UP] = "UP",
  [anon_sym_DOWN] = "DOWN",
  [anon_sym_LEFT] = "LEFT",
  [anon_sym_RIGHT] = "RIGHT",
  [anon_sym_SPACE] = "SPACE",
  [anon_sym_BACKSPACE] = "BACKSPACE",
  [anon_sym_TAB] = "TAB",
  [anon_sym_CAPSLOCK] = "CAPSLOCK",
  [anon_sym_PRINTSCREEN] = "PRINTSCREEN",
  [anon_sym_SCROLLLOCK] = "SCROLLLOCK",
  [anon_sym_PAUSE] = "PAUSE",
  [anon_sym_BREAK] = "BREAK",
  [anon_sym_INSERT] = "INSERT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_HOME] = "HOME",
  [anon_sym_END] = "END",
  [anon_sym_PAGEUP] = "PAGEUP",
  [anon_sym_PAGEDOWN] = "PAGEDOWN",
  [anon_sym_MENU] = "MENU",
  [anon_sym_POWER] = "POWER",
  [aux_sym_special_key_token1] = "special_key_token1",
  [aux_sym_special_key_token2] = "special_key_token2",
  [aux_sym_special_key_token3] = "special_key_token3",
  [anon_sym_MK_VOLUP] = "MK_VOLUP",
  [anon_sym_MK_VOLDOWN] = "MK_VOLDOWN",
  [anon_sym_MK_MUTE] = "MK_MUTE",
  [anon_sym_MK_PREV] = "MK_PREV",
  [anon_sym_MK_NEXT] = "MK_NEXT",
  [anon_sym_MK_PP] = "MK_PP",
  [anon_sym_MK_STOP] = "MK_STOP",
  [anon_sym_NUMLOCK] = "NUMLOCK",
  [anon_sym_KP_SLASH] = "KP_SLASH",
  [anon_sym_KP_ASTERISK] = "KP_ASTERISK",
  [anon_sym_KP_MINUS] = "KP_MINUS",
  [anon_sym_KP_PLUS] = "KP_PLUS",
  [anon_sym_KP_ENTER] = "KP_ENTER",
  [aux_sym_special_key_token4] = "special_key_token4",
  [anon_sym_KP_DOT] = "KP_DOT",
  [anon_sym_KP_EQUAL] = "KP_EQUAL",
  [anon_sym_LMOUSE] = "LMOUSE",
  [anon_sym_RMOUSE] = "RMOUSE",
  [anon_sym_MMOUSE] = "MMOUSE",
  [sym_source_file] = "source_file",
  [sym_newline] = "newline",
  [sym_block] = "block",
  [sym_binary_expr] = "binary_expr",
  [sym_expr] = "expr",
  [sym_bool] = "bool",
  [sym_identifier] = "identifier",
  [sym_var] = "var",
  [sym_const] = "const",
  [sym_func] = "func",
  [sym_param] = "param",
  [sym_param_signed] = "param_signed",
  [sym_param_str] = "param_str",
  [sym_assignment] = "assignment",
  [sym_declaration] = "declaration",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_function] = "function",
  [sym_loop] = "loop",
  [sym_swc_key] = "swc_key",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [sym_special_key] = "special_key",
  [sym__key] = "_key",
  [sym_keyseq] = "keyseq",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_uint] = sym_uint,
  [sym_int] = sym_int,
  [sym_str] = sym_str,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_VAR] = anon_sym_VAR,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_END_IF] = anon_sym_END_IF,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_END_WHILE] = anon_sym_END_WHILE,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_END_FUNCTION] = anon_sym_END_FUNCTION,
  [sym_loop_key] = sym_loop_key,
  [aux_sym_swc_key_token1] = aux_sym_swc_key_token1,
  [aux_sym_swc_key_token2] = aux_sym_swc_key_token2,
  [anon_sym_REM] = anon_sym_REM,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_LBREAK] = anon_sym_LBREAK,
  [anon_sym_CONTINUE] = anon_sym_CONTINUE,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_OLED_CURSOR] = anon_sym_OLED_CURSOR,
  [anon_sym_OLED_PRINT] = anon_sym_OLED_PRINT,
  [anon_sym_OLED_CLEAR] = anon_sym_OLED_CLEAR,
  [anon_sym_OLED_UPDATE] = anon_sym_OLED_UPDATE,
  [anon_sym_OLED_RESTORE] = anon_sym_OLED_RESTORE,
  [anon_sym_SWC_SET] = anon_sym_SWC_SET,
  [anon_sym_SWC_FILL] = anon_sym_SWC_FILL,
  [anon_sym_SWC_RESET] = anon_sym_SWC_RESET,
  [anon_sym_DEFAULTDELAY] = anon_sym_DEFAULTDELAY,
  [anon_sym_DEFAULTCHARDELAY] = anon_sym_DEFAULTCHARDELAY,
  [anon_sym_DEFAULTCHARDELAYFUZZ] = anon_sym_DEFAULTCHARDELAYFUZZ,
  [anon_sym_DELAY] = anon_sym_DELAY,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_STRINGLN] = anon_sym_STRINGLN,
  [anon_sym_REPEAT] = anon_sym_REPEAT,
  [anon_sym_MOUSE_MOVE] = anon_sym_MOUSE_MOVE,
  [anon_sym_MOUSE_WHEEL] = anon_sym_MOUSE_WHEEL,
  [anon_sym_KEYDOWN] = anon_sym_KEYDOWN,
  [anon_sym_KEYUP] = anon_sym_KEYUP,
  [anon_sym_SWCOLOR] = anon_sym_SWCOLOR,
  [anon_sym_DP_SLEEP] = anon_sym_DP_SLEEP,
  [anon_sym_PREV_PROFILE] = anon_sym_PREV_PROFILE,
  [anon_sym_NEXT_PROFILE] = anon_sym_NEXT_PROFILE,
  [anon_sym_GOTO_PROFILE] = anon_sym_GOTO_PROFILE,
  [anon_sym_HOLD] = anon_sym_HOLD,
  [anon_sym_EMUK] = anon_sym_EMUK,
  [anon_sym_LCR] = anon_sym_LCR,
  [sym_normal_key] = sym_normal_key,
  [anon_sym_CTRL] = anon_sym_CTRL,
  [anon_sym_RCTRL] = anon_sym_RCTRL,
  [anon_sym_SHIFT] = anon_sym_SHIFT,
  [anon_sym_RSHIFT] = anon_sym_RSHIFT,
  [anon_sym_ALT] = anon_sym_ALT,
  [anon_sym_RALT] = anon_sym_RALT,
  [anon_sym_WINDOWS] = anon_sym_WINDOWS,
  [anon_sym_RWINDOWS] = anon_sym_RWINDOWS,
  [anon_sym_COMMAND] = anon_sym_COMMAND,
  [anon_sym_RCOMMAND] = anon_sym_RCOMMAND,
  [anon_sym_OPTION] = anon_sym_OPTION,
  [anon_sym_ROPTION] = anon_sym_ROPTION,
  [anon_sym_ESC] = anon_sym_ESC,
  [anon_sym_ENTER] = anon_sym_ENTER,
  [anon_sym_UP] = anon_sym_UP,
  [anon_sym_DOWN] = anon_sym_DOWN,
  [anon_sym_LEFT] = anon_sym_LEFT,
  [anon_sym_RIGHT] = anon_sym_RIGHT,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_BACKSPACE] = anon_sym_BACKSPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_CAPSLOCK] = anon_sym_CAPSLOCK,
  [anon_sym_PRINTSCREEN] = anon_sym_PRINTSCREEN,
  [anon_sym_SCROLLLOCK] = anon_sym_SCROLLLOCK,
  [anon_sym_PAUSE] = anon_sym_PAUSE,
  [anon_sym_BREAK] = anon_sym_BREAK,
  [anon_sym_INSERT] = anon_sym_INSERT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_HOME] = anon_sym_HOME,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_PAGEUP] = anon_sym_PAGEUP,
  [anon_sym_PAGEDOWN] = anon_sym_PAGEDOWN,
  [anon_sym_MENU] = anon_sym_MENU,
  [anon_sym_POWER] = anon_sym_POWER,
  [aux_sym_special_key_token1] = aux_sym_special_key_token1,
  [aux_sym_special_key_token2] = aux_sym_special_key_token2,
  [aux_sym_special_key_token3] = aux_sym_special_key_token3,
  [anon_sym_MK_VOLUP] = anon_sym_MK_VOLUP,
  [anon_sym_MK_VOLDOWN] = anon_sym_MK_VOLDOWN,
  [anon_sym_MK_MUTE] = anon_sym_MK_MUTE,
  [anon_sym_MK_PREV] = anon_sym_MK_PREV,
  [anon_sym_MK_NEXT] = anon_sym_MK_NEXT,
  [anon_sym_MK_PP] = anon_sym_MK_PP,
  [anon_sym_MK_STOP] = anon_sym_MK_STOP,
  [anon_sym_NUMLOCK] = anon_sym_NUMLOCK,
  [anon_sym_KP_SLASH] = anon_sym_KP_SLASH,
  [anon_sym_KP_ASTERISK] = anon_sym_KP_ASTERISK,
  [anon_sym_KP_MINUS] = anon_sym_KP_MINUS,
  [anon_sym_KP_PLUS] = anon_sym_KP_PLUS,
  [anon_sym_KP_ENTER] = anon_sym_KP_ENTER,
  [aux_sym_special_key_token4] = aux_sym_special_key_token4,
  [anon_sym_KP_DOT] = anon_sym_KP_DOT,
  [anon_sym_KP_EQUAL] = anon_sym_KP_EQUAL,
  [anon_sym_LMOUSE] = anon_sym_LMOUSE,
  [anon_sym_RMOUSE] = anon_sym_RMOUSE,
  [anon_sym_MMOUSE] = anon_sym_MMOUSE,
  [sym_source_file] = sym_source_file,
  [sym_newline] = sym_newline,
  [sym_block] = sym_block,
  [sym_binary_expr] = sym_binary_expr,
  [sym_expr] = sym_expr,
  [sym_bool] = sym_bool,
  [sym_identifier] = sym_identifier,
  [sym_var] = sym_var,
  [sym_const] = sym_const,
  [sym_func] = sym_func,
  [sym_param] = sym_param,
  [sym_param_signed] = sym_param_signed,
  [sym_param_str] = sym_param_str,
  [sym_assignment] = sym_assignment,
  [sym_declaration] = sym_declaration,
  [sym_if] = sym_if,
  [sym_while] = sym_while,
  [sym_function] = sym_function,
  [sym_loop] = sym_loop,
  [sym_swc_key] = sym_swc_key,
  [sym_comment] = sym_comment,
  [sym_command] = sym_command,
  [sym_special_key] = sym_special_key,
  [sym__key] = sym__key,
  [sym_keyseq] = sym_keyseq,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_repeat1] = aux_sym_if_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_uint] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [sym_loop_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_swc_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swc_key_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_REM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBREAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTINUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLED_CURSOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLED_PRINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLED_CLEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLED_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLED_RESTORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWC_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWC_FILL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWC_RESET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFAULTDELAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFAULTCHARDELAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFAULTCHARDELAYFUZZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRINGLN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPEAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOUSE_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOUSE_WHEEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEYDOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEYUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWCOLOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DP_SLEEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREV_PROFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEXT_PROFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOTO_PROFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HOLD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMUK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LCR] = {
    .visible = true,
    .named = false,
  },
  [sym_normal_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CTRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RCTRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHIFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RSHIFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WINDOWS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWINDOWS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RCOMMAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROPTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LEFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RIGHT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BACKSPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPSLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINTSCREEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCROLLLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAUSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BREAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HOME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAGEUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAGEDOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MENU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWER] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_special_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_key_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_special_key_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_MK_VOLUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MK_VOLDOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MK_MUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MK_PREV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MK_NEXT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MK_PP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MK_STOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUMLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KP_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KP_ASTERISK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KP_MINUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KP_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KP_ENTER] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_special_key_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_KP_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KP_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LMOUSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RMOUSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MMOUSE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_param_signed] = {
    .visible = true,
    .named = true,
  },
  [sym_param_str] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_swc_key] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_special_key] = {
    .visible = true,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_keyseq] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 4,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 4,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 4,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 25,
  [29] = 25,
  [30] = 26,
  [31] = 26,
  [32] = 25,
  [33] = 25,
  [34] = 26,
  [35] = 26,
  [36] = 25,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 56,
  [61] = 61,
  [62] = 61,
  [63] = 50,
  [64] = 55,
  [65] = 57,
  [66] = 58,
  [67] = 59,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 69,
  [72] = 52,
  [73] = 45,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 84,
  [95] = 95,
  [96] = 83,
  [97] = 79,
  [98] = 85,
  [99] = 99,
  [100] = 86,
  [101] = 101,
  [102] = 87,
  [103] = 88,
  [104] = 104,
  [105] = 89,
  [106] = 90,
  [107] = 91,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 44,
  [121] = 121,
  [122] = 45,
  [123] = 123,
  [124] = 44,
  [125] = 46,
  [126] = 126,
  [127] = 127,
  [128] = 123,
  [129] = 45,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 45,
  [134] = 134,
  [135] = 135,
  [136] = 44,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 140,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 140,
  [150] = 140,
  [151] = 151,
  [152] = 140,
  [153] = 153,
  [154] = 146,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 42,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 126,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(220);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '=') ADVANCE(688);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == 'F') ADVANCE(281);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '^') ADVANCE(237);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(748);
      if (lookahead == 'B') ADVANCE(738);
      if (lookahead == 'C') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(744);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(751);
      if (lookahead == 'I') ADVANCE(750);
      if (lookahead == 'K') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(746);
      if (lookahead == 'M') ADVANCE(745);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(754);
      if (lookahead == 'P') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(742);
      if (lookahead == 'S') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == 'U') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(747);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(734);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(748);
      if (lookahead == 'B') ADVANCE(738);
      if (lookahead == 'C') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(744);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(751);
      if (lookahead == 'I') ADVANCE(750);
      if (lookahead == 'K') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(746);
      if (lookahead == 'M') ADVANCE(745);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(754);
      if (lookahead == 'P') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(742);
      if (lookahead == 'S') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == 'U') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(747);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(734);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '$') ADVANCE(685);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'T') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '^') ADVANCE(237);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(446);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '^') ADVANCE(237);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(446);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(479);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(477);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(479);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(477);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(736);
      if (lookahead == 'A') ADVANCE(748);
      if (lookahead == 'B') ADVANCE(738);
      if (lookahead == 'C') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(744);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(751);
      if (lookahead == 'I') ADVANCE(750);
      if (lookahead == 'K') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(746);
      if (lookahead == 'M') ADVANCE(745);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(754);
      if (lookahead == 'P') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(742);
      if (lookahead == 'S') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == 'U') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(734);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '=') ADVANCE(688);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == '^') ADVANCE(237);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '&') ADVANCE(252);
      if (lookahead == ')') ADVANCE(258);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '<') ADVANCE(246);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == '^') ADVANCE(237);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '=') ADVANCE(687);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(686);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(703);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(177);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'S') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(172);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(796);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(780);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(814);
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(772);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(774);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(152);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(812);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(804);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(792);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(810);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(864);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(868);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(866);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(837);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(794);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(694);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(189);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(849);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(185);
      END_STATE();
    case 82:
      if (lookahead == 'H') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'H') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(806);
      END_STATE();
    case 94:
      if (lookahead == 'K') ADVANCE(847);
      END_STATE();
    case 95:
      if (lookahead == 'K') ADVANCE(798);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(802);
      END_STATE();
    case 97:
      if (lookahead == 'K') ADVANCE(851);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(171);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(756);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(758);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(862);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(201);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(145);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(52);
      END_STATE();
    case 115:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 118:
      if (lookahead == 'M') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(786);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(776);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(778);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(822);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(835);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(800);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(692);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(199);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(202);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(197);
      if (lookahead == 'Q') ADVANCE(200);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(204);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(188);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(212);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == 'P') ADVANCE(843);
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 152:
      if (lookahead == 'P') ADVANCE(820);
      END_STATE();
    case 153:
      if (lookahead == 'P') ADVANCE(845);
      END_STATE();
    case 154:
      if (lookahead == 'P') ADVANCE(833);
      END_STATE();
    case 155:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 157:
      if (lookahead == 'P') ADVANCE(198);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(782);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(826);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(857);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 167:
      if (lookahead == 'S') ADVANCE(855);
      END_STATE();
    case 168:
      if (lookahead == 'S') ADVANCE(768);
      END_STATE();
    case 169:
      if (lookahead == 'S') ADVANCE(853);
      END_STATE();
    case 170:
      if (lookahead == 'S') ADVANCE(770);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 173:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 174:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 175:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 176:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 177:
      if (lookahead == 'S') ADVANCE(196);
      END_STATE();
    case 178:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(764);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(788);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(766);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(790);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(760);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(808);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(860);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(762);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(841);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 199:
      if (lookahead == 'U') ADVANCE(824);
      END_STATE();
    case 200:
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 201:
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 202:
      if (lookahead == 'U') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 'U') ADVANCE(195);
      END_STATE();
    case 204:
      if (lookahead == 'U') ADVANCE(176);
      END_STATE();
    case 205:
      if (lookahead == 'U') ADVANCE(178);
      END_STATE();
    case 206:
      if (lookahead == 'U') ADVANCE(179);
      END_STATE();
    case 207:
      if (lookahead == 'V') ADVANCE(839);
      END_STATE();
    case 208:
      if (lookahead == 'W') ADVANCE(120);
      END_STATE();
    case 209:
      if (lookahead == 'W') ADVANCE(168);
      END_STATE();
    case 210:
      if (lookahead == 'W') ADVANCE(123);
      END_STATE();
    case 211:
      if (lookahead == 'W') ADVANCE(170);
      END_STATE();
    case 212:
      if (lookahead == 'W') ADVANCE(124);
      END_STATE();
    case 213:
      if (lookahead == 'W') ADVANCE(68);
      END_STATE();
    case 214:
      if (lookahead == 'X') ADVANCE(190);
      END_STATE();
    case 215:
      if (lookahead == '_') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 216:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 217:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 219:
      if (eof) ADVANCE(220);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '$') ADVANCE(684);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == 'B') ADVANCE(285);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'G') ADVANCE(515);
      if (lookahead == 'H') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'K') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'U') ADVANCE(546);
      if (lookahead == 'V') ADVANCE(297);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(219)
      if (('J' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(735);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(15);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(735);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(15);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(703);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(244);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(686);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '$') ADVANCE(685);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'A') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'T') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'L') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'R') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == 'U') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '_') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_str);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_str);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '1') ADVANCE(673);
      if (lookahead == '2') ADVANCE(671);
      if (lookahead == 'A') ADVANCE(471);
      if (lookahead == 'U') ADVANCE(502);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '1') ADVANCE(673);
      if (lookahead == '2') ADVANCE(671);
      if (lookahead == 'U') ADVANCE(502);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '1') ADVANCE(672);
      if (lookahead == '_') ADVANCE(675);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == ':') ADVANCE(701);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(311);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'O') ADVANCE(662);
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == 'H') ADVANCE(372);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(553);
      if (lookahead == 'O') ADVANCE(481);
      if (lookahead == 'T') ADVANCE(569);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(624);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(667);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(597);
      if (lookahead == 'D') ADVANCE(529);
      if (lookahead == 'E') ADVANCE(512);
      if (lookahead == 'M') ADVANCE(429);
      if (lookahead == 'P') ADVANCE(459);
      if (lookahead == 'S') ADVANCE(454);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(668);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(438);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(320);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(646);
      if (lookahead == 'I') ADVANCE(508);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(450);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(567);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(572);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(518);
      if (lookahead == 'E') ADVANCE(480);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead == 'M') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(558);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'W') ADVANCE(435);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(504);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(505);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'B') ADVANCE(797);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'B') ADVANCE(582);
      if (lookahead == 'C') ADVANCE(561);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'M') ADVANCE(541);
      if (lookahead == 'O') ADVANCE(520);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(781);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(466);
      if (lookahead == 'P') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(377);
      if (lookahead == 'U') ADVANCE(555);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(571);
      if (lookahead == 'H') ADVANCE(423);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(580);
      if (lookahead == 'W') ADVANCE(318);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(414);
      if (lookahead == 'D') ADVANCE(381);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(535);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(441);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(578);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(359);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(631);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'C') ADVANCE(632);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(816);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(731);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(773);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(775);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(815);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(819);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(818);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(817);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(533);
      if (lookahead == 'U') ADVANCE(547);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(516);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(383);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(308);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(538);
      if (lookahead == 'U') ADVANCE(549);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'D') ADVANCE(540);
      if (lookahead == 'U') ADVANCE(552);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(396);
      if (lookahead == 'O') ADVANCE(655);
      if (lookahead == 'P') ADVANCE(681);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(665);
      if (lookahead == 'P') ADVANCE(676);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(663);
      if (lookahead == 'U') ADVANCE(482);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(654);
      if (lookahead == 'I') ADVANCE(506);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(695);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(813);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(278);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(805);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(793);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(697);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(689);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(811);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(865);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(869);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(867);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(838);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(705);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(795);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(698);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(722);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(710);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(730);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(729);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(711);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(728);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == 'K') ADVANCE(677);
      if (lookahead == 'M') ADVANCE(542);
      if (lookahead == 'O') ADVANCE(647);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(333);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(652);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(292);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(489);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(679);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(563);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(575);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(564);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(605);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(551);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(456);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(498);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(618);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(378);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(302);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(664);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(384);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'E') ADVANCE(602);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(691);
      if (lookahead == 'N') ADVANCE(604);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(298);
      if (lookahead == 'L') ADVANCE(290);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(696);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(608);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead == 'W') ADVANCE(416);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(611);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(615);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(426);
      if (lookahead == 'R') ADVANCE(394);
      if (lookahead == 'S') ADVANCE(385);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(432);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'F') ADVANCE(434);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'G') ADVANCE(719);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'G') ADVANCE(412);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'G') ADVANCE(391);
      if (lookahead == 'U') ADVANCE(596);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(850);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(418);
      if (lookahead == 'I') ADVANCE(501);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(610);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(428);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'H') ADVANCE(430);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(463);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(500);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(524);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(593);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(510);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(528);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(402);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(507);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(467);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(531);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(468);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(469);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(470);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'I') ADVANCE(511);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(732);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(807);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(704);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(848);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(799);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(803);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(852);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'K') ADVANCE(591);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(607);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(590);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(590);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(326);
      if (lookahead == 'M') ADVANCE(346);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(757);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(759);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(863);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(713);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(723);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(368);
      if (lookahead == 'P') ADVANCE(621);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(299);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(609);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(294);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(639);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(475);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(451);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(526);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(616);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(389);
      if (lookahead == 'U') ADVANCE(576);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(363);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(364);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(594);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(340);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(537);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(539);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'L') ADVANCE(474);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(329);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(332);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(702);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'T') ADVANCE(643);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(483);
      if (lookahead == 'N') ADVANCE(630);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(457);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(305);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(628);
      if (lookahead == 'V') ADVANCE(525);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(519);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(307);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'M') ADVANCE(486);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(787);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(693);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(777);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(706);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(724);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(779);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(699);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(823);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(720);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(836);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(801);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(700);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(407);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(323);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(636);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(327);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(642);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(352);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(620);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(644);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(338);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'Q') ADVANCE(640);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(447);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(622);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(656);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(487);
      if (lookahead == 'T') ADVANCE(573);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(653);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(554);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(680);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(460);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(550);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(490);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(472);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(565);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(493);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(494);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(613);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(568);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(499);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(658);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(657);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(462);
      if (lookahead == '_') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(579);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(317);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(659);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(319);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(660);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(649);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(405);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'O') ADVANCE(406);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(785);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(725);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(844);
      if (lookahead == 'R') ADVANCE(369);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(821);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(846);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(727);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(834);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(606);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(577);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(306);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(629);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(583);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(733);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(690);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(783);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(827);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(726);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(858);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(709);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(707);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(448);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(422);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(522);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(449);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(491);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(612);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(598);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(517);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(393);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(365);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(419);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(392);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(856);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(769);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(854);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(771);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(345);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(557);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(321);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(348);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(373);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(349);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(633);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(530);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(354);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(355);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(386);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(375);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(625);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(765);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(789);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(767);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(791);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(761);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(809);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(861);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(721);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(763);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(315);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(842);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(708);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(420);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(521);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(592);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(353);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(362);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(523);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(421);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(424);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(427);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(431);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(379);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'T') ADVANCE(682);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(825);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(670);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(436);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(585);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(300);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(347);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(587);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(574);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(358);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(626);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(464);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(595);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(599);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(600);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(601);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'U') ADVANCE(513);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'V') ADVANCE(840);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'V') ADVANCE(361);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'V') ADVANCE(683);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(488);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(586);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(588);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(492);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(497);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(416);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'W') ADVANCE(376);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'X') ADVANCE(635);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'X') ADVANCE(617);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'Y') ADVANCE(334);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'Y') ADVANCE(718);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'Y') ADVANCE(715);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'Y') ADVANCE(716);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'Z') ADVANCE(717);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == 'Z') ADVANCE(669);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(675);
      if (('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(675);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '_') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_END_IF);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_END_WHILE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_END_FUNCTION);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_loop_key);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_REM);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_LBREAK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_OLED_CURSOR);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_OLED_PRINT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_OLED_CLEAR);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_OLED_UPDATE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_OLED_RESTORE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_SWC_SET);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_SWC_FILL);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_SWC_RESET);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DEFAULTDELAY);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DEFAULTCHARDELAY);
      if (lookahead == 'F') ADVANCE(637);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DEFAULTCHARDELAYFUZZ);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DELAY);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (lookahead == 'L') ADVANCE(496);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_STRINGLN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_REPEAT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_MOUSE_MOVE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_MOUSE_WHEEL);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_KEYDOWN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_KEYUP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_SWCOLOR);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DP_SLEEP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_PREV_PROFILE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_NEXT_PROFILE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_GOTO_PROFILE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_HOLD);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_EMUK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LCR);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_normal_key);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(748);
      if (lookahead == 'B') ADVANCE(738);
      if (lookahead == 'C') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(744);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(751);
      if (lookahead == 'I') ADVANCE(750);
      if (lookahead == 'K') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(746);
      if (lookahead == 'M') ADVANCE(745);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(754);
      if (lookahead == 'P') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(742);
      if (lookahead == 'S') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == 'U') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(747);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(734);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == ' ') ADVANCE(736);
      if (lookahead == 'A') ADVANCE(748);
      if (lookahead == 'B') ADVANCE(738);
      if (lookahead == 'C') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(744);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(751);
      if (lookahead == 'I') ADVANCE(750);
      if (lookahead == 'K') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(746);
      if (lookahead == 'M') ADVANCE(745);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(754);
      if (lookahead == 'P') ADVANCE(740);
      if (lookahead == 'R') ADVANCE(742);
      if (lookahead == 'S') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == 'U') ADVANCE(753);
      if (lookahead == 'W') ADVANCE(747);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(734);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == '1') ADVANCE(830);
      if (lookahead == '2') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'O') ADVANCE(213);
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(92);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == 'H') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(29);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'K') ADVANCE(217);
      if (lookahead == 'M') ADVANCE(149);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(134);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'N') ADVANCE(180);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'P') ADVANCE(216);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'P') ADVANCE(784);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'P') ADVANCE(191);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_normal_key);
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_CTRL);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_RCTRL);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_RCTRL);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_RSHIFT);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_RSHIFT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_ALT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_RALT);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_RALT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_WINDOWS);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_WINDOWS);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_RWINDOWS);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_RWINDOWS);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_COMMAND);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_COMMAND);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_RCOMMAND);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_RCOMMAND);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_OPTION);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_OPTION);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_ROPTION);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_ROPTION);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_ENTER);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_ENTER);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_UP);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_UP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_DOWN);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_DOWN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LEFT);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_LEFT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_RIGHT);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_RIGHT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BACKSPACE);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BACKSPACE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_CAPSLOCK);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_CAPSLOCK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_PRINTSCREEN);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_PRINTSCREEN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_SCROLLLOCK);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_SCROLLLOCK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_PAUSE);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_PAUSE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_BREAK);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BREAK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_INSERT);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_HOME);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_HOME);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '_') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '_') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '_') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '_') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_PAGEUP);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_PAGEUP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_PAGEDOWN);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_PAGEDOWN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_MENU);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_MENU);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_POWER);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_POWER);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_special_key_token1);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_special_key_token1);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(832);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_special_key_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_special_key_token2);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_special_key_token3);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_MK_VOLUP);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_MK_VOLUP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_MK_VOLDOWN);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_MK_VOLDOWN);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_MK_MUTE);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_MK_MUTE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_MK_PREV);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_MK_PREV);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_MK_NEXT);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_MK_NEXT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_MK_PP);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_MK_PP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_MK_STOP);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_MK_STOP);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_NUMLOCK);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_NUMLOCK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_KP_SLASH);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_KP_SLASH);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_KP_ASTERISK);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_KP_ASTERISK);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_KP_MINUS);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_KP_MINUS);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_KP_PLUS);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_KP_PLUS);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_KP_ENTER);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_KP_ENTER);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_special_key_token4);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_KP_DOT);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_KP_DOT);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_KP_EQUAL);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_KP_EQUAL);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_LMOUSE);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_LMOUSE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_RMOUSE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_RMOUSE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_MMOUSE);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_MMOUSE);
      if (lookahead == '_') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 219},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 219},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 219},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 219},
  [23] = {.lex_state = 219},
  [24] = {.lex_state = 219},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 219},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 219},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 219},
  [36] = {.lex_state = 219},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 219},
  [139] = {.lex_state = 219},
  [140] = {.lex_state = 219},
  [141] = {.lex_state = 219},
  [142] = {.lex_state = 219},
  [143] = {.lex_state = 219},
  [144] = {.lex_state = 219},
  [145] = {.lex_state = 219},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 219},
  [149] = {.lex_state = 219},
  [150] = {.lex_state = 219},
  [151] = {.lex_state = 219},
  [152] = {.lex_state = 219},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 219},
  [156] = {.lex_state = 219},
  [157] = {.lex_state = 219},
  [158] = {.lex_state = 219},
  [159] = {.lex_state = 219},
  [160] = {.lex_state = 219},
  [161] = {.lex_state = 219},
  [162] = {.lex_state = 219},
  [163] = {.lex_state = 219},
  [164] = {.lex_state = 219},
  [165] = {.lex_state = 219},
  [166] = {.lex_state = 219},
  [167] = {.lex_state = 219},
  [168] = {.lex_state = 219},
  [169] = {.lex_state = 219},
  [170] = {.lex_state = 219},
  [171] = {.lex_state = 219},
  [172] = {.lex_state = 219},
  [173] = {.lex_state = 219},
  [174] = {.lex_state = 219},
  [175] = {.lex_state = 219},
  [176] = {.lex_state = 219},
  [177] = {.lex_state = 219},
  [178] = {.lex_state = 219},
  [179] = {.lex_state = 219},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 23},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_uint] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_VAR] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_END_WHILE] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_END_FUNCTION] = ACTIONS(1),
    [sym_loop_key] = ACTIONS(1),
    [aux_sym_swc_key_token1] = ACTIONS(1),
    [aux_sym_swc_key_token2] = ACTIONS(1),
    [anon_sym_REM] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LBREAK] = ACTIONS(1),
    [anon_sym_CONTINUE] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_OLED_CURSOR] = ACTIONS(1),
    [anon_sym_OLED_PRINT] = ACTIONS(1),
    [anon_sym_OLED_CLEAR] = ACTIONS(1),
    [anon_sym_OLED_UPDATE] = ACTIONS(1),
    [anon_sym_OLED_RESTORE] = ACTIONS(1),
    [anon_sym_SWC_SET] = ACTIONS(1),
    [anon_sym_SWC_FILL] = ACTIONS(1),
    [anon_sym_SWC_RESET] = ACTIONS(1),
    [anon_sym_DEFAULTDELAY] = ACTIONS(1),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(1),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(1),
    [anon_sym_DELAY] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_STRINGLN] = ACTIONS(1),
    [anon_sym_REPEAT] = ACTIONS(1),
    [anon_sym_MOUSE_MOVE] = ACTIONS(1),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(1),
    [anon_sym_KEYDOWN] = ACTIONS(1),
    [anon_sym_KEYUP] = ACTIONS(1),
    [anon_sym_SWCOLOR] = ACTIONS(1),
    [anon_sym_DP_SLEEP] = ACTIONS(1),
    [anon_sym_PREV_PROFILE] = ACTIONS(1),
    [anon_sym_NEXT_PROFILE] = ACTIONS(1),
    [anon_sym_GOTO_PROFILE] = ACTIONS(1),
    [anon_sym_HOLD] = ACTIONS(1),
    [anon_sym_EMUK] = ACTIONS(1),
    [anon_sym_LCR] = ACTIONS(1),
    [anon_sym_CTRL] = ACTIONS(1),
    [anon_sym_RCTRL] = ACTIONS(1),
    [anon_sym_SHIFT] = ACTIONS(1),
    [anon_sym_RSHIFT] = ACTIONS(1),
    [anon_sym_ALT] = ACTIONS(1),
    [anon_sym_RALT] = ACTIONS(1),
    [anon_sym_WINDOWS] = ACTIONS(1),
    [anon_sym_RWINDOWS] = ACTIONS(1),
    [anon_sym_COMMAND] = ACTIONS(1),
    [anon_sym_RCOMMAND] = ACTIONS(1),
    [anon_sym_OPTION] = ACTIONS(1),
    [anon_sym_ROPTION] = ACTIONS(1),
    [anon_sym_ESC] = ACTIONS(1),
    [anon_sym_ENTER] = ACTIONS(1),
    [anon_sym_UP] = ACTIONS(1),
    [anon_sym_DOWN] = ACTIONS(1),
    [anon_sym_LEFT] = ACTIONS(1),
    [anon_sym_RIGHT] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_BACKSPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_CAPSLOCK] = ACTIONS(1),
    [anon_sym_PRINTSCREEN] = ACTIONS(1),
    [anon_sym_SCROLLLOCK] = ACTIONS(1),
    [anon_sym_PAUSE] = ACTIONS(1),
    [anon_sym_BREAK] = ACTIONS(1),
    [anon_sym_INSERT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_HOME] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_PAGEUP] = ACTIONS(1),
    [anon_sym_PAGEDOWN] = ACTIONS(1),
    [anon_sym_MENU] = ACTIONS(1),
    [anon_sym_POWER] = ACTIONS(1),
    [aux_sym_special_key_token1] = ACTIONS(1),
    [aux_sym_special_key_token2] = ACTIONS(1),
    [aux_sym_special_key_token3] = ACTIONS(1),
    [anon_sym_MK_VOLUP] = ACTIONS(1),
    [anon_sym_MK_VOLDOWN] = ACTIONS(1),
    [anon_sym_MK_MUTE] = ACTIONS(1),
    [anon_sym_MK_PREV] = ACTIONS(1),
    [anon_sym_MK_NEXT] = ACTIONS(1),
    [anon_sym_MK_PP] = ACTIONS(1),
    [anon_sym_MK_STOP] = ACTIONS(1),
    [anon_sym_NUMLOCK] = ACTIONS(1),
    [anon_sym_KP_SLASH] = ACTIONS(1),
    [anon_sym_KP_ASTERISK] = ACTIONS(1),
    [anon_sym_KP_MINUS] = ACTIONS(1),
    [anon_sym_KP_PLUS] = ACTIONS(1),
    [anon_sym_KP_ENTER] = ACTIONS(1),
    [aux_sym_special_key_token4] = ACTIONS(1),
    [anon_sym_KP_DOT] = ACTIONS(1),
    [anon_sym_KP_EQUAL] = ACTIONS(1),
    [anon_sym_LMOUSE] = ACTIONS(1),
    [anon_sym_RMOUSE] = ACTIONS(1),
    [anon_sym_MMOUSE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(183),
    [sym_newline] = STATE(150),
    [sym_block] = STATE(19),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(150),
    [sym_assignment] = STATE(150),
    [sym_declaration] = STATE(150),
    [sym_if] = STATE(150),
    [sym_while] = STATE(150),
    [sym_function] = STATE(150),
    [sym_loop] = STATE(150),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(150),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(150),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [2] = {
    [sym_newline] = STATE(149),
    [sym_block] = STATE(4),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_declaration] = STATE(149),
    [sym_if] = STATE(149),
    [sym_while] = STATE(149),
    [sym_function] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(149),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_if_repeat1] = STATE(135),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_ELSEIF] = ACTIONS(49),
    [anon_sym_ELSE] = ACTIONS(51),
    [anon_sym_END_IF] = ACTIONS(53),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [3] = {
    [sym_newline] = STATE(149),
    [sym_block] = STATE(2),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_declaration] = STATE(149),
    [sym_if] = STATE(149),
    [sym_while] = STATE(149),
    [sym_function] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(149),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_if_repeat1] = STATE(137),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_ELSEIF] = ACTIONS(49),
    [anon_sym_ELSE] = ACTIONS(55),
    [anon_sym_END_IF] = ACTIONS(57),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [4] = {
    [sym_newline] = STATE(149),
    [sym_block] = STATE(4),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_declaration] = STATE(149),
    [sym_if] = STATE(149),
    [sym_while] = STATE(149),
    [sym_function] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(149),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_CR_LF] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(62),
    [aux_sym_identifier_token2] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DEFINE] = ACTIONS(68),
    [anon_sym_VAR] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(74),
    [anon_sym_ELSEIF] = ACTIONS(77),
    [anon_sym_ELSE] = ACTIONS(77),
    [anon_sym_END_IF] = ACTIONS(77),
    [anon_sym_WHILE] = ACTIONS(79),
    [anon_sym_FUNCTION] = ACTIONS(82),
    [sym_loop_key] = ACTIONS(85),
    [aux_sym_swc_key_token1] = ACTIONS(88),
    [aux_sym_swc_key_token2] = ACTIONS(88),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_LBREAK] = ACTIONS(94),
    [anon_sym_CONTINUE] = ACTIONS(94),
    [anon_sym_RETURN] = ACTIONS(94),
    [anon_sym_OLED_CURSOR] = ACTIONS(97),
    [anon_sym_OLED_PRINT] = ACTIONS(100),
    [anon_sym_OLED_CLEAR] = ACTIONS(94),
    [anon_sym_OLED_UPDATE] = ACTIONS(94),
    [anon_sym_OLED_RESTORE] = ACTIONS(94),
    [anon_sym_SWC_SET] = ACTIONS(103),
    [anon_sym_SWC_FILL] = ACTIONS(106),
    [anon_sym_SWC_RESET] = ACTIONS(109),
    [anon_sym_DEFAULTDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(109),
    [anon_sym_DELAY] = ACTIONS(109),
    [anon_sym_STRING] = ACTIONS(100),
    [anon_sym_STRINGLN] = ACTIONS(100),
    [anon_sym_REPEAT] = ACTIONS(109),
    [anon_sym_MOUSE_MOVE] = ACTIONS(112),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(115),
    [anon_sym_KEYDOWN] = ACTIONS(118),
    [anon_sym_KEYUP] = ACTIONS(118),
    [anon_sym_SWCOLOR] = ACTIONS(106),
    [anon_sym_DP_SLEEP] = ACTIONS(94),
    [anon_sym_PREV_PROFILE] = ACTIONS(94),
    [anon_sym_NEXT_PROFILE] = ACTIONS(94),
    [anon_sym_GOTO_PROFILE] = ACTIONS(109),
    [anon_sym_HOLD] = ACTIONS(118),
    [anon_sym_EMUK] = ACTIONS(118),
    [anon_sym_LCR] = ACTIONS(121),
    [anon_sym_CTRL] = ACTIONS(124),
    [anon_sym_RCTRL] = ACTIONS(124),
    [anon_sym_SHIFT] = ACTIONS(124),
    [anon_sym_RSHIFT] = ACTIONS(124),
    [anon_sym_ALT] = ACTIONS(124),
    [anon_sym_RALT] = ACTIONS(124),
    [anon_sym_WINDOWS] = ACTIONS(124),
    [anon_sym_RWINDOWS] = ACTIONS(124),
    [anon_sym_COMMAND] = ACTIONS(124),
    [anon_sym_RCOMMAND] = ACTIONS(124),
    [anon_sym_OPTION] = ACTIONS(124),
    [anon_sym_ROPTION] = ACTIONS(124),
    [anon_sym_ESC] = ACTIONS(124),
    [anon_sym_ENTER] = ACTIONS(124),
    [anon_sym_UP] = ACTIONS(124),
    [anon_sym_DOWN] = ACTIONS(124),
    [anon_sym_LEFT] = ACTIONS(124),
    [anon_sym_RIGHT] = ACTIONS(124),
    [anon_sym_SPACE] = ACTIONS(124),
    [anon_sym_BACKSPACE] = ACTIONS(124),
    [anon_sym_TAB] = ACTIONS(124),
    [anon_sym_CAPSLOCK] = ACTIONS(124),
    [anon_sym_PRINTSCREEN] = ACTIONS(124),
    [anon_sym_SCROLLLOCK] = ACTIONS(124),
    [anon_sym_PAUSE] = ACTIONS(124),
    [anon_sym_BREAK] = ACTIONS(124),
    [anon_sym_INSERT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_HOME] = ACTIONS(124),
    [anon_sym_END] = ACTIONS(124),
    [anon_sym_PAGEUP] = ACTIONS(124),
    [anon_sym_PAGEDOWN] = ACTIONS(124),
    [anon_sym_MENU] = ACTIONS(124),
    [anon_sym_POWER] = ACTIONS(124),
    [aux_sym_special_key_token1] = ACTIONS(124),
    [aux_sym_special_key_token2] = ACTIONS(124),
    [aux_sym_special_key_token3] = ACTIONS(124),
    [anon_sym_MK_VOLUP] = ACTIONS(124),
    [anon_sym_MK_VOLDOWN] = ACTIONS(124),
    [anon_sym_MK_MUTE] = ACTIONS(124),
    [anon_sym_MK_PREV] = ACTIONS(124),
    [anon_sym_MK_NEXT] = ACTIONS(124),
    [anon_sym_MK_PP] = ACTIONS(124),
    [anon_sym_MK_STOP] = ACTIONS(124),
    [anon_sym_NUMLOCK] = ACTIONS(124),
    [anon_sym_KP_SLASH] = ACTIONS(124),
    [anon_sym_KP_ASTERISK] = ACTIONS(124),
    [anon_sym_KP_MINUS] = ACTIONS(124),
    [anon_sym_KP_PLUS] = ACTIONS(124),
    [anon_sym_KP_ENTER] = ACTIONS(124),
    [aux_sym_special_key_token4] = ACTIONS(124),
    [anon_sym_KP_DOT] = ACTIONS(124),
    [anon_sym_KP_EQUAL] = ACTIONS(124),
    [anon_sym_LMOUSE] = ACTIONS(124),
    [anon_sym_RMOUSE] = ACTIONS(124),
    [anon_sym_MMOUSE] = ACTIONS(124),
  },
  [5] = {
    [sym_newline] = STATE(149),
    [sym_block] = STATE(4),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_declaration] = STATE(149),
    [sym_if] = STATE(149),
    [sym_while] = STATE(149),
    [sym_function] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(149),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_ELSEIF] = ACTIONS(127),
    [anon_sym_ELSE] = ACTIONS(127),
    [anon_sym_END_IF] = ACTIONS(127),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [6] = {
    [sym_newline] = STATE(149),
    [sym_block] = STATE(5),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(149),
    [sym_assignment] = STATE(149),
    [sym_declaration] = STATE(149),
    [sym_if] = STATE(149),
    [sym_while] = STATE(149),
    [sym_function] = STATE(149),
    [sym_loop] = STATE(149),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(149),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_ELSEIF] = ACTIONS(129),
    [anon_sym_ELSE] = ACTIONS(129),
    [anon_sym_END_IF] = ACTIONS(129),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [7] = {
    [sym_newline] = STATE(152),
    [sym_block] = STATE(7),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(152),
    [sym_assignment] = STATE(152),
    [sym_declaration] = STATE(152),
    [sym_if] = STATE(152),
    [sym_while] = STATE(152),
    [sym_function] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(152),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(152),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_CR_LF] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(62),
    [aux_sym_identifier_token2] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DEFINE] = ACTIONS(68),
    [anon_sym_VAR] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(74),
    [anon_sym_WHILE] = ACTIONS(79),
    [anon_sym_FUNCTION] = ACTIONS(82),
    [anon_sym_END_FUNCTION] = ACTIONS(77),
    [sym_loop_key] = ACTIONS(85),
    [aux_sym_swc_key_token1] = ACTIONS(88),
    [aux_sym_swc_key_token2] = ACTIONS(88),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_LBREAK] = ACTIONS(94),
    [anon_sym_CONTINUE] = ACTIONS(94),
    [anon_sym_RETURN] = ACTIONS(94),
    [anon_sym_OLED_CURSOR] = ACTIONS(97),
    [anon_sym_OLED_PRINT] = ACTIONS(100),
    [anon_sym_OLED_CLEAR] = ACTIONS(94),
    [anon_sym_OLED_UPDATE] = ACTIONS(94),
    [anon_sym_OLED_RESTORE] = ACTIONS(94),
    [anon_sym_SWC_SET] = ACTIONS(103),
    [anon_sym_SWC_FILL] = ACTIONS(106),
    [anon_sym_SWC_RESET] = ACTIONS(109),
    [anon_sym_DEFAULTDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(109),
    [anon_sym_DELAY] = ACTIONS(109),
    [anon_sym_STRING] = ACTIONS(100),
    [anon_sym_STRINGLN] = ACTIONS(100),
    [anon_sym_REPEAT] = ACTIONS(109),
    [anon_sym_MOUSE_MOVE] = ACTIONS(112),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(115),
    [anon_sym_KEYDOWN] = ACTIONS(118),
    [anon_sym_KEYUP] = ACTIONS(118),
    [anon_sym_SWCOLOR] = ACTIONS(106),
    [anon_sym_DP_SLEEP] = ACTIONS(94),
    [anon_sym_PREV_PROFILE] = ACTIONS(94),
    [anon_sym_NEXT_PROFILE] = ACTIONS(94),
    [anon_sym_GOTO_PROFILE] = ACTIONS(109),
    [anon_sym_HOLD] = ACTIONS(118),
    [anon_sym_EMUK] = ACTIONS(118),
    [anon_sym_LCR] = ACTIONS(121),
    [anon_sym_CTRL] = ACTIONS(124),
    [anon_sym_RCTRL] = ACTIONS(124),
    [anon_sym_SHIFT] = ACTIONS(124),
    [anon_sym_RSHIFT] = ACTIONS(124),
    [anon_sym_ALT] = ACTIONS(124),
    [anon_sym_RALT] = ACTIONS(124),
    [anon_sym_WINDOWS] = ACTIONS(124),
    [anon_sym_RWINDOWS] = ACTIONS(124),
    [anon_sym_COMMAND] = ACTIONS(124),
    [anon_sym_RCOMMAND] = ACTIONS(124),
    [anon_sym_OPTION] = ACTIONS(124),
    [anon_sym_ROPTION] = ACTIONS(124),
    [anon_sym_ESC] = ACTIONS(124),
    [anon_sym_ENTER] = ACTIONS(124),
    [anon_sym_UP] = ACTIONS(124),
    [anon_sym_DOWN] = ACTIONS(124),
    [anon_sym_LEFT] = ACTIONS(124),
    [anon_sym_RIGHT] = ACTIONS(124),
    [anon_sym_SPACE] = ACTIONS(124),
    [anon_sym_BACKSPACE] = ACTIONS(124),
    [anon_sym_TAB] = ACTIONS(124),
    [anon_sym_CAPSLOCK] = ACTIONS(124),
    [anon_sym_PRINTSCREEN] = ACTIONS(124),
    [anon_sym_SCROLLLOCK] = ACTIONS(124),
    [anon_sym_PAUSE] = ACTIONS(124),
    [anon_sym_BREAK] = ACTIONS(124),
    [anon_sym_INSERT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_HOME] = ACTIONS(124),
    [anon_sym_END] = ACTIONS(124),
    [anon_sym_PAGEUP] = ACTIONS(124),
    [anon_sym_PAGEDOWN] = ACTIONS(124),
    [anon_sym_MENU] = ACTIONS(124),
    [anon_sym_POWER] = ACTIONS(124),
    [aux_sym_special_key_token1] = ACTIONS(124),
    [aux_sym_special_key_token2] = ACTIONS(124),
    [aux_sym_special_key_token3] = ACTIONS(124),
    [anon_sym_MK_VOLUP] = ACTIONS(124),
    [anon_sym_MK_VOLDOWN] = ACTIONS(124),
    [anon_sym_MK_MUTE] = ACTIONS(124),
    [anon_sym_MK_PREV] = ACTIONS(124),
    [anon_sym_MK_NEXT] = ACTIONS(124),
    [anon_sym_MK_PP] = ACTIONS(124),
    [anon_sym_MK_STOP] = ACTIONS(124),
    [anon_sym_NUMLOCK] = ACTIONS(124),
    [anon_sym_KP_SLASH] = ACTIONS(124),
    [anon_sym_KP_ASTERISK] = ACTIONS(124),
    [anon_sym_KP_MINUS] = ACTIONS(124),
    [anon_sym_KP_PLUS] = ACTIONS(124),
    [anon_sym_KP_ENTER] = ACTIONS(124),
    [aux_sym_special_key_token4] = ACTIONS(124),
    [anon_sym_KP_DOT] = ACTIONS(124),
    [anon_sym_KP_EQUAL] = ACTIONS(124),
    [anon_sym_LMOUSE] = ACTIONS(124),
    [anon_sym_RMOUSE] = ACTIONS(124),
    [anon_sym_MMOUSE] = ACTIONS(124),
  },
  [8] = {
    [sym_newline] = STATE(150),
    [sym_block] = STATE(8),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(150),
    [sym_assignment] = STATE(150),
    [sym_declaration] = STATE(150),
    [sym_if] = STATE(150),
    [sym_while] = STATE(150),
    [sym_function] = STATE(150),
    [sym_loop] = STATE(150),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(150),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(150),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_CR_LF] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(62),
    [aux_sym_identifier_token2] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DEFINE] = ACTIONS(68),
    [anon_sym_VAR] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(74),
    [anon_sym_WHILE] = ACTIONS(79),
    [anon_sym_FUNCTION] = ACTIONS(82),
    [sym_loop_key] = ACTIONS(85),
    [aux_sym_swc_key_token1] = ACTIONS(88),
    [aux_sym_swc_key_token2] = ACTIONS(88),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_LBREAK] = ACTIONS(94),
    [anon_sym_CONTINUE] = ACTIONS(94),
    [anon_sym_RETURN] = ACTIONS(94),
    [anon_sym_OLED_CURSOR] = ACTIONS(97),
    [anon_sym_OLED_PRINT] = ACTIONS(100),
    [anon_sym_OLED_CLEAR] = ACTIONS(94),
    [anon_sym_OLED_UPDATE] = ACTIONS(94),
    [anon_sym_OLED_RESTORE] = ACTIONS(94),
    [anon_sym_SWC_SET] = ACTIONS(103),
    [anon_sym_SWC_FILL] = ACTIONS(106),
    [anon_sym_SWC_RESET] = ACTIONS(109),
    [anon_sym_DEFAULTDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(109),
    [anon_sym_DELAY] = ACTIONS(109),
    [anon_sym_STRING] = ACTIONS(100),
    [anon_sym_STRINGLN] = ACTIONS(100),
    [anon_sym_REPEAT] = ACTIONS(109),
    [anon_sym_MOUSE_MOVE] = ACTIONS(112),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(115),
    [anon_sym_KEYDOWN] = ACTIONS(118),
    [anon_sym_KEYUP] = ACTIONS(118),
    [anon_sym_SWCOLOR] = ACTIONS(106),
    [anon_sym_DP_SLEEP] = ACTIONS(94),
    [anon_sym_PREV_PROFILE] = ACTIONS(94),
    [anon_sym_NEXT_PROFILE] = ACTIONS(94),
    [anon_sym_GOTO_PROFILE] = ACTIONS(109),
    [anon_sym_HOLD] = ACTIONS(118),
    [anon_sym_EMUK] = ACTIONS(118),
    [anon_sym_LCR] = ACTIONS(121),
    [anon_sym_CTRL] = ACTIONS(124),
    [anon_sym_RCTRL] = ACTIONS(124),
    [anon_sym_SHIFT] = ACTIONS(124),
    [anon_sym_RSHIFT] = ACTIONS(124),
    [anon_sym_ALT] = ACTIONS(124),
    [anon_sym_RALT] = ACTIONS(124),
    [anon_sym_WINDOWS] = ACTIONS(124),
    [anon_sym_RWINDOWS] = ACTIONS(124),
    [anon_sym_COMMAND] = ACTIONS(124),
    [anon_sym_RCOMMAND] = ACTIONS(124),
    [anon_sym_OPTION] = ACTIONS(124),
    [anon_sym_ROPTION] = ACTIONS(124),
    [anon_sym_ESC] = ACTIONS(124),
    [anon_sym_ENTER] = ACTIONS(124),
    [anon_sym_UP] = ACTIONS(124),
    [anon_sym_DOWN] = ACTIONS(124),
    [anon_sym_LEFT] = ACTIONS(124),
    [anon_sym_RIGHT] = ACTIONS(124),
    [anon_sym_SPACE] = ACTIONS(124),
    [anon_sym_BACKSPACE] = ACTIONS(124),
    [anon_sym_TAB] = ACTIONS(124),
    [anon_sym_CAPSLOCK] = ACTIONS(124),
    [anon_sym_PRINTSCREEN] = ACTIONS(124),
    [anon_sym_SCROLLLOCK] = ACTIONS(124),
    [anon_sym_PAUSE] = ACTIONS(124),
    [anon_sym_BREAK] = ACTIONS(124),
    [anon_sym_INSERT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_HOME] = ACTIONS(124),
    [anon_sym_END] = ACTIONS(124),
    [anon_sym_PAGEUP] = ACTIONS(124),
    [anon_sym_PAGEDOWN] = ACTIONS(124),
    [anon_sym_MENU] = ACTIONS(124),
    [anon_sym_POWER] = ACTIONS(124),
    [aux_sym_special_key_token1] = ACTIONS(124),
    [aux_sym_special_key_token2] = ACTIONS(124),
    [aux_sym_special_key_token3] = ACTIONS(124),
    [anon_sym_MK_VOLUP] = ACTIONS(124),
    [anon_sym_MK_VOLDOWN] = ACTIONS(124),
    [anon_sym_MK_MUTE] = ACTIONS(124),
    [anon_sym_MK_PREV] = ACTIONS(124),
    [anon_sym_MK_NEXT] = ACTIONS(124),
    [anon_sym_MK_PP] = ACTIONS(124),
    [anon_sym_MK_STOP] = ACTIONS(124),
    [anon_sym_NUMLOCK] = ACTIONS(124),
    [anon_sym_KP_SLASH] = ACTIONS(124),
    [anon_sym_KP_ASTERISK] = ACTIONS(124),
    [anon_sym_KP_MINUS] = ACTIONS(124),
    [anon_sym_KP_PLUS] = ACTIONS(124),
    [anon_sym_KP_ENTER] = ACTIONS(124),
    [aux_sym_special_key_token4] = ACTIONS(124),
    [anon_sym_KP_DOT] = ACTIONS(124),
    [anon_sym_KP_EQUAL] = ACTIONS(124),
    [anon_sym_LMOUSE] = ACTIONS(124),
    [anon_sym_RMOUSE] = ACTIONS(124),
    [anon_sym_MMOUSE] = ACTIONS(124),
  },
  [9] = {
    [sym_newline] = STATE(141),
    [sym_block] = STATE(13),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(141),
    [sym_assignment] = STATE(141),
    [sym_declaration] = STATE(141),
    [sym_if] = STATE(141),
    [sym_while] = STATE(141),
    [sym_function] = STATE(141),
    [sym_loop] = STATE(141),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(141),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(141),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_END_WHILE] = ACTIONS(133),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [10] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(17),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(17),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_END_IF] = ACTIONS(135),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [11] = {
    [sym_newline] = STATE(152),
    [sym_block] = STATE(7),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(152),
    [sym_assignment] = STATE(152),
    [sym_declaration] = STATE(152),
    [sym_if] = STATE(152),
    [sym_while] = STATE(152),
    [sym_function] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(152),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(152),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [anon_sym_END_FUNCTION] = ACTIONS(137),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [12] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(12),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_CR_LF] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(62),
    [aux_sym_identifier_token2] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DEFINE] = ACTIONS(68),
    [anon_sym_VAR] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(74),
    [anon_sym_END_IF] = ACTIONS(77),
    [anon_sym_WHILE] = ACTIONS(79),
    [anon_sym_FUNCTION] = ACTIONS(82),
    [sym_loop_key] = ACTIONS(85),
    [aux_sym_swc_key_token1] = ACTIONS(88),
    [aux_sym_swc_key_token2] = ACTIONS(88),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_LBREAK] = ACTIONS(94),
    [anon_sym_CONTINUE] = ACTIONS(94),
    [anon_sym_RETURN] = ACTIONS(94),
    [anon_sym_OLED_CURSOR] = ACTIONS(97),
    [anon_sym_OLED_PRINT] = ACTIONS(100),
    [anon_sym_OLED_CLEAR] = ACTIONS(94),
    [anon_sym_OLED_UPDATE] = ACTIONS(94),
    [anon_sym_OLED_RESTORE] = ACTIONS(94),
    [anon_sym_SWC_SET] = ACTIONS(103),
    [anon_sym_SWC_FILL] = ACTIONS(106),
    [anon_sym_SWC_RESET] = ACTIONS(109),
    [anon_sym_DEFAULTDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(109),
    [anon_sym_DELAY] = ACTIONS(109),
    [anon_sym_STRING] = ACTIONS(100),
    [anon_sym_STRINGLN] = ACTIONS(100),
    [anon_sym_REPEAT] = ACTIONS(109),
    [anon_sym_MOUSE_MOVE] = ACTIONS(112),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(115),
    [anon_sym_KEYDOWN] = ACTIONS(118),
    [anon_sym_KEYUP] = ACTIONS(118),
    [anon_sym_SWCOLOR] = ACTIONS(106),
    [anon_sym_DP_SLEEP] = ACTIONS(94),
    [anon_sym_PREV_PROFILE] = ACTIONS(94),
    [anon_sym_NEXT_PROFILE] = ACTIONS(94),
    [anon_sym_GOTO_PROFILE] = ACTIONS(109),
    [anon_sym_HOLD] = ACTIONS(118),
    [anon_sym_EMUK] = ACTIONS(118),
    [anon_sym_LCR] = ACTIONS(121),
    [anon_sym_CTRL] = ACTIONS(124),
    [anon_sym_RCTRL] = ACTIONS(124),
    [anon_sym_SHIFT] = ACTIONS(124),
    [anon_sym_RSHIFT] = ACTIONS(124),
    [anon_sym_ALT] = ACTIONS(124),
    [anon_sym_RALT] = ACTIONS(124),
    [anon_sym_WINDOWS] = ACTIONS(124),
    [anon_sym_RWINDOWS] = ACTIONS(124),
    [anon_sym_COMMAND] = ACTIONS(124),
    [anon_sym_RCOMMAND] = ACTIONS(124),
    [anon_sym_OPTION] = ACTIONS(124),
    [anon_sym_ROPTION] = ACTIONS(124),
    [anon_sym_ESC] = ACTIONS(124),
    [anon_sym_ENTER] = ACTIONS(124),
    [anon_sym_UP] = ACTIONS(124),
    [anon_sym_DOWN] = ACTIONS(124),
    [anon_sym_LEFT] = ACTIONS(124),
    [anon_sym_RIGHT] = ACTIONS(124),
    [anon_sym_SPACE] = ACTIONS(124),
    [anon_sym_BACKSPACE] = ACTIONS(124),
    [anon_sym_TAB] = ACTIONS(124),
    [anon_sym_CAPSLOCK] = ACTIONS(124),
    [anon_sym_PRINTSCREEN] = ACTIONS(124),
    [anon_sym_SCROLLLOCK] = ACTIONS(124),
    [anon_sym_PAUSE] = ACTIONS(124),
    [anon_sym_BREAK] = ACTIONS(124),
    [anon_sym_INSERT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_HOME] = ACTIONS(124),
    [anon_sym_END] = ACTIONS(124),
    [anon_sym_PAGEUP] = ACTIONS(124),
    [anon_sym_PAGEDOWN] = ACTIONS(124),
    [anon_sym_MENU] = ACTIONS(124),
    [anon_sym_POWER] = ACTIONS(124),
    [aux_sym_special_key_token1] = ACTIONS(124),
    [aux_sym_special_key_token2] = ACTIONS(124),
    [aux_sym_special_key_token3] = ACTIONS(124),
    [anon_sym_MK_VOLUP] = ACTIONS(124),
    [anon_sym_MK_VOLDOWN] = ACTIONS(124),
    [anon_sym_MK_MUTE] = ACTIONS(124),
    [anon_sym_MK_PREV] = ACTIONS(124),
    [anon_sym_MK_NEXT] = ACTIONS(124),
    [anon_sym_MK_PP] = ACTIONS(124),
    [anon_sym_MK_STOP] = ACTIONS(124),
    [anon_sym_NUMLOCK] = ACTIONS(124),
    [anon_sym_KP_SLASH] = ACTIONS(124),
    [anon_sym_KP_ASTERISK] = ACTIONS(124),
    [anon_sym_KP_MINUS] = ACTIONS(124),
    [anon_sym_KP_PLUS] = ACTIONS(124),
    [anon_sym_KP_ENTER] = ACTIONS(124),
    [aux_sym_special_key_token4] = ACTIONS(124),
    [anon_sym_KP_DOT] = ACTIONS(124),
    [anon_sym_KP_EQUAL] = ACTIONS(124),
    [anon_sym_LMOUSE] = ACTIONS(124),
    [anon_sym_RMOUSE] = ACTIONS(124),
    [anon_sym_MMOUSE] = ACTIONS(124),
  },
  [13] = {
    [sym_newline] = STATE(141),
    [sym_block] = STATE(13),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(141),
    [sym_assignment] = STATE(141),
    [sym_declaration] = STATE(141),
    [sym_if] = STATE(141),
    [sym_while] = STATE(141),
    [sym_function] = STATE(141),
    [sym_loop] = STATE(141),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(141),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(141),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_CR_LF] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(62),
    [aux_sym_identifier_token2] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DEFINE] = ACTIONS(68),
    [anon_sym_VAR] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(74),
    [anon_sym_WHILE] = ACTIONS(79),
    [anon_sym_END_WHILE] = ACTIONS(77),
    [anon_sym_FUNCTION] = ACTIONS(82),
    [sym_loop_key] = ACTIONS(85),
    [aux_sym_swc_key_token1] = ACTIONS(88),
    [aux_sym_swc_key_token2] = ACTIONS(88),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_LBREAK] = ACTIONS(94),
    [anon_sym_CONTINUE] = ACTIONS(94),
    [anon_sym_RETURN] = ACTIONS(94),
    [anon_sym_OLED_CURSOR] = ACTIONS(97),
    [anon_sym_OLED_PRINT] = ACTIONS(100),
    [anon_sym_OLED_CLEAR] = ACTIONS(94),
    [anon_sym_OLED_UPDATE] = ACTIONS(94),
    [anon_sym_OLED_RESTORE] = ACTIONS(94),
    [anon_sym_SWC_SET] = ACTIONS(103),
    [anon_sym_SWC_FILL] = ACTIONS(106),
    [anon_sym_SWC_RESET] = ACTIONS(109),
    [anon_sym_DEFAULTDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(109),
    [anon_sym_DELAY] = ACTIONS(109),
    [anon_sym_STRING] = ACTIONS(100),
    [anon_sym_STRINGLN] = ACTIONS(100),
    [anon_sym_REPEAT] = ACTIONS(109),
    [anon_sym_MOUSE_MOVE] = ACTIONS(112),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(115),
    [anon_sym_KEYDOWN] = ACTIONS(118),
    [anon_sym_KEYUP] = ACTIONS(118),
    [anon_sym_SWCOLOR] = ACTIONS(106),
    [anon_sym_DP_SLEEP] = ACTIONS(94),
    [anon_sym_PREV_PROFILE] = ACTIONS(94),
    [anon_sym_NEXT_PROFILE] = ACTIONS(94),
    [anon_sym_GOTO_PROFILE] = ACTIONS(109),
    [anon_sym_HOLD] = ACTIONS(118),
    [anon_sym_EMUK] = ACTIONS(118),
    [anon_sym_LCR] = ACTIONS(121),
    [anon_sym_CTRL] = ACTIONS(124),
    [anon_sym_RCTRL] = ACTIONS(124),
    [anon_sym_SHIFT] = ACTIONS(124),
    [anon_sym_RSHIFT] = ACTIONS(124),
    [anon_sym_ALT] = ACTIONS(124),
    [anon_sym_RALT] = ACTIONS(124),
    [anon_sym_WINDOWS] = ACTIONS(124),
    [anon_sym_RWINDOWS] = ACTIONS(124),
    [anon_sym_COMMAND] = ACTIONS(124),
    [anon_sym_RCOMMAND] = ACTIONS(124),
    [anon_sym_OPTION] = ACTIONS(124),
    [anon_sym_ROPTION] = ACTIONS(124),
    [anon_sym_ESC] = ACTIONS(124),
    [anon_sym_ENTER] = ACTIONS(124),
    [anon_sym_UP] = ACTIONS(124),
    [anon_sym_DOWN] = ACTIONS(124),
    [anon_sym_LEFT] = ACTIONS(124),
    [anon_sym_RIGHT] = ACTIONS(124),
    [anon_sym_SPACE] = ACTIONS(124),
    [anon_sym_BACKSPACE] = ACTIONS(124),
    [anon_sym_TAB] = ACTIONS(124),
    [anon_sym_CAPSLOCK] = ACTIONS(124),
    [anon_sym_PRINTSCREEN] = ACTIONS(124),
    [anon_sym_SCROLLLOCK] = ACTIONS(124),
    [anon_sym_PAUSE] = ACTIONS(124),
    [anon_sym_BREAK] = ACTIONS(124),
    [anon_sym_INSERT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_HOME] = ACTIONS(124),
    [anon_sym_END] = ACTIONS(124),
    [anon_sym_PAGEUP] = ACTIONS(124),
    [anon_sym_PAGEDOWN] = ACTIONS(124),
    [anon_sym_MENU] = ACTIONS(124),
    [anon_sym_POWER] = ACTIONS(124),
    [aux_sym_special_key_token1] = ACTIONS(124),
    [aux_sym_special_key_token2] = ACTIONS(124),
    [aux_sym_special_key_token3] = ACTIONS(124),
    [anon_sym_MK_VOLUP] = ACTIONS(124),
    [anon_sym_MK_VOLDOWN] = ACTIONS(124),
    [anon_sym_MK_MUTE] = ACTIONS(124),
    [anon_sym_MK_PREV] = ACTIONS(124),
    [anon_sym_MK_NEXT] = ACTIONS(124),
    [anon_sym_MK_PP] = ACTIONS(124),
    [anon_sym_MK_STOP] = ACTIONS(124),
    [anon_sym_NUMLOCK] = ACTIONS(124),
    [anon_sym_KP_SLASH] = ACTIONS(124),
    [anon_sym_KP_ASTERISK] = ACTIONS(124),
    [anon_sym_KP_MINUS] = ACTIONS(124),
    [anon_sym_KP_PLUS] = ACTIONS(124),
    [anon_sym_KP_ENTER] = ACTIONS(124),
    [aux_sym_special_key_token4] = ACTIONS(124),
    [anon_sym_KP_DOT] = ACTIONS(124),
    [anon_sym_KP_EQUAL] = ACTIONS(124),
    [anon_sym_LMOUSE] = ACTIONS(124),
    [anon_sym_RMOUSE] = ACTIONS(124),
    [anon_sym_MMOUSE] = ACTIONS(124),
  },
  [14] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(15),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_END_IF] = ACTIONS(139),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [15] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(12),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_END_IF] = ACTIONS(141),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [16] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(18),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(18),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_END_IF] = ACTIONS(141),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [17] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(12),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_END_IF] = ACTIONS(143),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [18] = {
    [sym_newline] = STATE(145),
    [sym_block] = STATE(12),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(145),
    [sym_assignment] = STATE(145),
    [sym_declaration] = STATE(145),
    [sym_if] = STATE(145),
    [sym_while] = STATE(145),
    [sym_function] = STATE(145),
    [sym_loop] = STATE(145),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(145),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_END_IF] = ACTIONS(135),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [19] = {
    [sym_newline] = STATE(150),
    [sym_block] = STATE(8),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(150),
    [sym_assignment] = STATE(150),
    [sym_declaration] = STATE(150),
    [sym_if] = STATE(150),
    [sym_while] = STATE(150),
    [sym_function] = STATE(150),
    [sym_loop] = STATE(150),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(150),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(150),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [20] = {
    [sym_newline] = STATE(141),
    [sym_block] = STATE(9),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(141),
    [sym_assignment] = STATE(141),
    [sym_declaration] = STATE(141),
    [sym_if] = STATE(141),
    [sym_while] = STATE(141),
    [sym_function] = STATE(141),
    [sym_loop] = STATE(141),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(141),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(141),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_END_WHILE] = ACTIONS(147),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [21] = {
    [sym_newline] = STATE(152),
    [sym_block] = STATE(11),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(152),
    [sym_assignment] = STATE(152),
    [sym_declaration] = STATE(152),
    [sym_if] = STATE(152),
    [sym_while] = STATE(152),
    [sym_function] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(152),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(152),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [anon_sym_END_FUNCTION] = ACTIONS(149),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [22] = {
    [sym_newline] = STATE(140),
    [sym_block] = STATE(24),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(140),
    [sym_assignment] = STATE(140),
    [sym_declaration] = STATE(140),
    [sym_if] = STATE(140),
    [sym_while] = STATE(140),
    [sym_function] = STATE(140),
    [sym_loop] = STATE(140),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(140),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(140),
    [aux_sym_source_file_repeat1] = STATE(24),
    [anon_sym_CR_LF] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [23] = {
    [sym_newline] = STATE(140),
    [sym_block] = STATE(22),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(140),
    [sym_assignment] = STATE(140),
    [sym_declaration] = STATE(140),
    [sym_if] = STATE(140),
    [sym_while] = STATE(140),
    [sym_function] = STATE(140),
    [sym_loop] = STATE(140),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(140),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(140),
    [aux_sym_source_file_repeat1] = STATE(22),
    [anon_sym_CR_LF] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [aux_sym_identifier_token2] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_DEFINE] = ACTIONS(11),
    [anon_sym_VAR] = ACTIONS(13),
    [anon_sym_IF] = ACTIONS(15),
    [anon_sym_WHILE] = ACTIONS(17),
    [anon_sym_FUNCTION] = ACTIONS(19),
    [sym_loop_key] = ACTIONS(21),
    [aux_sym_swc_key_token1] = ACTIONS(23),
    [aux_sym_swc_key_token2] = ACTIONS(23),
    [anon_sym_REM] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_LBREAK] = ACTIONS(27),
    [anon_sym_CONTINUE] = ACTIONS(27),
    [anon_sym_RETURN] = ACTIONS(27),
    [anon_sym_OLED_CURSOR] = ACTIONS(29),
    [anon_sym_OLED_PRINT] = ACTIONS(31),
    [anon_sym_OLED_CLEAR] = ACTIONS(27),
    [anon_sym_OLED_UPDATE] = ACTIONS(27),
    [anon_sym_OLED_RESTORE] = ACTIONS(27),
    [anon_sym_SWC_SET] = ACTIONS(33),
    [anon_sym_SWC_FILL] = ACTIONS(35),
    [anon_sym_SWC_RESET] = ACTIONS(37),
    [anon_sym_DEFAULTDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(37),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(37),
    [anon_sym_DELAY] = ACTIONS(37),
    [anon_sym_STRING] = ACTIONS(31),
    [anon_sym_STRINGLN] = ACTIONS(31),
    [anon_sym_REPEAT] = ACTIONS(37),
    [anon_sym_MOUSE_MOVE] = ACTIONS(39),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(41),
    [anon_sym_KEYDOWN] = ACTIONS(43),
    [anon_sym_KEYUP] = ACTIONS(43),
    [anon_sym_SWCOLOR] = ACTIONS(35),
    [anon_sym_DP_SLEEP] = ACTIONS(27),
    [anon_sym_PREV_PROFILE] = ACTIONS(27),
    [anon_sym_NEXT_PROFILE] = ACTIONS(27),
    [anon_sym_GOTO_PROFILE] = ACTIONS(37),
    [anon_sym_HOLD] = ACTIONS(43),
    [anon_sym_EMUK] = ACTIONS(43),
    [anon_sym_LCR] = ACTIONS(45),
    [anon_sym_CTRL] = ACTIONS(47),
    [anon_sym_RCTRL] = ACTIONS(47),
    [anon_sym_SHIFT] = ACTIONS(47),
    [anon_sym_RSHIFT] = ACTIONS(47),
    [anon_sym_ALT] = ACTIONS(47),
    [anon_sym_RALT] = ACTIONS(47),
    [anon_sym_WINDOWS] = ACTIONS(47),
    [anon_sym_RWINDOWS] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_RCOMMAND] = ACTIONS(47),
    [anon_sym_OPTION] = ACTIONS(47),
    [anon_sym_ROPTION] = ACTIONS(47),
    [anon_sym_ESC] = ACTIONS(47),
    [anon_sym_ENTER] = ACTIONS(47),
    [anon_sym_UP] = ACTIONS(47),
    [anon_sym_DOWN] = ACTIONS(47),
    [anon_sym_LEFT] = ACTIONS(47),
    [anon_sym_RIGHT] = ACTIONS(47),
    [anon_sym_SPACE] = ACTIONS(47),
    [anon_sym_BACKSPACE] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(47),
    [anon_sym_CAPSLOCK] = ACTIONS(47),
    [anon_sym_PRINTSCREEN] = ACTIONS(47),
    [anon_sym_SCROLLLOCK] = ACTIONS(47),
    [anon_sym_PAUSE] = ACTIONS(47),
    [anon_sym_BREAK] = ACTIONS(47),
    [anon_sym_INSERT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_HOME] = ACTIONS(47),
    [anon_sym_END] = ACTIONS(47),
    [anon_sym_PAGEUP] = ACTIONS(47),
    [anon_sym_PAGEDOWN] = ACTIONS(47),
    [anon_sym_MENU] = ACTIONS(47),
    [anon_sym_POWER] = ACTIONS(47),
    [aux_sym_special_key_token1] = ACTIONS(47),
    [aux_sym_special_key_token2] = ACTIONS(47),
    [aux_sym_special_key_token3] = ACTIONS(47),
    [anon_sym_MK_VOLUP] = ACTIONS(47),
    [anon_sym_MK_VOLDOWN] = ACTIONS(47),
    [anon_sym_MK_MUTE] = ACTIONS(47),
    [anon_sym_MK_PREV] = ACTIONS(47),
    [anon_sym_MK_NEXT] = ACTIONS(47),
    [anon_sym_MK_PP] = ACTIONS(47),
    [anon_sym_MK_STOP] = ACTIONS(47),
    [anon_sym_NUMLOCK] = ACTIONS(47),
    [anon_sym_KP_SLASH] = ACTIONS(47),
    [anon_sym_KP_ASTERISK] = ACTIONS(47),
    [anon_sym_KP_MINUS] = ACTIONS(47),
    [anon_sym_KP_PLUS] = ACTIONS(47),
    [anon_sym_KP_ENTER] = ACTIONS(47),
    [aux_sym_special_key_token4] = ACTIONS(47),
    [anon_sym_KP_DOT] = ACTIONS(47),
    [anon_sym_KP_EQUAL] = ACTIONS(47),
    [anon_sym_LMOUSE] = ACTIONS(47),
    [anon_sym_RMOUSE] = ACTIONS(47),
    [anon_sym_MMOUSE] = ACTIONS(47),
  },
  [24] = {
    [sym_newline] = STATE(140),
    [sym_block] = STATE(24),
    [sym_identifier] = STATE(182),
    [sym_var] = STATE(181),
    [sym_func] = STATE(140),
    [sym_assignment] = STATE(140),
    [sym_declaration] = STATE(140),
    [sym_if] = STATE(140),
    [sym_while] = STATE(140),
    [sym_function] = STATE(140),
    [sym_loop] = STATE(140),
    [sym_swc_key] = STATE(115),
    [sym_comment] = STATE(180),
    [sym_command] = STATE(140),
    [sym_special_key] = STATE(39),
    [sym_keyseq] = STATE(140),
    [aux_sym_source_file_repeat1] = STATE(24),
    [anon_sym_CR_LF] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_identifier_token1] = ACTIONS(62),
    [aux_sym_identifier_token2] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_DEFINE] = ACTIONS(68),
    [anon_sym_VAR] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(74),
    [anon_sym_WHILE] = ACTIONS(79),
    [anon_sym_FUNCTION] = ACTIONS(82),
    [sym_loop_key] = ACTIONS(85),
    [aux_sym_swc_key_token1] = ACTIONS(88),
    [aux_sym_swc_key_token2] = ACTIONS(88),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(91),
    [anon_sym_LBREAK] = ACTIONS(94),
    [anon_sym_CONTINUE] = ACTIONS(94),
    [anon_sym_RETURN] = ACTIONS(94),
    [anon_sym_OLED_CURSOR] = ACTIONS(97),
    [anon_sym_OLED_PRINT] = ACTIONS(100),
    [anon_sym_OLED_CLEAR] = ACTIONS(94),
    [anon_sym_OLED_UPDATE] = ACTIONS(94),
    [anon_sym_OLED_RESTORE] = ACTIONS(94),
    [anon_sym_SWC_SET] = ACTIONS(103),
    [anon_sym_SWC_FILL] = ACTIONS(106),
    [anon_sym_SWC_RESET] = ACTIONS(109),
    [anon_sym_DEFAULTDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(109),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(109),
    [anon_sym_DELAY] = ACTIONS(109),
    [anon_sym_STRING] = ACTIONS(100),
    [anon_sym_STRINGLN] = ACTIONS(100),
    [anon_sym_REPEAT] = ACTIONS(109),
    [anon_sym_MOUSE_MOVE] = ACTIONS(112),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(115),
    [anon_sym_KEYDOWN] = ACTIONS(118),
    [anon_sym_KEYUP] = ACTIONS(118),
    [anon_sym_SWCOLOR] = ACTIONS(106),
    [anon_sym_DP_SLEEP] = ACTIONS(94),
    [anon_sym_PREV_PROFILE] = ACTIONS(94),
    [anon_sym_NEXT_PROFILE] = ACTIONS(94),
    [anon_sym_GOTO_PROFILE] = ACTIONS(109),
    [anon_sym_HOLD] = ACTIONS(118),
    [anon_sym_EMUK] = ACTIONS(118),
    [anon_sym_LCR] = ACTIONS(121),
    [anon_sym_CTRL] = ACTIONS(124),
    [anon_sym_RCTRL] = ACTIONS(124),
    [anon_sym_SHIFT] = ACTIONS(124),
    [anon_sym_RSHIFT] = ACTIONS(124),
    [anon_sym_ALT] = ACTIONS(124),
    [anon_sym_RALT] = ACTIONS(124),
    [anon_sym_WINDOWS] = ACTIONS(124),
    [anon_sym_RWINDOWS] = ACTIONS(124),
    [anon_sym_COMMAND] = ACTIONS(124),
    [anon_sym_RCOMMAND] = ACTIONS(124),
    [anon_sym_OPTION] = ACTIONS(124),
    [anon_sym_ROPTION] = ACTIONS(124),
    [anon_sym_ESC] = ACTIONS(124),
    [anon_sym_ENTER] = ACTIONS(124),
    [anon_sym_UP] = ACTIONS(124),
    [anon_sym_DOWN] = ACTIONS(124),
    [anon_sym_LEFT] = ACTIONS(124),
    [anon_sym_RIGHT] = ACTIONS(124),
    [anon_sym_SPACE] = ACTIONS(124),
    [anon_sym_BACKSPACE] = ACTIONS(124),
    [anon_sym_TAB] = ACTIONS(124),
    [anon_sym_CAPSLOCK] = ACTIONS(124),
    [anon_sym_PRINTSCREEN] = ACTIONS(124),
    [anon_sym_SCROLLLOCK] = ACTIONS(124),
    [anon_sym_PAUSE] = ACTIONS(124),
    [anon_sym_BREAK] = ACTIONS(124),
    [anon_sym_INSERT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_HOME] = ACTIONS(124),
    [anon_sym_END] = ACTIONS(124),
    [anon_sym_PAGEUP] = ACTIONS(124),
    [anon_sym_PAGEDOWN] = ACTIONS(124),
    [anon_sym_MENU] = ACTIONS(124),
    [anon_sym_POWER] = ACTIONS(124),
    [aux_sym_special_key_token1] = ACTIONS(124),
    [aux_sym_special_key_token2] = ACTIONS(124),
    [aux_sym_special_key_token3] = ACTIONS(124),
    [anon_sym_MK_VOLUP] = ACTIONS(124),
    [anon_sym_MK_VOLDOWN] = ACTIONS(124),
    [anon_sym_MK_MUTE] = ACTIONS(124),
    [anon_sym_MK_PREV] = ACTIONS(124),
    [anon_sym_MK_NEXT] = ACTIONS(124),
    [anon_sym_MK_PP] = ACTIONS(124),
    [anon_sym_MK_STOP] = ACTIONS(124),
    [anon_sym_NUMLOCK] = ACTIONS(124),
    [anon_sym_KP_SLASH] = ACTIONS(124),
    [anon_sym_KP_ASTERISK] = ACTIONS(124),
    [anon_sym_KP_MINUS] = ACTIONS(124),
    [anon_sym_KP_PLUS] = ACTIONS(124),
    [anon_sym_KP_ENTER] = ACTIONS(124),
    [aux_sym_special_key_token4] = ACTIONS(124),
    [anon_sym_KP_DOT] = ACTIONS(124),
    [anon_sym_KP_EQUAL] = ACTIONS(124),
    [anon_sym_LMOUSE] = ACTIONS(124),
    [anon_sym_RMOUSE] = ACTIONS(124),
    [anon_sym_MMOUSE] = ACTIONS(124),
  },
  [25] = {
    [anon_sym_CR_LF] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_identifier_token2] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_VAR] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_ELSEIF] = ACTIONS(155),
    [anon_sym_ELSE] = ACTIONS(155),
    [anon_sym_END_IF] = ACTIONS(155),
    [anon_sym_WHILE] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [sym_loop_key] = ACTIONS(155),
    [aux_sym_swc_key_token1] = ACTIONS(155),
    [aux_sym_swc_key_token2] = ACTIONS(155),
    [anon_sym_REM] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_LBREAK] = ACTIONS(155),
    [anon_sym_CONTINUE] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_OLED_CURSOR] = ACTIONS(155),
    [anon_sym_OLED_PRINT] = ACTIONS(155),
    [anon_sym_OLED_CLEAR] = ACTIONS(155),
    [anon_sym_OLED_UPDATE] = ACTIONS(155),
    [anon_sym_OLED_RESTORE] = ACTIONS(155),
    [anon_sym_SWC_SET] = ACTIONS(155),
    [anon_sym_SWC_FILL] = ACTIONS(155),
    [anon_sym_SWC_RESET] = ACTIONS(155),
    [anon_sym_DEFAULTDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(155),
    [anon_sym_DELAY] = ACTIONS(155),
    [anon_sym_STRING] = ACTIONS(155),
    [anon_sym_STRINGLN] = ACTIONS(155),
    [anon_sym_REPEAT] = ACTIONS(155),
    [anon_sym_MOUSE_MOVE] = ACTIONS(155),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(155),
    [anon_sym_KEYDOWN] = ACTIONS(155),
    [anon_sym_KEYUP] = ACTIONS(155),
    [anon_sym_SWCOLOR] = ACTIONS(155),
    [anon_sym_DP_SLEEP] = ACTIONS(155),
    [anon_sym_PREV_PROFILE] = ACTIONS(155),
    [anon_sym_NEXT_PROFILE] = ACTIONS(155),
    [anon_sym_GOTO_PROFILE] = ACTIONS(155),
    [anon_sym_HOLD] = ACTIONS(155),
    [anon_sym_EMUK] = ACTIONS(155),
    [anon_sym_LCR] = ACTIONS(155),
    [anon_sym_CTRL] = ACTIONS(155),
    [anon_sym_RCTRL] = ACTIONS(155),
    [anon_sym_SHIFT] = ACTIONS(155),
    [anon_sym_RSHIFT] = ACTIONS(155),
    [anon_sym_ALT] = ACTIONS(155),
    [anon_sym_RALT] = ACTIONS(155),
    [anon_sym_WINDOWS] = ACTIONS(155),
    [anon_sym_RWINDOWS] = ACTIONS(155),
    [anon_sym_COMMAND] = ACTIONS(155),
    [anon_sym_RCOMMAND] = ACTIONS(155),
    [anon_sym_OPTION] = ACTIONS(155),
    [anon_sym_ROPTION] = ACTIONS(155),
    [anon_sym_ESC] = ACTIONS(155),
    [anon_sym_ENTER] = ACTIONS(155),
    [anon_sym_UP] = ACTIONS(155),
    [anon_sym_DOWN] = ACTIONS(155),
    [anon_sym_LEFT] = ACTIONS(155),
    [anon_sym_RIGHT] = ACTIONS(155),
    [anon_sym_SPACE] = ACTIONS(155),
    [anon_sym_BACKSPACE] = ACTIONS(155),
    [anon_sym_TAB] = ACTIONS(155),
    [anon_sym_CAPSLOCK] = ACTIONS(155),
    [anon_sym_PRINTSCREEN] = ACTIONS(155),
    [anon_sym_SCROLLLOCK] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(155),
    [anon_sym_BREAK] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_HOME] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_PAGEUP] = ACTIONS(155),
    [anon_sym_PAGEDOWN] = ACTIONS(155),
    [anon_sym_MENU] = ACTIONS(155),
    [anon_sym_POWER] = ACTIONS(155),
    [aux_sym_special_key_token1] = ACTIONS(155),
    [aux_sym_special_key_token2] = ACTIONS(155),
    [aux_sym_special_key_token3] = ACTIONS(155),
    [anon_sym_MK_VOLUP] = ACTIONS(155),
    [anon_sym_MK_VOLDOWN] = ACTIONS(155),
    [anon_sym_MK_MUTE] = ACTIONS(155),
    [anon_sym_MK_PREV] = ACTIONS(155),
    [anon_sym_MK_NEXT] = ACTIONS(155),
    [anon_sym_MK_PP] = ACTIONS(155),
    [anon_sym_MK_STOP] = ACTIONS(155),
    [anon_sym_NUMLOCK] = ACTIONS(155),
    [anon_sym_KP_SLASH] = ACTIONS(155),
    [anon_sym_KP_ASTERISK] = ACTIONS(155),
    [anon_sym_KP_MINUS] = ACTIONS(155),
    [anon_sym_KP_PLUS] = ACTIONS(155),
    [anon_sym_KP_ENTER] = ACTIONS(155),
    [aux_sym_special_key_token4] = ACTIONS(155),
    [anon_sym_KP_DOT] = ACTIONS(155),
    [anon_sym_KP_EQUAL] = ACTIONS(155),
    [anon_sym_LMOUSE] = ACTIONS(155),
    [anon_sym_RMOUSE] = ACTIONS(155),
    [anon_sym_MMOUSE] = ACTIONS(155),
  },
  [26] = {
    [anon_sym_CR_LF] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_identifier_token2] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_VAR] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_ELSEIF] = ACTIONS(157),
    [anon_sym_ELSE] = ACTIONS(157),
    [anon_sym_END_IF] = ACTIONS(157),
    [anon_sym_WHILE] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [sym_loop_key] = ACTIONS(157),
    [aux_sym_swc_key_token1] = ACTIONS(157),
    [aux_sym_swc_key_token2] = ACTIONS(157),
    [anon_sym_REM] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_LBREAK] = ACTIONS(157),
    [anon_sym_CONTINUE] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_OLED_CURSOR] = ACTIONS(157),
    [anon_sym_OLED_PRINT] = ACTIONS(157),
    [anon_sym_OLED_CLEAR] = ACTIONS(157),
    [anon_sym_OLED_UPDATE] = ACTIONS(157),
    [anon_sym_OLED_RESTORE] = ACTIONS(157),
    [anon_sym_SWC_SET] = ACTIONS(157),
    [anon_sym_SWC_FILL] = ACTIONS(157),
    [anon_sym_SWC_RESET] = ACTIONS(157),
    [anon_sym_DEFAULTDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_STRING] = ACTIONS(157),
    [anon_sym_STRINGLN] = ACTIONS(157),
    [anon_sym_REPEAT] = ACTIONS(157),
    [anon_sym_MOUSE_MOVE] = ACTIONS(157),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(157),
    [anon_sym_KEYDOWN] = ACTIONS(157),
    [anon_sym_KEYUP] = ACTIONS(157),
    [anon_sym_SWCOLOR] = ACTIONS(157),
    [anon_sym_DP_SLEEP] = ACTIONS(157),
    [anon_sym_PREV_PROFILE] = ACTIONS(157),
    [anon_sym_NEXT_PROFILE] = ACTIONS(157),
    [anon_sym_GOTO_PROFILE] = ACTIONS(157),
    [anon_sym_HOLD] = ACTIONS(157),
    [anon_sym_EMUK] = ACTIONS(157),
    [anon_sym_LCR] = ACTIONS(157),
    [anon_sym_CTRL] = ACTIONS(157),
    [anon_sym_RCTRL] = ACTIONS(157),
    [anon_sym_SHIFT] = ACTIONS(157),
    [anon_sym_RSHIFT] = ACTIONS(157),
    [anon_sym_ALT] = ACTIONS(157),
    [anon_sym_RALT] = ACTIONS(157),
    [anon_sym_WINDOWS] = ACTIONS(157),
    [anon_sym_RWINDOWS] = ACTIONS(157),
    [anon_sym_COMMAND] = ACTIONS(157),
    [anon_sym_RCOMMAND] = ACTIONS(157),
    [anon_sym_OPTION] = ACTIONS(157),
    [anon_sym_ROPTION] = ACTIONS(157),
    [anon_sym_ESC] = ACTIONS(157),
    [anon_sym_ENTER] = ACTIONS(157),
    [anon_sym_UP] = ACTIONS(157),
    [anon_sym_DOWN] = ACTIONS(157),
    [anon_sym_LEFT] = ACTIONS(157),
    [anon_sym_RIGHT] = ACTIONS(157),
    [anon_sym_SPACE] = ACTIONS(157),
    [anon_sym_BACKSPACE] = ACTIONS(157),
    [anon_sym_TAB] = ACTIONS(157),
    [anon_sym_CAPSLOCK] = ACTIONS(157),
    [anon_sym_PRINTSCREEN] = ACTIONS(157),
    [anon_sym_SCROLLLOCK] = ACTIONS(157),
    [anon_sym_PAUSE] = ACTIONS(157),
    [anon_sym_BREAK] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_HOME] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_PAGEUP] = ACTIONS(157),
    [anon_sym_PAGEDOWN] = ACTIONS(157),
    [anon_sym_MENU] = ACTIONS(157),
    [anon_sym_POWER] = ACTIONS(157),
    [aux_sym_special_key_token1] = ACTIONS(157),
    [aux_sym_special_key_token2] = ACTIONS(157),
    [aux_sym_special_key_token3] = ACTIONS(157),
    [anon_sym_MK_VOLUP] = ACTIONS(157),
    [anon_sym_MK_VOLDOWN] = ACTIONS(157),
    [anon_sym_MK_MUTE] = ACTIONS(157),
    [anon_sym_MK_PREV] = ACTIONS(157),
    [anon_sym_MK_NEXT] = ACTIONS(157),
    [anon_sym_MK_PP] = ACTIONS(157),
    [anon_sym_MK_STOP] = ACTIONS(157),
    [anon_sym_NUMLOCK] = ACTIONS(157),
    [anon_sym_KP_SLASH] = ACTIONS(157),
    [anon_sym_KP_ASTERISK] = ACTIONS(157),
    [anon_sym_KP_MINUS] = ACTIONS(157),
    [anon_sym_KP_PLUS] = ACTIONS(157),
    [anon_sym_KP_ENTER] = ACTIONS(157),
    [aux_sym_special_key_token4] = ACTIONS(157),
    [anon_sym_KP_DOT] = ACTIONS(157),
    [anon_sym_KP_EQUAL] = ACTIONS(157),
    [anon_sym_LMOUSE] = ACTIONS(157),
    [anon_sym_RMOUSE] = ACTIONS(157),
    [anon_sym_MMOUSE] = ACTIONS(157),
  },
  [27] = {
    [anon_sym_CR_LF] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_identifier_token2] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_VAR] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_END_IF] = ACTIONS(157),
    [anon_sym_WHILE] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [sym_loop_key] = ACTIONS(157),
    [aux_sym_swc_key_token1] = ACTIONS(157),
    [aux_sym_swc_key_token2] = ACTIONS(157),
    [anon_sym_REM] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_LBREAK] = ACTIONS(157),
    [anon_sym_CONTINUE] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_OLED_CURSOR] = ACTIONS(157),
    [anon_sym_OLED_PRINT] = ACTIONS(157),
    [anon_sym_OLED_CLEAR] = ACTIONS(157),
    [anon_sym_OLED_UPDATE] = ACTIONS(157),
    [anon_sym_OLED_RESTORE] = ACTIONS(157),
    [anon_sym_SWC_SET] = ACTIONS(157),
    [anon_sym_SWC_FILL] = ACTIONS(157),
    [anon_sym_SWC_RESET] = ACTIONS(157),
    [anon_sym_DEFAULTDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_STRING] = ACTIONS(157),
    [anon_sym_STRINGLN] = ACTIONS(157),
    [anon_sym_REPEAT] = ACTIONS(157),
    [anon_sym_MOUSE_MOVE] = ACTIONS(157),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(157),
    [anon_sym_KEYDOWN] = ACTIONS(157),
    [anon_sym_KEYUP] = ACTIONS(157),
    [anon_sym_SWCOLOR] = ACTIONS(157),
    [anon_sym_DP_SLEEP] = ACTIONS(157),
    [anon_sym_PREV_PROFILE] = ACTIONS(157),
    [anon_sym_NEXT_PROFILE] = ACTIONS(157),
    [anon_sym_GOTO_PROFILE] = ACTIONS(157),
    [anon_sym_HOLD] = ACTIONS(157),
    [anon_sym_EMUK] = ACTIONS(157),
    [anon_sym_LCR] = ACTIONS(157),
    [anon_sym_CTRL] = ACTIONS(157),
    [anon_sym_RCTRL] = ACTIONS(157),
    [anon_sym_SHIFT] = ACTIONS(157),
    [anon_sym_RSHIFT] = ACTIONS(157),
    [anon_sym_ALT] = ACTIONS(157),
    [anon_sym_RALT] = ACTIONS(157),
    [anon_sym_WINDOWS] = ACTIONS(157),
    [anon_sym_RWINDOWS] = ACTIONS(157),
    [anon_sym_COMMAND] = ACTIONS(157),
    [anon_sym_RCOMMAND] = ACTIONS(157),
    [anon_sym_OPTION] = ACTIONS(157),
    [anon_sym_ROPTION] = ACTIONS(157),
    [anon_sym_ESC] = ACTIONS(157),
    [anon_sym_ENTER] = ACTIONS(157),
    [anon_sym_UP] = ACTIONS(157),
    [anon_sym_DOWN] = ACTIONS(157),
    [anon_sym_LEFT] = ACTIONS(157),
    [anon_sym_RIGHT] = ACTIONS(157),
    [anon_sym_SPACE] = ACTIONS(157),
    [anon_sym_BACKSPACE] = ACTIONS(157),
    [anon_sym_TAB] = ACTIONS(157),
    [anon_sym_CAPSLOCK] = ACTIONS(157),
    [anon_sym_PRINTSCREEN] = ACTIONS(157),
    [anon_sym_SCROLLLOCK] = ACTIONS(157),
    [anon_sym_PAUSE] = ACTIONS(157),
    [anon_sym_BREAK] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_HOME] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_PAGEUP] = ACTIONS(157),
    [anon_sym_PAGEDOWN] = ACTIONS(157),
    [anon_sym_MENU] = ACTIONS(157),
    [anon_sym_POWER] = ACTIONS(157),
    [aux_sym_special_key_token1] = ACTIONS(157),
    [aux_sym_special_key_token2] = ACTIONS(157),
    [aux_sym_special_key_token3] = ACTIONS(157),
    [anon_sym_MK_VOLUP] = ACTIONS(157),
    [anon_sym_MK_VOLDOWN] = ACTIONS(157),
    [anon_sym_MK_MUTE] = ACTIONS(157),
    [anon_sym_MK_PREV] = ACTIONS(157),
    [anon_sym_MK_NEXT] = ACTIONS(157),
    [anon_sym_MK_PP] = ACTIONS(157),
    [anon_sym_MK_STOP] = ACTIONS(157),
    [anon_sym_NUMLOCK] = ACTIONS(157),
    [anon_sym_KP_SLASH] = ACTIONS(157),
    [anon_sym_KP_ASTERISK] = ACTIONS(157),
    [anon_sym_KP_MINUS] = ACTIONS(157),
    [anon_sym_KP_PLUS] = ACTIONS(157),
    [anon_sym_KP_ENTER] = ACTIONS(157),
    [aux_sym_special_key_token4] = ACTIONS(157),
    [anon_sym_KP_DOT] = ACTIONS(157),
    [anon_sym_KP_EQUAL] = ACTIONS(157),
    [anon_sym_LMOUSE] = ACTIONS(157),
    [anon_sym_RMOUSE] = ACTIONS(157),
    [anon_sym_MMOUSE] = ACTIONS(157),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_CR_LF] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_identifier_token2] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_VAR] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_WHILE] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [sym_loop_key] = ACTIONS(155),
    [aux_sym_swc_key_token1] = ACTIONS(155),
    [aux_sym_swc_key_token2] = ACTIONS(155),
    [anon_sym_REM] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_LBREAK] = ACTIONS(155),
    [anon_sym_CONTINUE] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_OLED_CURSOR] = ACTIONS(155),
    [anon_sym_OLED_PRINT] = ACTIONS(155),
    [anon_sym_OLED_CLEAR] = ACTIONS(155),
    [anon_sym_OLED_UPDATE] = ACTIONS(155),
    [anon_sym_OLED_RESTORE] = ACTIONS(155),
    [anon_sym_SWC_SET] = ACTIONS(155),
    [anon_sym_SWC_FILL] = ACTIONS(155),
    [anon_sym_SWC_RESET] = ACTIONS(155),
    [anon_sym_DEFAULTDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(155),
    [anon_sym_DELAY] = ACTIONS(155),
    [anon_sym_STRING] = ACTIONS(155),
    [anon_sym_STRINGLN] = ACTIONS(155),
    [anon_sym_REPEAT] = ACTIONS(155),
    [anon_sym_MOUSE_MOVE] = ACTIONS(155),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(155),
    [anon_sym_KEYDOWN] = ACTIONS(155),
    [anon_sym_KEYUP] = ACTIONS(155),
    [anon_sym_SWCOLOR] = ACTIONS(155),
    [anon_sym_DP_SLEEP] = ACTIONS(155),
    [anon_sym_PREV_PROFILE] = ACTIONS(155),
    [anon_sym_NEXT_PROFILE] = ACTIONS(155),
    [anon_sym_GOTO_PROFILE] = ACTIONS(155),
    [anon_sym_HOLD] = ACTIONS(155),
    [anon_sym_EMUK] = ACTIONS(155),
    [anon_sym_LCR] = ACTIONS(155),
    [anon_sym_CTRL] = ACTIONS(155),
    [anon_sym_RCTRL] = ACTIONS(155),
    [anon_sym_SHIFT] = ACTIONS(155),
    [anon_sym_RSHIFT] = ACTIONS(155),
    [anon_sym_ALT] = ACTIONS(155),
    [anon_sym_RALT] = ACTIONS(155),
    [anon_sym_WINDOWS] = ACTIONS(155),
    [anon_sym_RWINDOWS] = ACTIONS(155),
    [anon_sym_COMMAND] = ACTIONS(155),
    [anon_sym_RCOMMAND] = ACTIONS(155),
    [anon_sym_OPTION] = ACTIONS(155),
    [anon_sym_ROPTION] = ACTIONS(155),
    [anon_sym_ESC] = ACTIONS(155),
    [anon_sym_ENTER] = ACTIONS(155),
    [anon_sym_UP] = ACTIONS(155),
    [anon_sym_DOWN] = ACTIONS(155),
    [anon_sym_LEFT] = ACTIONS(155),
    [anon_sym_RIGHT] = ACTIONS(155),
    [anon_sym_SPACE] = ACTIONS(155),
    [anon_sym_BACKSPACE] = ACTIONS(155),
    [anon_sym_TAB] = ACTIONS(155),
    [anon_sym_CAPSLOCK] = ACTIONS(155),
    [anon_sym_PRINTSCREEN] = ACTIONS(155),
    [anon_sym_SCROLLLOCK] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(155),
    [anon_sym_BREAK] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_HOME] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_PAGEUP] = ACTIONS(155),
    [anon_sym_PAGEDOWN] = ACTIONS(155),
    [anon_sym_MENU] = ACTIONS(155),
    [anon_sym_POWER] = ACTIONS(155),
    [aux_sym_special_key_token1] = ACTIONS(155),
    [aux_sym_special_key_token2] = ACTIONS(155),
    [aux_sym_special_key_token3] = ACTIONS(155),
    [anon_sym_MK_VOLUP] = ACTIONS(155),
    [anon_sym_MK_VOLDOWN] = ACTIONS(155),
    [anon_sym_MK_MUTE] = ACTIONS(155),
    [anon_sym_MK_PREV] = ACTIONS(155),
    [anon_sym_MK_NEXT] = ACTIONS(155),
    [anon_sym_MK_PP] = ACTIONS(155),
    [anon_sym_MK_STOP] = ACTIONS(155),
    [anon_sym_NUMLOCK] = ACTIONS(155),
    [anon_sym_KP_SLASH] = ACTIONS(155),
    [anon_sym_KP_ASTERISK] = ACTIONS(155),
    [anon_sym_KP_MINUS] = ACTIONS(155),
    [anon_sym_KP_PLUS] = ACTIONS(155),
    [anon_sym_KP_ENTER] = ACTIONS(155),
    [aux_sym_special_key_token4] = ACTIONS(155),
    [anon_sym_KP_DOT] = ACTIONS(155),
    [anon_sym_KP_EQUAL] = ACTIONS(155),
    [anon_sym_LMOUSE] = ACTIONS(155),
    [anon_sym_RMOUSE] = ACTIONS(155),
    [anon_sym_MMOUSE] = ACTIONS(155),
  },
  [29] = {
    [anon_sym_CR_LF] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_identifier_token2] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_VAR] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_WHILE] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [anon_sym_END_FUNCTION] = ACTIONS(155),
    [sym_loop_key] = ACTIONS(155),
    [aux_sym_swc_key_token1] = ACTIONS(155),
    [aux_sym_swc_key_token2] = ACTIONS(155),
    [anon_sym_REM] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_LBREAK] = ACTIONS(155),
    [anon_sym_CONTINUE] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_OLED_CURSOR] = ACTIONS(155),
    [anon_sym_OLED_PRINT] = ACTIONS(155),
    [anon_sym_OLED_CLEAR] = ACTIONS(155),
    [anon_sym_OLED_UPDATE] = ACTIONS(155),
    [anon_sym_OLED_RESTORE] = ACTIONS(155),
    [anon_sym_SWC_SET] = ACTIONS(155),
    [anon_sym_SWC_FILL] = ACTIONS(155),
    [anon_sym_SWC_RESET] = ACTIONS(155),
    [anon_sym_DEFAULTDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(155),
    [anon_sym_DELAY] = ACTIONS(155),
    [anon_sym_STRING] = ACTIONS(155),
    [anon_sym_STRINGLN] = ACTIONS(155),
    [anon_sym_REPEAT] = ACTIONS(155),
    [anon_sym_MOUSE_MOVE] = ACTIONS(155),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(155),
    [anon_sym_KEYDOWN] = ACTIONS(155),
    [anon_sym_KEYUP] = ACTIONS(155),
    [anon_sym_SWCOLOR] = ACTIONS(155),
    [anon_sym_DP_SLEEP] = ACTIONS(155),
    [anon_sym_PREV_PROFILE] = ACTIONS(155),
    [anon_sym_NEXT_PROFILE] = ACTIONS(155),
    [anon_sym_GOTO_PROFILE] = ACTIONS(155),
    [anon_sym_HOLD] = ACTIONS(155),
    [anon_sym_EMUK] = ACTIONS(155),
    [anon_sym_LCR] = ACTIONS(155),
    [anon_sym_CTRL] = ACTIONS(155),
    [anon_sym_RCTRL] = ACTIONS(155),
    [anon_sym_SHIFT] = ACTIONS(155),
    [anon_sym_RSHIFT] = ACTIONS(155),
    [anon_sym_ALT] = ACTIONS(155),
    [anon_sym_RALT] = ACTIONS(155),
    [anon_sym_WINDOWS] = ACTIONS(155),
    [anon_sym_RWINDOWS] = ACTIONS(155),
    [anon_sym_COMMAND] = ACTIONS(155),
    [anon_sym_RCOMMAND] = ACTIONS(155),
    [anon_sym_OPTION] = ACTIONS(155),
    [anon_sym_ROPTION] = ACTIONS(155),
    [anon_sym_ESC] = ACTIONS(155),
    [anon_sym_ENTER] = ACTIONS(155),
    [anon_sym_UP] = ACTIONS(155),
    [anon_sym_DOWN] = ACTIONS(155),
    [anon_sym_LEFT] = ACTIONS(155),
    [anon_sym_RIGHT] = ACTIONS(155),
    [anon_sym_SPACE] = ACTIONS(155),
    [anon_sym_BACKSPACE] = ACTIONS(155),
    [anon_sym_TAB] = ACTIONS(155),
    [anon_sym_CAPSLOCK] = ACTIONS(155),
    [anon_sym_PRINTSCREEN] = ACTIONS(155),
    [anon_sym_SCROLLLOCK] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(155),
    [anon_sym_BREAK] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_HOME] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_PAGEUP] = ACTIONS(155),
    [anon_sym_PAGEDOWN] = ACTIONS(155),
    [anon_sym_MENU] = ACTIONS(155),
    [anon_sym_POWER] = ACTIONS(155),
    [aux_sym_special_key_token1] = ACTIONS(155),
    [aux_sym_special_key_token2] = ACTIONS(155),
    [aux_sym_special_key_token3] = ACTIONS(155),
    [anon_sym_MK_VOLUP] = ACTIONS(155),
    [anon_sym_MK_VOLDOWN] = ACTIONS(155),
    [anon_sym_MK_MUTE] = ACTIONS(155),
    [anon_sym_MK_PREV] = ACTIONS(155),
    [anon_sym_MK_NEXT] = ACTIONS(155),
    [anon_sym_MK_PP] = ACTIONS(155),
    [anon_sym_MK_STOP] = ACTIONS(155),
    [anon_sym_NUMLOCK] = ACTIONS(155),
    [anon_sym_KP_SLASH] = ACTIONS(155),
    [anon_sym_KP_ASTERISK] = ACTIONS(155),
    [anon_sym_KP_MINUS] = ACTIONS(155),
    [anon_sym_KP_PLUS] = ACTIONS(155),
    [anon_sym_KP_ENTER] = ACTIONS(155),
    [aux_sym_special_key_token4] = ACTIONS(155),
    [anon_sym_KP_DOT] = ACTIONS(155),
    [anon_sym_KP_EQUAL] = ACTIONS(155),
    [anon_sym_LMOUSE] = ACTIONS(155),
    [anon_sym_RMOUSE] = ACTIONS(155),
    [anon_sym_MMOUSE] = ACTIONS(155),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_identifier_token2] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_VAR] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_WHILE] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [sym_loop_key] = ACTIONS(157),
    [aux_sym_swc_key_token1] = ACTIONS(157),
    [aux_sym_swc_key_token2] = ACTIONS(157),
    [anon_sym_REM] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_LBREAK] = ACTIONS(157),
    [anon_sym_CONTINUE] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_OLED_CURSOR] = ACTIONS(157),
    [anon_sym_OLED_PRINT] = ACTIONS(157),
    [anon_sym_OLED_CLEAR] = ACTIONS(157),
    [anon_sym_OLED_UPDATE] = ACTIONS(157),
    [anon_sym_OLED_RESTORE] = ACTIONS(157),
    [anon_sym_SWC_SET] = ACTIONS(157),
    [anon_sym_SWC_FILL] = ACTIONS(157),
    [anon_sym_SWC_RESET] = ACTIONS(157),
    [anon_sym_DEFAULTDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_STRING] = ACTIONS(157),
    [anon_sym_STRINGLN] = ACTIONS(157),
    [anon_sym_REPEAT] = ACTIONS(157),
    [anon_sym_MOUSE_MOVE] = ACTIONS(157),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(157),
    [anon_sym_KEYDOWN] = ACTIONS(157),
    [anon_sym_KEYUP] = ACTIONS(157),
    [anon_sym_SWCOLOR] = ACTIONS(157),
    [anon_sym_DP_SLEEP] = ACTIONS(157),
    [anon_sym_PREV_PROFILE] = ACTIONS(157),
    [anon_sym_NEXT_PROFILE] = ACTIONS(157),
    [anon_sym_GOTO_PROFILE] = ACTIONS(157),
    [anon_sym_HOLD] = ACTIONS(157),
    [anon_sym_EMUK] = ACTIONS(157),
    [anon_sym_LCR] = ACTIONS(157),
    [anon_sym_CTRL] = ACTIONS(157),
    [anon_sym_RCTRL] = ACTIONS(157),
    [anon_sym_SHIFT] = ACTIONS(157),
    [anon_sym_RSHIFT] = ACTIONS(157),
    [anon_sym_ALT] = ACTIONS(157),
    [anon_sym_RALT] = ACTIONS(157),
    [anon_sym_WINDOWS] = ACTIONS(157),
    [anon_sym_RWINDOWS] = ACTIONS(157),
    [anon_sym_COMMAND] = ACTIONS(157),
    [anon_sym_RCOMMAND] = ACTIONS(157),
    [anon_sym_OPTION] = ACTIONS(157),
    [anon_sym_ROPTION] = ACTIONS(157),
    [anon_sym_ESC] = ACTIONS(157),
    [anon_sym_ENTER] = ACTIONS(157),
    [anon_sym_UP] = ACTIONS(157),
    [anon_sym_DOWN] = ACTIONS(157),
    [anon_sym_LEFT] = ACTIONS(157),
    [anon_sym_RIGHT] = ACTIONS(157),
    [anon_sym_SPACE] = ACTIONS(157),
    [anon_sym_BACKSPACE] = ACTIONS(157),
    [anon_sym_TAB] = ACTIONS(157),
    [anon_sym_CAPSLOCK] = ACTIONS(157),
    [anon_sym_PRINTSCREEN] = ACTIONS(157),
    [anon_sym_SCROLLLOCK] = ACTIONS(157),
    [anon_sym_PAUSE] = ACTIONS(157),
    [anon_sym_BREAK] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_HOME] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_PAGEUP] = ACTIONS(157),
    [anon_sym_PAGEDOWN] = ACTIONS(157),
    [anon_sym_MENU] = ACTIONS(157),
    [anon_sym_POWER] = ACTIONS(157),
    [aux_sym_special_key_token1] = ACTIONS(157),
    [aux_sym_special_key_token2] = ACTIONS(157),
    [aux_sym_special_key_token3] = ACTIONS(157),
    [anon_sym_MK_VOLUP] = ACTIONS(157),
    [anon_sym_MK_VOLDOWN] = ACTIONS(157),
    [anon_sym_MK_MUTE] = ACTIONS(157),
    [anon_sym_MK_PREV] = ACTIONS(157),
    [anon_sym_MK_NEXT] = ACTIONS(157),
    [anon_sym_MK_PP] = ACTIONS(157),
    [anon_sym_MK_STOP] = ACTIONS(157),
    [anon_sym_NUMLOCK] = ACTIONS(157),
    [anon_sym_KP_SLASH] = ACTIONS(157),
    [anon_sym_KP_ASTERISK] = ACTIONS(157),
    [anon_sym_KP_MINUS] = ACTIONS(157),
    [anon_sym_KP_PLUS] = ACTIONS(157),
    [anon_sym_KP_ENTER] = ACTIONS(157),
    [aux_sym_special_key_token4] = ACTIONS(157),
    [anon_sym_KP_DOT] = ACTIONS(157),
    [anon_sym_KP_EQUAL] = ACTIONS(157),
    [anon_sym_LMOUSE] = ACTIONS(157),
    [anon_sym_RMOUSE] = ACTIONS(157),
    [anon_sym_MMOUSE] = ACTIONS(157),
  },
  [31] = {
    [anon_sym_CR_LF] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_identifier_token2] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_VAR] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_WHILE] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [anon_sym_END_FUNCTION] = ACTIONS(157),
    [sym_loop_key] = ACTIONS(157),
    [aux_sym_swc_key_token1] = ACTIONS(157),
    [aux_sym_swc_key_token2] = ACTIONS(157),
    [anon_sym_REM] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_LBREAK] = ACTIONS(157),
    [anon_sym_CONTINUE] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_OLED_CURSOR] = ACTIONS(157),
    [anon_sym_OLED_PRINT] = ACTIONS(157),
    [anon_sym_OLED_CLEAR] = ACTIONS(157),
    [anon_sym_OLED_UPDATE] = ACTIONS(157),
    [anon_sym_OLED_RESTORE] = ACTIONS(157),
    [anon_sym_SWC_SET] = ACTIONS(157),
    [anon_sym_SWC_FILL] = ACTIONS(157),
    [anon_sym_SWC_RESET] = ACTIONS(157),
    [anon_sym_DEFAULTDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_STRING] = ACTIONS(157),
    [anon_sym_STRINGLN] = ACTIONS(157),
    [anon_sym_REPEAT] = ACTIONS(157),
    [anon_sym_MOUSE_MOVE] = ACTIONS(157),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(157),
    [anon_sym_KEYDOWN] = ACTIONS(157),
    [anon_sym_KEYUP] = ACTIONS(157),
    [anon_sym_SWCOLOR] = ACTIONS(157),
    [anon_sym_DP_SLEEP] = ACTIONS(157),
    [anon_sym_PREV_PROFILE] = ACTIONS(157),
    [anon_sym_NEXT_PROFILE] = ACTIONS(157),
    [anon_sym_GOTO_PROFILE] = ACTIONS(157),
    [anon_sym_HOLD] = ACTIONS(157),
    [anon_sym_EMUK] = ACTIONS(157),
    [anon_sym_LCR] = ACTIONS(157),
    [anon_sym_CTRL] = ACTIONS(157),
    [anon_sym_RCTRL] = ACTIONS(157),
    [anon_sym_SHIFT] = ACTIONS(157),
    [anon_sym_RSHIFT] = ACTIONS(157),
    [anon_sym_ALT] = ACTIONS(157),
    [anon_sym_RALT] = ACTIONS(157),
    [anon_sym_WINDOWS] = ACTIONS(157),
    [anon_sym_RWINDOWS] = ACTIONS(157),
    [anon_sym_COMMAND] = ACTIONS(157),
    [anon_sym_RCOMMAND] = ACTIONS(157),
    [anon_sym_OPTION] = ACTIONS(157),
    [anon_sym_ROPTION] = ACTIONS(157),
    [anon_sym_ESC] = ACTIONS(157),
    [anon_sym_ENTER] = ACTIONS(157),
    [anon_sym_UP] = ACTIONS(157),
    [anon_sym_DOWN] = ACTIONS(157),
    [anon_sym_LEFT] = ACTIONS(157),
    [anon_sym_RIGHT] = ACTIONS(157),
    [anon_sym_SPACE] = ACTIONS(157),
    [anon_sym_BACKSPACE] = ACTIONS(157),
    [anon_sym_TAB] = ACTIONS(157),
    [anon_sym_CAPSLOCK] = ACTIONS(157),
    [anon_sym_PRINTSCREEN] = ACTIONS(157),
    [anon_sym_SCROLLLOCK] = ACTIONS(157),
    [anon_sym_PAUSE] = ACTIONS(157),
    [anon_sym_BREAK] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_HOME] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_PAGEUP] = ACTIONS(157),
    [anon_sym_PAGEDOWN] = ACTIONS(157),
    [anon_sym_MENU] = ACTIONS(157),
    [anon_sym_POWER] = ACTIONS(157),
    [aux_sym_special_key_token1] = ACTIONS(157),
    [aux_sym_special_key_token2] = ACTIONS(157),
    [aux_sym_special_key_token3] = ACTIONS(157),
    [anon_sym_MK_VOLUP] = ACTIONS(157),
    [anon_sym_MK_VOLDOWN] = ACTIONS(157),
    [anon_sym_MK_MUTE] = ACTIONS(157),
    [anon_sym_MK_PREV] = ACTIONS(157),
    [anon_sym_MK_NEXT] = ACTIONS(157),
    [anon_sym_MK_PP] = ACTIONS(157),
    [anon_sym_MK_STOP] = ACTIONS(157),
    [anon_sym_NUMLOCK] = ACTIONS(157),
    [anon_sym_KP_SLASH] = ACTIONS(157),
    [anon_sym_KP_ASTERISK] = ACTIONS(157),
    [anon_sym_KP_MINUS] = ACTIONS(157),
    [anon_sym_KP_PLUS] = ACTIONS(157),
    [anon_sym_KP_ENTER] = ACTIONS(157),
    [aux_sym_special_key_token4] = ACTIONS(157),
    [anon_sym_KP_DOT] = ACTIONS(157),
    [anon_sym_KP_EQUAL] = ACTIONS(157),
    [anon_sym_LMOUSE] = ACTIONS(157),
    [anon_sym_RMOUSE] = ACTIONS(157),
    [anon_sym_MMOUSE] = ACTIONS(157),
  },
  [32] = {
    [anon_sym_CR_LF] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_identifier_token2] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_VAR] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_END_IF] = ACTIONS(155),
    [anon_sym_WHILE] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [sym_loop_key] = ACTIONS(155),
    [aux_sym_swc_key_token1] = ACTIONS(155),
    [aux_sym_swc_key_token2] = ACTIONS(155),
    [anon_sym_REM] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_LBREAK] = ACTIONS(155),
    [anon_sym_CONTINUE] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_OLED_CURSOR] = ACTIONS(155),
    [anon_sym_OLED_PRINT] = ACTIONS(155),
    [anon_sym_OLED_CLEAR] = ACTIONS(155),
    [anon_sym_OLED_UPDATE] = ACTIONS(155),
    [anon_sym_OLED_RESTORE] = ACTIONS(155),
    [anon_sym_SWC_SET] = ACTIONS(155),
    [anon_sym_SWC_FILL] = ACTIONS(155),
    [anon_sym_SWC_RESET] = ACTIONS(155),
    [anon_sym_DEFAULTDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(155),
    [anon_sym_DELAY] = ACTIONS(155),
    [anon_sym_STRING] = ACTIONS(155),
    [anon_sym_STRINGLN] = ACTIONS(155),
    [anon_sym_REPEAT] = ACTIONS(155),
    [anon_sym_MOUSE_MOVE] = ACTIONS(155),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(155),
    [anon_sym_KEYDOWN] = ACTIONS(155),
    [anon_sym_KEYUP] = ACTIONS(155),
    [anon_sym_SWCOLOR] = ACTIONS(155),
    [anon_sym_DP_SLEEP] = ACTIONS(155),
    [anon_sym_PREV_PROFILE] = ACTIONS(155),
    [anon_sym_NEXT_PROFILE] = ACTIONS(155),
    [anon_sym_GOTO_PROFILE] = ACTIONS(155),
    [anon_sym_HOLD] = ACTIONS(155),
    [anon_sym_EMUK] = ACTIONS(155),
    [anon_sym_LCR] = ACTIONS(155),
    [anon_sym_CTRL] = ACTIONS(155),
    [anon_sym_RCTRL] = ACTIONS(155),
    [anon_sym_SHIFT] = ACTIONS(155),
    [anon_sym_RSHIFT] = ACTIONS(155),
    [anon_sym_ALT] = ACTIONS(155),
    [anon_sym_RALT] = ACTIONS(155),
    [anon_sym_WINDOWS] = ACTIONS(155),
    [anon_sym_RWINDOWS] = ACTIONS(155),
    [anon_sym_COMMAND] = ACTIONS(155),
    [anon_sym_RCOMMAND] = ACTIONS(155),
    [anon_sym_OPTION] = ACTIONS(155),
    [anon_sym_ROPTION] = ACTIONS(155),
    [anon_sym_ESC] = ACTIONS(155),
    [anon_sym_ENTER] = ACTIONS(155),
    [anon_sym_UP] = ACTIONS(155),
    [anon_sym_DOWN] = ACTIONS(155),
    [anon_sym_LEFT] = ACTIONS(155),
    [anon_sym_RIGHT] = ACTIONS(155),
    [anon_sym_SPACE] = ACTIONS(155),
    [anon_sym_BACKSPACE] = ACTIONS(155),
    [anon_sym_TAB] = ACTIONS(155),
    [anon_sym_CAPSLOCK] = ACTIONS(155),
    [anon_sym_PRINTSCREEN] = ACTIONS(155),
    [anon_sym_SCROLLLOCK] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(155),
    [anon_sym_BREAK] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_HOME] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_PAGEUP] = ACTIONS(155),
    [anon_sym_PAGEDOWN] = ACTIONS(155),
    [anon_sym_MENU] = ACTIONS(155),
    [anon_sym_POWER] = ACTIONS(155),
    [aux_sym_special_key_token1] = ACTIONS(155),
    [aux_sym_special_key_token2] = ACTIONS(155),
    [aux_sym_special_key_token3] = ACTIONS(155),
    [anon_sym_MK_VOLUP] = ACTIONS(155),
    [anon_sym_MK_VOLDOWN] = ACTIONS(155),
    [anon_sym_MK_MUTE] = ACTIONS(155),
    [anon_sym_MK_PREV] = ACTIONS(155),
    [anon_sym_MK_NEXT] = ACTIONS(155),
    [anon_sym_MK_PP] = ACTIONS(155),
    [anon_sym_MK_STOP] = ACTIONS(155),
    [anon_sym_NUMLOCK] = ACTIONS(155),
    [anon_sym_KP_SLASH] = ACTIONS(155),
    [anon_sym_KP_ASTERISK] = ACTIONS(155),
    [anon_sym_KP_MINUS] = ACTIONS(155),
    [anon_sym_KP_PLUS] = ACTIONS(155),
    [anon_sym_KP_ENTER] = ACTIONS(155),
    [aux_sym_special_key_token4] = ACTIONS(155),
    [anon_sym_KP_DOT] = ACTIONS(155),
    [anon_sym_KP_EQUAL] = ACTIONS(155),
    [anon_sym_LMOUSE] = ACTIONS(155),
    [anon_sym_RMOUSE] = ACTIONS(155),
    [anon_sym_MMOUSE] = ACTIONS(155),
  },
  [33] = {
    [anon_sym_CR_LF] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_identifier_token2] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_VAR] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_WHILE] = ACTIONS(155),
    [anon_sym_END_WHILE] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [sym_loop_key] = ACTIONS(155),
    [aux_sym_swc_key_token1] = ACTIONS(155),
    [aux_sym_swc_key_token2] = ACTIONS(155),
    [anon_sym_REM] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_LBREAK] = ACTIONS(155),
    [anon_sym_CONTINUE] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_OLED_CURSOR] = ACTIONS(155),
    [anon_sym_OLED_PRINT] = ACTIONS(155),
    [anon_sym_OLED_CLEAR] = ACTIONS(155),
    [anon_sym_OLED_UPDATE] = ACTIONS(155),
    [anon_sym_OLED_RESTORE] = ACTIONS(155),
    [anon_sym_SWC_SET] = ACTIONS(155),
    [anon_sym_SWC_FILL] = ACTIONS(155),
    [anon_sym_SWC_RESET] = ACTIONS(155),
    [anon_sym_DEFAULTDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(155),
    [anon_sym_DELAY] = ACTIONS(155),
    [anon_sym_STRING] = ACTIONS(155),
    [anon_sym_STRINGLN] = ACTIONS(155),
    [anon_sym_REPEAT] = ACTIONS(155),
    [anon_sym_MOUSE_MOVE] = ACTIONS(155),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(155),
    [anon_sym_KEYDOWN] = ACTIONS(155),
    [anon_sym_KEYUP] = ACTIONS(155),
    [anon_sym_SWCOLOR] = ACTIONS(155),
    [anon_sym_DP_SLEEP] = ACTIONS(155),
    [anon_sym_PREV_PROFILE] = ACTIONS(155),
    [anon_sym_NEXT_PROFILE] = ACTIONS(155),
    [anon_sym_GOTO_PROFILE] = ACTIONS(155),
    [anon_sym_HOLD] = ACTIONS(155),
    [anon_sym_EMUK] = ACTIONS(155),
    [anon_sym_LCR] = ACTIONS(155),
    [anon_sym_CTRL] = ACTIONS(155),
    [anon_sym_RCTRL] = ACTIONS(155),
    [anon_sym_SHIFT] = ACTIONS(155),
    [anon_sym_RSHIFT] = ACTIONS(155),
    [anon_sym_ALT] = ACTIONS(155),
    [anon_sym_RALT] = ACTIONS(155),
    [anon_sym_WINDOWS] = ACTIONS(155),
    [anon_sym_RWINDOWS] = ACTIONS(155),
    [anon_sym_COMMAND] = ACTIONS(155),
    [anon_sym_RCOMMAND] = ACTIONS(155),
    [anon_sym_OPTION] = ACTIONS(155),
    [anon_sym_ROPTION] = ACTIONS(155),
    [anon_sym_ESC] = ACTIONS(155),
    [anon_sym_ENTER] = ACTIONS(155),
    [anon_sym_UP] = ACTIONS(155),
    [anon_sym_DOWN] = ACTIONS(155),
    [anon_sym_LEFT] = ACTIONS(155),
    [anon_sym_RIGHT] = ACTIONS(155),
    [anon_sym_SPACE] = ACTIONS(155),
    [anon_sym_BACKSPACE] = ACTIONS(155),
    [anon_sym_TAB] = ACTIONS(155),
    [anon_sym_CAPSLOCK] = ACTIONS(155),
    [anon_sym_PRINTSCREEN] = ACTIONS(155),
    [anon_sym_SCROLLLOCK] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(155),
    [anon_sym_BREAK] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_HOME] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_PAGEUP] = ACTIONS(155),
    [anon_sym_PAGEDOWN] = ACTIONS(155),
    [anon_sym_MENU] = ACTIONS(155),
    [anon_sym_POWER] = ACTIONS(155),
    [aux_sym_special_key_token1] = ACTIONS(155),
    [aux_sym_special_key_token2] = ACTIONS(155),
    [aux_sym_special_key_token3] = ACTIONS(155),
    [anon_sym_MK_VOLUP] = ACTIONS(155),
    [anon_sym_MK_VOLDOWN] = ACTIONS(155),
    [anon_sym_MK_MUTE] = ACTIONS(155),
    [anon_sym_MK_PREV] = ACTIONS(155),
    [anon_sym_MK_NEXT] = ACTIONS(155),
    [anon_sym_MK_PP] = ACTIONS(155),
    [anon_sym_MK_STOP] = ACTIONS(155),
    [anon_sym_NUMLOCK] = ACTIONS(155),
    [anon_sym_KP_SLASH] = ACTIONS(155),
    [anon_sym_KP_ASTERISK] = ACTIONS(155),
    [anon_sym_KP_MINUS] = ACTIONS(155),
    [anon_sym_KP_PLUS] = ACTIONS(155),
    [anon_sym_KP_ENTER] = ACTIONS(155),
    [aux_sym_special_key_token4] = ACTIONS(155),
    [anon_sym_KP_DOT] = ACTIONS(155),
    [anon_sym_KP_EQUAL] = ACTIONS(155),
    [anon_sym_LMOUSE] = ACTIONS(155),
    [anon_sym_RMOUSE] = ACTIONS(155),
    [anon_sym_MMOUSE] = ACTIONS(155),
  },
  [34] = {
    [anon_sym_CR_LF] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_identifier_token2] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_VAR] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_WHILE] = ACTIONS(157),
    [anon_sym_END_WHILE] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [sym_loop_key] = ACTIONS(157),
    [aux_sym_swc_key_token1] = ACTIONS(157),
    [aux_sym_swc_key_token2] = ACTIONS(157),
    [anon_sym_REM] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_LBREAK] = ACTIONS(157),
    [anon_sym_CONTINUE] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_OLED_CURSOR] = ACTIONS(157),
    [anon_sym_OLED_PRINT] = ACTIONS(157),
    [anon_sym_OLED_CLEAR] = ACTIONS(157),
    [anon_sym_OLED_UPDATE] = ACTIONS(157),
    [anon_sym_OLED_RESTORE] = ACTIONS(157),
    [anon_sym_SWC_SET] = ACTIONS(157),
    [anon_sym_SWC_FILL] = ACTIONS(157),
    [anon_sym_SWC_RESET] = ACTIONS(157),
    [anon_sym_DEFAULTDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_STRING] = ACTIONS(157),
    [anon_sym_STRINGLN] = ACTIONS(157),
    [anon_sym_REPEAT] = ACTIONS(157),
    [anon_sym_MOUSE_MOVE] = ACTIONS(157),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(157),
    [anon_sym_KEYDOWN] = ACTIONS(157),
    [anon_sym_KEYUP] = ACTIONS(157),
    [anon_sym_SWCOLOR] = ACTIONS(157),
    [anon_sym_DP_SLEEP] = ACTIONS(157),
    [anon_sym_PREV_PROFILE] = ACTIONS(157),
    [anon_sym_NEXT_PROFILE] = ACTIONS(157),
    [anon_sym_GOTO_PROFILE] = ACTIONS(157),
    [anon_sym_HOLD] = ACTIONS(157),
    [anon_sym_EMUK] = ACTIONS(157),
    [anon_sym_LCR] = ACTIONS(157),
    [anon_sym_CTRL] = ACTIONS(157),
    [anon_sym_RCTRL] = ACTIONS(157),
    [anon_sym_SHIFT] = ACTIONS(157),
    [anon_sym_RSHIFT] = ACTIONS(157),
    [anon_sym_ALT] = ACTIONS(157),
    [anon_sym_RALT] = ACTIONS(157),
    [anon_sym_WINDOWS] = ACTIONS(157),
    [anon_sym_RWINDOWS] = ACTIONS(157),
    [anon_sym_COMMAND] = ACTIONS(157),
    [anon_sym_RCOMMAND] = ACTIONS(157),
    [anon_sym_OPTION] = ACTIONS(157),
    [anon_sym_ROPTION] = ACTIONS(157),
    [anon_sym_ESC] = ACTIONS(157),
    [anon_sym_ENTER] = ACTIONS(157),
    [anon_sym_UP] = ACTIONS(157),
    [anon_sym_DOWN] = ACTIONS(157),
    [anon_sym_LEFT] = ACTIONS(157),
    [anon_sym_RIGHT] = ACTIONS(157),
    [anon_sym_SPACE] = ACTIONS(157),
    [anon_sym_BACKSPACE] = ACTIONS(157),
    [anon_sym_TAB] = ACTIONS(157),
    [anon_sym_CAPSLOCK] = ACTIONS(157),
    [anon_sym_PRINTSCREEN] = ACTIONS(157),
    [anon_sym_SCROLLLOCK] = ACTIONS(157),
    [anon_sym_PAUSE] = ACTIONS(157),
    [anon_sym_BREAK] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_HOME] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_PAGEUP] = ACTIONS(157),
    [anon_sym_PAGEDOWN] = ACTIONS(157),
    [anon_sym_MENU] = ACTIONS(157),
    [anon_sym_POWER] = ACTIONS(157),
    [aux_sym_special_key_token1] = ACTIONS(157),
    [aux_sym_special_key_token2] = ACTIONS(157),
    [aux_sym_special_key_token3] = ACTIONS(157),
    [anon_sym_MK_VOLUP] = ACTIONS(157),
    [anon_sym_MK_VOLDOWN] = ACTIONS(157),
    [anon_sym_MK_MUTE] = ACTIONS(157),
    [anon_sym_MK_PREV] = ACTIONS(157),
    [anon_sym_MK_NEXT] = ACTIONS(157),
    [anon_sym_MK_PP] = ACTIONS(157),
    [anon_sym_MK_STOP] = ACTIONS(157),
    [anon_sym_NUMLOCK] = ACTIONS(157),
    [anon_sym_KP_SLASH] = ACTIONS(157),
    [anon_sym_KP_ASTERISK] = ACTIONS(157),
    [anon_sym_KP_MINUS] = ACTIONS(157),
    [anon_sym_KP_PLUS] = ACTIONS(157),
    [anon_sym_KP_ENTER] = ACTIONS(157),
    [aux_sym_special_key_token4] = ACTIONS(157),
    [anon_sym_KP_DOT] = ACTIONS(157),
    [anon_sym_KP_EQUAL] = ACTIONS(157),
    [anon_sym_LMOUSE] = ACTIONS(157),
    [anon_sym_RMOUSE] = ACTIONS(157),
    [anon_sym_MMOUSE] = ACTIONS(157),
  },
  [35] = {
    [anon_sym_CR_LF] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [aux_sym_identifier_token1] = ACTIONS(157),
    [aux_sym_identifier_token2] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_DEFINE] = ACTIONS(157),
    [anon_sym_VAR] = ACTIONS(157),
    [anon_sym_IF] = ACTIONS(157),
    [anon_sym_WHILE] = ACTIONS(157),
    [anon_sym_FUNCTION] = ACTIONS(157),
    [sym_loop_key] = ACTIONS(157),
    [aux_sym_swc_key_token1] = ACTIONS(157),
    [aux_sym_swc_key_token2] = ACTIONS(157),
    [anon_sym_REM] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_LBREAK] = ACTIONS(157),
    [anon_sym_CONTINUE] = ACTIONS(157),
    [anon_sym_RETURN] = ACTIONS(157),
    [anon_sym_OLED_CURSOR] = ACTIONS(157),
    [anon_sym_OLED_PRINT] = ACTIONS(157),
    [anon_sym_OLED_CLEAR] = ACTIONS(157),
    [anon_sym_OLED_UPDATE] = ACTIONS(157),
    [anon_sym_OLED_RESTORE] = ACTIONS(157),
    [anon_sym_SWC_SET] = ACTIONS(157),
    [anon_sym_SWC_FILL] = ACTIONS(157),
    [anon_sym_SWC_RESET] = ACTIONS(157),
    [anon_sym_DEFAULTDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(157),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_STRING] = ACTIONS(157),
    [anon_sym_STRINGLN] = ACTIONS(157),
    [anon_sym_REPEAT] = ACTIONS(157),
    [anon_sym_MOUSE_MOVE] = ACTIONS(157),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(157),
    [anon_sym_KEYDOWN] = ACTIONS(157),
    [anon_sym_KEYUP] = ACTIONS(157),
    [anon_sym_SWCOLOR] = ACTIONS(157),
    [anon_sym_DP_SLEEP] = ACTIONS(157),
    [anon_sym_PREV_PROFILE] = ACTIONS(157),
    [anon_sym_NEXT_PROFILE] = ACTIONS(157),
    [anon_sym_GOTO_PROFILE] = ACTIONS(157),
    [anon_sym_HOLD] = ACTIONS(157),
    [anon_sym_EMUK] = ACTIONS(157),
    [anon_sym_LCR] = ACTIONS(157),
    [anon_sym_CTRL] = ACTIONS(157),
    [anon_sym_RCTRL] = ACTIONS(157),
    [anon_sym_SHIFT] = ACTIONS(157),
    [anon_sym_RSHIFT] = ACTIONS(157),
    [anon_sym_ALT] = ACTIONS(157),
    [anon_sym_RALT] = ACTIONS(157),
    [anon_sym_WINDOWS] = ACTIONS(157),
    [anon_sym_RWINDOWS] = ACTIONS(157),
    [anon_sym_COMMAND] = ACTIONS(157),
    [anon_sym_RCOMMAND] = ACTIONS(157),
    [anon_sym_OPTION] = ACTIONS(157),
    [anon_sym_ROPTION] = ACTIONS(157),
    [anon_sym_ESC] = ACTIONS(157),
    [anon_sym_ENTER] = ACTIONS(157),
    [anon_sym_UP] = ACTIONS(157),
    [anon_sym_DOWN] = ACTIONS(157),
    [anon_sym_LEFT] = ACTIONS(157),
    [anon_sym_RIGHT] = ACTIONS(157),
    [anon_sym_SPACE] = ACTIONS(157),
    [anon_sym_BACKSPACE] = ACTIONS(157),
    [anon_sym_TAB] = ACTIONS(157),
    [anon_sym_CAPSLOCK] = ACTIONS(157),
    [anon_sym_PRINTSCREEN] = ACTIONS(157),
    [anon_sym_SCROLLLOCK] = ACTIONS(157),
    [anon_sym_PAUSE] = ACTIONS(157),
    [anon_sym_BREAK] = ACTIONS(157),
    [anon_sym_INSERT] = ACTIONS(157),
    [anon_sym_DELETE] = ACTIONS(157),
    [anon_sym_HOME] = ACTIONS(157),
    [anon_sym_END] = ACTIONS(157),
    [anon_sym_PAGEUP] = ACTIONS(157),
    [anon_sym_PAGEDOWN] = ACTIONS(157),
    [anon_sym_MENU] = ACTIONS(157),
    [anon_sym_POWER] = ACTIONS(157),
    [aux_sym_special_key_token1] = ACTIONS(157),
    [aux_sym_special_key_token2] = ACTIONS(157),
    [aux_sym_special_key_token3] = ACTIONS(157),
    [anon_sym_MK_VOLUP] = ACTIONS(157),
    [anon_sym_MK_VOLDOWN] = ACTIONS(157),
    [anon_sym_MK_MUTE] = ACTIONS(157),
    [anon_sym_MK_PREV] = ACTIONS(157),
    [anon_sym_MK_NEXT] = ACTIONS(157),
    [anon_sym_MK_PP] = ACTIONS(157),
    [anon_sym_MK_STOP] = ACTIONS(157),
    [anon_sym_NUMLOCK] = ACTIONS(157),
    [anon_sym_KP_SLASH] = ACTIONS(157),
    [anon_sym_KP_ASTERISK] = ACTIONS(157),
    [anon_sym_KP_MINUS] = ACTIONS(157),
    [anon_sym_KP_PLUS] = ACTIONS(157),
    [anon_sym_KP_ENTER] = ACTIONS(157),
    [aux_sym_special_key_token4] = ACTIONS(157),
    [anon_sym_KP_DOT] = ACTIONS(157),
    [anon_sym_KP_EQUAL] = ACTIONS(157),
    [anon_sym_LMOUSE] = ACTIONS(157),
    [anon_sym_RMOUSE] = ACTIONS(157),
    [anon_sym_MMOUSE] = ACTIONS(157),
  },
  [36] = {
    [anon_sym_CR_LF] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [aux_sym_identifier_token1] = ACTIONS(155),
    [aux_sym_identifier_token2] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [anon_sym_DEFINE] = ACTIONS(155),
    [anon_sym_VAR] = ACTIONS(155),
    [anon_sym_IF] = ACTIONS(155),
    [anon_sym_WHILE] = ACTIONS(155),
    [anon_sym_FUNCTION] = ACTIONS(155),
    [sym_loop_key] = ACTIONS(155),
    [aux_sym_swc_key_token1] = ACTIONS(155),
    [aux_sym_swc_key_token2] = ACTIONS(155),
    [anon_sym_REM] = ACTIONS(155),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_LBREAK] = ACTIONS(155),
    [anon_sym_CONTINUE] = ACTIONS(155),
    [anon_sym_RETURN] = ACTIONS(155),
    [anon_sym_OLED_CURSOR] = ACTIONS(155),
    [anon_sym_OLED_PRINT] = ACTIONS(155),
    [anon_sym_OLED_CLEAR] = ACTIONS(155),
    [anon_sym_OLED_UPDATE] = ACTIONS(155),
    [anon_sym_OLED_RESTORE] = ACTIONS(155),
    [anon_sym_SWC_SET] = ACTIONS(155),
    [anon_sym_SWC_FILL] = ACTIONS(155),
    [anon_sym_SWC_RESET] = ACTIONS(155),
    [anon_sym_DEFAULTDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAY] = ACTIONS(155),
    [anon_sym_DEFAULTCHARDELAYFUZZ] = ACTIONS(155),
    [anon_sym_DELAY] = ACTIONS(155),
    [anon_sym_STRING] = ACTIONS(155),
    [anon_sym_STRINGLN] = ACTIONS(155),
    [anon_sym_REPEAT] = ACTIONS(155),
    [anon_sym_MOUSE_MOVE] = ACTIONS(155),
    [anon_sym_MOUSE_WHEEL] = ACTIONS(155),
    [anon_sym_KEYDOWN] = ACTIONS(155),
    [anon_sym_KEYUP] = ACTIONS(155),
    [anon_sym_SWCOLOR] = ACTIONS(155),
    [anon_sym_DP_SLEEP] = ACTIONS(155),
    [anon_sym_PREV_PROFILE] = ACTIONS(155),
    [anon_sym_NEXT_PROFILE] = ACTIONS(155),
    [anon_sym_GOTO_PROFILE] = ACTIONS(155),
    [anon_sym_HOLD] = ACTIONS(155),
    [anon_sym_EMUK] = ACTIONS(155),
    [anon_sym_LCR] = ACTIONS(155),
    [anon_sym_CTRL] = ACTIONS(155),
    [anon_sym_RCTRL] = ACTIONS(155),
    [anon_sym_SHIFT] = ACTIONS(155),
    [anon_sym_RSHIFT] = ACTIONS(155),
    [anon_sym_ALT] = ACTIONS(155),
    [anon_sym_RALT] = ACTIONS(155),
    [anon_sym_WINDOWS] = ACTIONS(155),
    [anon_sym_RWINDOWS] = ACTIONS(155),
    [anon_sym_COMMAND] = ACTIONS(155),
    [anon_sym_RCOMMAND] = ACTIONS(155),
    [anon_sym_OPTION] = ACTIONS(155),
    [anon_sym_ROPTION] = ACTIONS(155),
    [anon_sym_ESC] = ACTIONS(155),
    [anon_sym_ENTER] = ACTIONS(155),
    [anon_sym_UP] = ACTIONS(155),
    [anon_sym_DOWN] = ACTIONS(155),
    [anon_sym_LEFT] = ACTIONS(155),
    [anon_sym_RIGHT] = ACTIONS(155),
    [anon_sym_SPACE] = ACTIONS(155),
    [anon_sym_BACKSPACE] = ACTIONS(155),
    [anon_sym_TAB] = ACTIONS(155),
    [anon_sym_CAPSLOCK] = ACTIONS(155),
    [anon_sym_PRINTSCREEN] = ACTIONS(155),
    [anon_sym_SCROLLLOCK] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(155),
    [anon_sym_BREAK] = ACTIONS(155),
    [anon_sym_INSERT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_HOME] = ACTIONS(155),
    [anon_sym_END] = ACTIONS(155),
    [anon_sym_PAGEUP] = ACTIONS(155),
    [anon_sym_PAGEDOWN] = ACTIONS(155),
    [anon_sym_MENU] = ACTIONS(155),
    [anon_sym_POWER] = ACTIONS(155),
    [aux_sym_special_key_token1] = ACTIONS(155),
    [aux_sym_special_key_token2] = ACTIONS(155),
    [aux_sym_special_key_token3] = ACTIONS(155),
    [anon_sym_MK_VOLUP] = ACTIONS(155),
    [anon_sym_MK_VOLDOWN] = ACTIONS(155),
    [anon_sym_MK_MUTE] = ACTIONS(155),
    [anon_sym_MK_PREV] = ACTIONS(155),
    [anon_sym_MK_NEXT] = ACTIONS(155),
    [anon_sym_MK_PP] = ACTIONS(155),
    [anon_sym_MK_STOP] = ACTIONS(155),
    [anon_sym_NUMLOCK] = ACTIONS(155),
    [anon_sym_KP_SLASH] = ACTIONS(155),
    [anon_sym_KP_ASTERISK] = ACTIONS(155),
    [anon_sym_KP_MINUS] = ACTIONS(155),
    [anon_sym_KP_PLUS] = ACTIONS(155),
    [anon_sym_KP_ENTER] = ACTIONS(155),
    [aux_sym_special_key_token4] = ACTIONS(155),
    [anon_sym_KP_DOT] = ACTIONS(155),
    [anon_sym_KP_EQUAL] = ACTIONS(155),
    [anon_sym_LMOUSE] = ACTIONS(155),
    [anon_sym_RMOUSE] = ACTIONS(155),
    [anon_sym_MMOUSE] = ACTIONS(155),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(165), 1,
      sym_normal_key,
    ACTIONS(163), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(38), 2,
      sym_special_key,
      sym__key,
    ACTIONS(47), 56,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [70] = 4,
    ACTIONS(169), 1,
      sym_normal_key,
    ACTIONS(167), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(40), 2,
      sym_special_key,
      sym__key,
    ACTIONS(47), 56,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [140] = 4,
    ACTIONS(173), 1,
      sym_normal_key,
    ACTIONS(171), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(37), 2,
      sym_special_key,
      sym__key,
    ACTIONS(47), 56,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [210] = 4,
    ACTIONS(177), 1,
      sym_normal_key,
    ACTIONS(175), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(41), 2,
      sym_special_key,
      sym__key,
    ACTIONS(47), 56,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [280] = 4,
    ACTIONS(181), 1,
      sym_normal_key,
    ACTIONS(179), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(166), 2,
      sym_special_key,
      sym__key,
    ACTIONS(183), 56,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [350] = 1,
    ACTIONS(185), 59,
      anon_sym_CR_LF,
      anon_sym_LF,
      sym_normal_key,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [412] = 3,
    ACTIONS(187), 1,
      sym_normal_key,
    STATE(177), 2,
      sym_special_key,
      sym__key,
    ACTIONS(183), 56,
      anon_sym_CTRL,
      anon_sym_RCTRL,
      anon_sym_SHIFT,
      anon_sym_RSHIFT,
      anon_sym_ALT,
      anon_sym_RALT,
      anon_sym_WINDOWS,
      anon_sym_RWINDOWS,
      anon_sym_COMMAND,
      anon_sym_RCOMMAND,
      anon_sym_OPTION,
      anon_sym_ROPTION,
      anon_sym_ESC,
      anon_sym_ENTER,
      anon_sym_UP,
      anon_sym_DOWN,
      anon_sym_LEFT,
      anon_sym_RIGHT,
      anon_sym_SPACE,
      anon_sym_BACKSPACE,
      anon_sym_TAB,
      anon_sym_CAPSLOCK,
      anon_sym_PRINTSCREEN,
      anon_sym_SCROLLLOCK,
      anon_sym_PAUSE,
      anon_sym_BREAK,
      anon_sym_INSERT,
      anon_sym_DELETE,
      anon_sym_HOME,
      anon_sym_END,
      anon_sym_PAGEUP,
      anon_sym_PAGEDOWN,
      anon_sym_MENU,
      anon_sym_POWER,
      aux_sym_special_key_token1,
      aux_sym_special_key_token2,
      aux_sym_special_key_token3,
      anon_sym_MK_VOLUP,
      anon_sym_MK_VOLDOWN,
      anon_sym_MK_MUTE,
      anon_sym_MK_PREV,
      anon_sym_MK_NEXT,
      anon_sym_MK_PP,
      anon_sym_MK_STOP,
      anon_sym_NUMLOCK,
      anon_sym_KP_SLASH,
      anon_sym_KP_ASTERISK,
      anon_sym_KP_MINUS,
      anon_sym_KP_PLUS,
      anon_sym_KP_ENTER,
      aux_sym_special_key_token4,
      anon_sym_KP_DOT,
      anon_sym_KP_EQUAL,
      anon_sym_LMOUSE,
      anon_sym_RMOUSE,
      anon_sym_MMOUSE,
  [478] = 1,
    ACTIONS(189), 24,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [505] = 1,
    ACTIONS(191), 24,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [532] = 1,
    ACTIONS(193), 24,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [559] = 2,
    ACTIONS(189), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(195), 17,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LPAREN_RPAREN,
      anon_sym_THEN,
  [586] = 11,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(215), 1,
      anon_sym_PIPE_PIPE,
    STATE(20), 1,
      sym_newline,
    ACTIONS(197), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [630] = 2,
    ACTIONS(193), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(217), 16,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [656] = 6,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 6,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [689] = 9,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(237), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [728] = 1,
    ACTIONS(239), 20,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [751] = 10,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(215), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(241), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [792] = 8,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 4,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [829] = 5,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 12,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [860] = 9,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 3,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_PIPE_PIPE,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [899] = 4,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 14,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [928] = 3,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 16,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [955] = 2,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(219), 19,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [980] = 10,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(243), 1,
      anon_sym_AMP_AMP,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(237), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1021] = 7,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(203), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(205), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 5,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(207), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1056] = 9,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(237), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1095] = 8,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(219), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(237), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1132] = 6,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(237), 8,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1165] = 5,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(237), 10,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1196] = 4,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(237), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1225] = 3,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(219), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(237), 15,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1252] = 3,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(219), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(237), 15,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1279] = 2,
    ACTIONS(247), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(245), 16,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1304] = 2,
    ACTIONS(199), 1,
      anon_sym_CARET,
    ACTIONS(219), 19,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1329] = 1,
    ACTIONS(247), 20,
      anon_sym_CR_LF,
      anon_sym_LF,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1352] = 2,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(249), 16,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1377] = 2,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(251), 16,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_THEN,
  [1402] = 11,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(243), 1,
      anon_sym_AMP_AMP,
    ACTIONS(253), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(255), 1,
      anon_sym_THEN,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1444] = 11,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(243), 1,
      anon_sym_AMP_AMP,
    ACTIONS(253), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1486] = 11,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(243), 1,
      anon_sym_AMP_AMP,
    ACTIONS(253), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(259), 1,
      anon_sym_THEN,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1528] = 11,
    ACTIONS(221), 1,
      anon_sym_CARET,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(243), 1,
      anon_sym_AMP_AMP,
    ACTIONS(253), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(227), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1570] = 10,
    ACTIONS(263), 1,
      sym_uint,
    ACTIONS(265), 1,
      sym_int,
    ACTIONS(267), 1,
      sym_str,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(155), 1,
      sym_param_signed,
    STATE(177), 1,
      sym_param_str,
    STATE(178), 1,
      sym_param,
    ACTIONS(269), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [1603] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1628] = 7,
    ACTIONS(263), 1,
      sym_uint,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(169), 1,
      sym_param,
    ACTIONS(269), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(281), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(123), 2,
      sym_var,
      sym_const,
  [1653] = 9,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(285), 1,
      sym_int,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(93), 1,
      sym_param_signed,
    STATE(121), 1,
      sym_const,
    STATE(122), 1,
      sym_identifier,
    STATE(126), 1,
      sym_param,
    STATE(128), 1,
      sym_var,
    ACTIONS(287), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [1682] = 8,
    ACTIONS(265), 1,
      sym_int,
    ACTIONS(291), 1,
      sym_uint,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(177), 1,
      sym_param_signed,
    STATE(178), 1,
      sym_param,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [1709] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1734] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_identifier,
    STATE(77), 1,
      sym_expr,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1759] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1784] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1809] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1834] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1859] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1884] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1909] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_expr,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1934] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(53), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [1959] = 8,
    ACTIONS(265), 1,
      sym_int,
    ACTIONS(291), 1,
      sym_uint,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym_param_signed,
    STATE(178), 1,
      sym_param,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [1986] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_identifier,
    STATE(75), 1,
      sym_expr,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2011] = 7,
    ACTIONS(263), 1,
      sym_uint,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(172), 1,
      sym_param,
    ACTIONS(269), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(301), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2036] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(56), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2061] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(54), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2086] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(61), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2111] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_identifier,
    STATE(76), 1,
      sym_expr,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2136] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(50), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2161] = 7,
    ACTIONS(263), 1,
      sym_uint,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(80), 1,
      sym_param,
    ACTIONS(269), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(301), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2186] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(55), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2211] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(57), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2236] = 7,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_uint,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_identifier,
    STATE(74), 1,
      sym_expr,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(72), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2261] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(58), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2286] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(59), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2311] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(70), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2336] = 7,
    ACTIONS(263), 1,
      sym_uint,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(177), 1,
      sym_param,
    ACTIONS(269), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(303), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2361] = 7,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_uint,
    STATE(45), 1,
      sym_identifier,
    STATE(48), 1,
      sym_expr,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(52), 3,
      sym_binary_expr,
      sym_var,
      sym_const,
  [2386] = 6,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(112), 1,
      sym_param,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(305), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(128), 2,
      sym_var,
      sym_const,
  [2407] = 7,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(119), 1,
      sym_param,
    STATE(121), 1,
      sym_const,
    STATE(128), 1,
      sym_var,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2430] = 6,
    ACTIONS(291), 1,
      sym_uint,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(168), 1,
      sym_param,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2451] = 7,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(101), 1,
      sym_const,
    STATE(118), 1,
      sym_param,
    STATE(128), 1,
      sym_var,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2474] = 6,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(117), 1,
      sym_param,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(305), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(128), 2,
      sym_var,
      sym_const,
  [2495] = 7,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(95), 1,
      sym_const,
    STATE(110), 1,
      sym_param,
    STATE(128), 1,
      sym_var,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2518] = 6,
    ACTIONS(291), 1,
      sym_uint,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(177), 1,
      sym_param,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2539] = 6,
    ACTIONS(291), 1,
      sym_uint,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(159), 1,
      sym_param,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2560] = 6,
    ACTIONS(283), 1,
      sym_uint,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym_param,
    STATE(133), 1,
      sym_identifier,
    ACTIONS(305), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(128), 2,
      sym_var,
      sym_const,
  [2581] = 6,
    ACTIONS(291), 1,
      sym_uint,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_identifier,
    STATE(173), 1,
      sym_param,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    STATE(123), 2,
      sym_var,
      sym_const,
  [2602] = 1,
    ACTIONS(189), 7,
      anon_sym_CR_LF,
      anon_sym_LF,
      sym_uint,
      sym_int,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2612] = 2,
    ACTIONS(301), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
    ACTIONS(307), 5,
      sym_uint,
      sym_int,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2624] = 1,
    ACTIONS(191), 7,
      anon_sym_CR_LF,
      anon_sym_LF,
      sym_uint,
      sym_int,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2634] = 1,
    ACTIONS(307), 6,
      anon_sym_CR_LF,
      anon_sym_LF,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2643] = 2,
    ACTIONS(189), 1,
      sym_int,
    ACTIONS(195), 4,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2653] = 2,
    ACTIONS(193), 1,
      sym_int,
    ACTIONS(217), 4,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2663] = 2,
    ACTIONS(311), 1,
      sym_int,
    ACTIONS(309), 4,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2673] = 3,
    STATE(175), 1,
      sym_bool,
    ACTIONS(313), 2,
      sym_uint,
      sym_str,
    ACTIONS(315), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
  [2685] = 2,
    ACTIONS(307), 1,
      sym_int,
    ACTIONS(317), 4,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2695] = 1,
    ACTIONS(191), 4,
      sym_uint,
      sym_str,
      anon_sym_TRUE,
      anon_sym_FALSE,
  [2702] = 3,
    STATE(127), 1,
      sym_const,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(319), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2713] = 3,
    STATE(144), 1,
      sym_func,
    STATE(182), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2724] = 1,
    ACTIONS(321), 4,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2731] = 1,
    ACTIONS(251), 4,
      sym_uint,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
      anon_sym_DOLLAR,
  [2738] = 4,
    ACTIONS(323), 1,
      anon_sym_ELSEIF,
    ACTIONS(326), 1,
      anon_sym_ELSE,
    ACTIONS(328), 1,
      anon_sym_END_IF,
    STATE(134), 1,
      aux_sym_if_repeat1,
  [2751] = 4,
    ACTIONS(330), 1,
      anon_sym_ELSEIF,
    ACTIONS(332), 1,
      anon_sym_ELSE,
    ACTIONS(334), 1,
      anon_sym_END_IF,
    STATE(134), 1,
      aux_sym_if_repeat1,
  [2764] = 1,
    ACTIONS(189), 4,
      sym_uint,
      sym_str,
      anon_sym_TRUE,
      anon_sym_FALSE,
  [2771] = 4,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(330), 1,
      anon_sym_ELSEIF,
    ACTIONS(336), 1,
      anon_sym_END_IF,
    STATE(134), 1,
      aux_sym_if_repeat1,
  [2784] = 2,
    STATE(6), 1,
      sym_newline,
    ACTIONS(338), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2792] = 2,
    STATE(3), 1,
      sym_newline,
    ACTIONS(338), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2800] = 2,
    STATE(36), 1,
      sym_newline,
    ACTIONS(5), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2808] = 2,
    STATE(33), 1,
      sym_newline,
    ACTIONS(197), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2816] = 2,
    STATE(14), 1,
      sym_newline,
    ACTIONS(340), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2824] = 2,
    STATE(16), 1,
      sym_newline,
    ACTIONS(340), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2832] = 2,
    STATE(21), 1,
      sym_newline,
    ACTIONS(342), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2840] = 2,
    STATE(32), 1,
      sym_newline,
    ACTIONS(340), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2848] = 2,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(277), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2856] = 2,
    STATE(46), 1,
      sym_identifier,
    ACTIONS(293), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2864] = 2,
    STATE(23), 1,
      sym_newline,
    ACTIONS(5), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2872] = 2,
    STATE(25), 1,
      sym_newline,
    ACTIONS(338), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2880] = 2,
    STATE(28), 1,
      sym_newline,
    ACTIONS(344), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2888] = 2,
    STATE(10), 1,
      sym_newline,
    ACTIONS(340), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2896] = 2,
    STATE(29), 1,
      sym_newline,
    ACTIONS(342), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2904] = 3,
    ACTIONS(279), 1,
      anon_sym_DOLLAR,
    STATE(179), 1,
      sym_assignment,
    STATE(181), 1,
      sym_var,
  [2914] = 2,
    STATE(125), 1,
      sym_identifier,
    ACTIONS(305), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2922] = 1,
    ACTIONS(346), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2927] = 1,
    ACTIONS(348), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2932] = 1,
    ACTIONS(350), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2937] = 1,
    ACTIONS(352), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2942] = 1,
    ACTIONS(354), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2947] = 1,
    ACTIONS(356), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2952] = 1,
    ACTIONS(358), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2957] = 1,
    ACTIONS(360), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2962] = 1,
    ACTIONS(362), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2967] = 1,
    ACTIONS(185), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2972] = 1,
    ACTIONS(364), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2977] = 1,
    ACTIONS(366), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2982] = 1,
    ACTIONS(303), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2987] = 1,
    ACTIONS(368), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2992] = 1,
    ACTIONS(368), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [2997] = 1,
    ACTIONS(370), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3002] = 1,
    ACTIONS(372), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3007] = 1,
    ACTIONS(281), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3012] = 1,
    ACTIONS(281), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3017] = 1,
    ACTIONS(374), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3022] = 1,
    ACTIONS(376), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3027] = 1,
    ACTIONS(378), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3032] = 1,
    ACTIONS(301), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3037] = 1,
    ACTIONS(311), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3042] = 1,
    ACTIONS(380), 2,
      anon_sym_CR_LF,
      anon_sym_LF,
  [3047] = 1,
    ACTIONS(382), 1,
      sym_str,
  [3051] = 1,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [3055] = 1,
    ACTIONS(386), 1,
      anon_sym_LPAREN_RPAREN,
  [3059] = 1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
  [3063] = 1,
    ACTIONS(390), 1,
      sym_str,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(37)] = 0,
  [SMALL_STATE(38)] = 70,
  [SMALL_STATE(39)] = 140,
  [SMALL_STATE(40)] = 210,
  [SMALL_STATE(41)] = 280,
  [SMALL_STATE(42)] = 350,
  [SMALL_STATE(43)] = 412,
  [SMALL_STATE(44)] = 478,
  [SMALL_STATE(45)] = 505,
  [SMALL_STATE(46)] = 532,
  [SMALL_STATE(47)] = 559,
  [SMALL_STATE(48)] = 586,
  [SMALL_STATE(49)] = 630,
  [SMALL_STATE(50)] = 656,
  [SMALL_STATE(51)] = 689,
  [SMALL_STATE(52)] = 728,
  [SMALL_STATE(53)] = 751,
  [SMALL_STATE(54)] = 792,
  [SMALL_STATE(55)] = 829,
  [SMALL_STATE(56)] = 860,
  [SMALL_STATE(57)] = 899,
  [SMALL_STATE(58)] = 928,
  [SMALL_STATE(59)] = 955,
  [SMALL_STATE(60)] = 980,
  [SMALL_STATE(61)] = 1021,
  [SMALL_STATE(62)] = 1056,
  [SMALL_STATE(63)] = 1095,
  [SMALL_STATE(64)] = 1132,
  [SMALL_STATE(65)] = 1165,
  [SMALL_STATE(66)] = 1196,
  [SMALL_STATE(67)] = 1225,
  [SMALL_STATE(68)] = 1252,
  [SMALL_STATE(69)] = 1279,
  [SMALL_STATE(70)] = 1304,
  [SMALL_STATE(71)] = 1329,
  [SMALL_STATE(72)] = 1352,
  [SMALL_STATE(73)] = 1377,
  [SMALL_STATE(74)] = 1402,
  [SMALL_STATE(75)] = 1444,
  [SMALL_STATE(76)] = 1486,
  [SMALL_STATE(77)] = 1528,
  [SMALL_STATE(78)] = 1570,
  [SMALL_STATE(79)] = 1603,
  [SMALL_STATE(80)] = 1628,
  [SMALL_STATE(81)] = 1653,
  [SMALL_STATE(82)] = 1682,
  [SMALL_STATE(83)] = 1709,
  [SMALL_STATE(84)] = 1734,
  [SMALL_STATE(85)] = 1759,
  [SMALL_STATE(86)] = 1784,
  [SMALL_STATE(87)] = 1809,
  [SMALL_STATE(88)] = 1834,
  [SMALL_STATE(89)] = 1859,
  [SMALL_STATE(90)] = 1884,
  [SMALL_STATE(91)] = 1909,
  [SMALL_STATE(92)] = 1934,
  [SMALL_STATE(93)] = 1959,
  [SMALL_STATE(94)] = 1986,
  [SMALL_STATE(95)] = 2011,
  [SMALL_STATE(96)] = 2036,
  [SMALL_STATE(97)] = 2061,
  [SMALL_STATE(98)] = 2086,
  [SMALL_STATE(99)] = 2111,
  [SMALL_STATE(100)] = 2136,
  [SMALL_STATE(101)] = 2161,
  [SMALL_STATE(102)] = 2186,
  [SMALL_STATE(103)] = 2211,
  [SMALL_STATE(104)] = 2236,
  [SMALL_STATE(105)] = 2261,
  [SMALL_STATE(106)] = 2286,
  [SMALL_STATE(107)] = 2311,
  [SMALL_STATE(108)] = 2336,
  [SMALL_STATE(109)] = 2361,
  [SMALL_STATE(110)] = 2386,
  [SMALL_STATE(111)] = 2407,
  [SMALL_STATE(112)] = 2430,
  [SMALL_STATE(113)] = 2451,
  [SMALL_STATE(114)] = 2474,
  [SMALL_STATE(115)] = 2495,
  [SMALL_STATE(116)] = 2518,
  [SMALL_STATE(117)] = 2539,
  [SMALL_STATE(118)] = 2560,
  [SMALL_STATE(119)] = 2581,
  [SMALL_STATE(120)] = 2602,
  [SMALL_STATE(121)] = 2612,
  [SMALL_STATE(122)] = 2624,
  [SMALL_STATE(123)] = 2634,
  [SMALL_STATE(124)] = 2643,
  [SMALL_STATE(125)] = 2653,
  [SMALL_STATE(126)] = 2663,
  [SMALL_STATE(127)] = 2673,
  [SMALL_STATE(128)] = 2685,
  [SMALL_STATE(129)] = 2695,
  [SMALL_STATE(130)] = 2702,
  [SMALL_STATE(131)] = 2713,
  [SMALL_STATE(132)] = 2724,
  [SMALL_STATE(133)] = 2731,
  [SMALL_STATE(134)] = 2738,
  [SMALL_STATE(135)] = 2751,
  [SMALL_STATE(136)] = 2764,
  [SMALL_STATE(137)] = 2771,
  [SMALL_STATE(138)] = 2784,
  [SMALL_STATE(139)] = 2792,
  [SMALL_STATE(140)] = 2800,
  [SMALL_STATE(141)] = 2808,
  [SMALL_STATE(142)] = 2816,
  [SMALL_STATE(143)] = 2824,
  [SMALL_STATE(144)] = 2832,
  [SMALL_STATE(145)] = 2840,
  [SMALL_STATE(146)] = 2848,
  [SMALL_STATE(147)] = 2856,
  [SMALL_STATE(148)] = 2864,
  [SMALL_STATE(149)] = 2872,
  [SMALL_STATE(150)] = 2880,
  [SMALL_STATE(151)] = 2888,
  [SMALL_STATE(152)] = 2896,
  [SMALL_STATE(153)] = 2904,
  [SMALL_STATE(154)] = 2914,
  [SMALL_STATE(155)] = 2922,
  [SMALL_STATE(156)] = 2927,
  [SMALL_STATE(157)] = 2932,
  [SMALL_STATE(158)] = 2937,
  [SMALL_STATE(159)] = 2942,
  [SMALL_STATE(160)] = 2947,
  [SMALL_STATE(161)] = 2952,
  [SMALL_STATE(162)] = 2957,
  [SMALL_STATE(163)] = 2962,
  [SMALL_STATE(164)] = 2967,
  [SMALL_STATE(165)] = 2972,
  [SMALL_STATE(166)] = 2977,
  [SMALL_STATE(167)] = 2982,
  [SMALL_STATE(168)] = 2987,
  [SMALL_STATE(169)] = 2992,
  [SMALL_STATE(170)] = 2997,
  [SMALL_STATE(171)] = 3002,
  [SMALL_STATE(172)] = 3007,
  [SMALL_STATE(173)] = 3012,
  [SMALL_STATE(174)] = 3017,
  [SMALL_STATE(175)] = 3022,
  [SMALL_STATE(176)] = 3027,
  [SMALL_STATE(177)] = 3032,
  [SMALL_STATE(178)] = 3037,
  [SMALL_STATE(179)] = 3042,
  [SMALL_STATE(180)] = 3047,
  [SMALL_STATE(181)] = 3051,
  [SMALL_STATE(182)] = 3055,
  [SMALL_STATE(183)] = 3059,
  [SMALL_STATE(184)] = 3063,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyseq, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyseq, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyseq, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyseq, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyseq, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_key, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_signed, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_signed, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swc_key, 1),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(99),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_str, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 9),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 10),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyseq, 6),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [388] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_duckyscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
