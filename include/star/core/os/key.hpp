#ifndef STAR_KEY_HPP
#define STAR_KEY_HPP

#include <star/def.hpp>
#include <GLFW/glfw3.h>

namespace star {
//class from godot
enum class Key {
    NONE = 0,
    // Special key: The strategy here is similar to the one used by toolkits,
    // which consists in leaving the 21 bits unicode range for printable
    // characters, and use the upper 11 bits for special keys and modifiers.
    // This way everything (char/keycode) can fit nicely in one 32-bit
    // integer (the enum's underlying type is `int` by default).
    SPECIAL = (1 << 22),
    /* CURSOR/FUNCTION/BROWSER/MULTIMEDIA/MISC KEYS */
    ESCAPE = SPECIAL | 0x01,
    TAB = SPECIAL | 0x02,
    BACKTAB = SPECIAL | 0x03,
    BACKSPACE = SPECIAL | 0x04,
    ENTER = SPECIAL | 0x05,
    KP_ENTER = SPECIAL | 0x06,
    INSERT = SPECIAL | 0x07,
    KEY_DELETE = SPECIAL | 0x08, // "DELETE" is a reserved word on Windows.
    PAUSE = SPECIAL | 0x09,
    PRINT = SPECIAL | 0x0A,
    SYSREQ = SPECIAL | 0x0B,
    CLEAR = SPECIAL | 0x0C,
    HOME = SPECIAL | 0x0D,
    END = SPECIAL | 0x0E,
    LEFT = SPECIAL | 0x0F,
    UP = SPECIAL | 0x10,
    RIGHT = SPECIAL | 0x11,
    DOWN = SPECIAL | 0x12,
    PAGEUP = SPECIAL | 0x13,
    PAGEDOWN = SPECIAL | 0x14,
    SHIFT = SPECIAL | 0x15,
    CTRL = SPECIAL | 0x16,
    META = SPECIAL | 0x17,
#if defined(MACOS_ENABLED)
    CMD_OR_CTRL = META,
#else
    CMD_OR_CTRL = CTRL,
#endif
    ALT = SPECIAL | 0x18,
    CAPSLOCK = SPECIAL | 0x19,
    NUMLOCK = SPECIAL | 0x1A,
    SCROLLLOCK = SPECIAL | 0x1B,
    F1 = SPECIAL | 0x1C,
    F2 = SPECIAL | 0x1D,
    F3 = SPECIAL | 0x1E,
    F4 = SPECIAL | 0x1F,
    F5 = SPECIAL | 0x20,
    F6 = SPECIAL | 0x21,
    F7 = SPECIAL | 0x22,
    F8 = SPECIAL | 0x23,
    F9 = SPECIAL | 0x24,
    F10 = SPECIAL | 0x25,
    F11 = SPECIAL | 0x26,
    F12 = SPECIAL | 0x27,
    F13 = SPECIAL | 0x28,
    F14 = SPECIAL | 0x29,
    F15 = SPECIAL | 0x2A,
    F16 = SPECIAL | 0x2B,
    F17 = SPECIAL | 0x2C,
    F18 = SPECIAL | 0x2D,
    F19 = SPECIAL | 0x2E,
    F20 = SPECIAL | 0x2F,
    F21 = SPECIAL | 0x30,
    F22 = SPECIAL | 0x31,
    F23 = SPECIAL | 0x32,
    F24 = SPECIAL | 0x33,
    F25 = SPECIAL | 0x34,
    F26 = SPECIAL | 0x35,
    F27 = SPECIAL | 0x36,
    F28 = SPECIAL | 0x37,
    F29 = SPECIAL | 0x38,
    F30 = SPECIAL | 0x39,
    F31 = SPECIAL | 0x3A,
    F32 = SPECIAL | 0x3B,
    F33 = SPECIAL | 0x3C,
    F34 = SPECIAL | 0x3D,
    F35 = SPECIAL | 0x3E,
    KP_MULTIPLY = SPECIAL | 0x81,
    KP_DIVIDE = SPECIAL | 0x82,
    KP_SUBTRACT = SPECIAL | 0x83,
    KP_PERIOD = SPECIAL | 0x84,
    KP_ADD = SPECIAL | 0x85,
    KP_0 = SPECIAL | 0x86,
    KP_1 = SPECIAL | 0x87,
    KP_2 = SPECIAL | 0x88,
    KP_3 = SPECIAL | 0x89,
    KP_4 = SPECIAL | 0x8A,
    KP_5 = SPECIAL | 0x8B,
    KP_6 = SPECIAL | 0x8C,
    KP_7 = SPECIAL | 0x8D,
    KP_8 = SPECIAL | 0x8E,
    KP_9 = SPECIAL | 0x8F,
    MENU = SPECIAL | 0x42,
    HYPER = SPECIAL | 0x43,
    HELP = SPECIAL | 0x45,
    BACK = SPECIAL | 0x48,
    FORWARD = SPECIAL | 0x49,
    STOP = SPECIAL | 0x4A,
    REFRESH = SPECIAL | 0x4B,
    VOLUMEDOWN = SPECIAL | 0x4C,
    VOLUMEMUTE = SPECIAL | 0x4D,
    VOLUMEUP = SPECIAL | 0x4E,
    MEDIAPLAY = SPECIAL | 0x54,
    MEDIASTOP = SPECIAL | 0x55,
    MEDIAPREVIOUS = SPECIAL | 0x56,
    MEDIANEXT = SPECIAL | 0x57,
    MEDIARECORD = SPECIAL | 0x58,
    HOMEPAGE = SPECIAL | 0x59,
    FAVORITES = SPECIAL | 0x5A,
    SEARCH = SPECIAL | 0x5B,
    STANDBY = SPECIAL | 0x5C,
    OPENURL = SPECIAL | 0x5D,
    LAUNCHMAIL = SPECIAL | 0x5E,
    LAUNCHMEDIA = SPECIAL | 0x5F,
    LAUNCH0 = SPECIAL | 0x60,
    LAUNCH1 = SPECIAL | 0x61,
    LAUNCH2 = SPECIAL | 0x62,
    LAUNCH3 = SPECIAL | 0x63,
    LAUNCH4 = SPECIAL | 0x64,
    LAUNCH5 = SPECIAL | 0x65,
    LAUNCH6 = SPECIAL | 0x66,
    LAUNCH7 = SPECIAL | 0x67,
    LAUNCH8 = SPECIAL | 0x68,
    LAUNCH9 = SPECIAL | 0x69,
    LAUNCHA = SPECIAL | 0x6A,
    LAUNCHB = SPECIAL | 0x6B,
    LAUNCHC = SPECIAL | 0x6C,
    LAUNCHD = SPECIAL | 0x6D,
    LAUNCHE = SPECIAL | 0x6E,
    LAUNCHF = SPECIAL | 0x6F,

    GLOBE = SPECIAL | 0x70,
    KEYBOARD = SPECIAL | 0x71,
    JIS_EISU = SPECIAL | 0x72,
    JIS_KANA = SPECIAL | 0x73,

    UNKNOWN = SPECIAL | 0x7FFFFF,

    /* PRINTABLE LATIN 1 CODES */

    SPACE = 0x0020,
    EXCLAM = 0x0021,
    QUOTEDBL = 0x0022,
    NUMBERSIGN = 0x0023,
    DOLLAR = 0x0024,
    PERCENT = 0x0025,
    AMPERSAND = 0x0026,
    APOSTROPHE = 0x0027,
    PARENLEFT = 0x0028,
    PARENRIGHT = 0x0029,
    ASTERISK = 0x002A,
    PLUS = 0x002B,
    COMMA = 0x002C,
    MINUS = 0x002D,
    PERIOD = 0x002E,
    SLASH = 0x002F,
    KEY_0 = 0x0030,
    KEY_1 = 0x0031,
    KEY_2 = 0x0032,
    KEY_3 = 0x0033,
    KEY_4 = 0x0034,
    KEY_5 = 0x0035,
    KEY_6 = 0x0036,
    KEY_7 = 0x0037,
    KEY_8 = 0x0038,
    KEY_9 = 0x0039,
    COLON = 0x003A,
    SEMICOLON = 0x003B,
    LESS = 0x003C,
    EQUAL = 0x003D,
    GREATER = 0x003E,
    QUESTION = 0x003F,
    AT = 0x0040,
    A = 0x0041,
    B = 0x0042,
    C = 0x0043,
    D = 0x0044,
    E = 0x0045,
    F = 0x0046,
    G = 0x0047,
    H = 0x0048,
    I = 0x0049,
    J = 0x004A,
    K = 0x004B,
    L = 0x004C,
    M = 0x004D,
    N = 0x004E,
    O = 0x004F,
    P = 0x0050,
    Q = 0x0051,
    R = 0x0052,
    S = 0x0053,
    T = 0x0054,
    U = 0x0055,
    V = 0x0056,
    W = 0x0057,
    X = 0x0058,
    Y = 0x0059,
    Z = 0x005A,
    BRACKETLEFT = 0x005B,
    BACKSLASH = 0x005C,
    BRACKETRIGHT = 0x005D,
    ASCIICIRCUM = 0x005E,
    UNDERSCORE = 0x005F,
    QUOTELEFT = 0x0060,
    BRACELEFT = 0x007B,
    BAR = 0x007C,
    BRACERIGHT = 0x007D,
    ASCIITILDE = 0x007E,
    YEN = 0x00A5,
    SECTION = 0x00A7,
};
enum class KeyModifierMask {
    CODE_MASK = ((1 << 23) -
                 1), ///< Apply this mask to any keycode to remove modifiers.
    MODIFIER_MASK = (0x7F << 22), ///< Apply this mask to isolate modifiers.
    // RESERVED = (1 << 23),
    CMD_OR_CTRL = (1 << 24),
    SHIFT = (1 << 25),
    ALT = (1 << 26),
    META = (1 << 27),
    CTRL = (1 << 28),
    KPAD = (1 << 29),
    GROUP_SWITCH = (1 << 30)
};
constexpr Key glfwKeyConvert(int glfw_key) {
    switch (glfw_key) {
        case GLFW_KEY_SPACE: return Key::SPACE;
        case GLFW_KEY_APOSTROPHE: return Key::APOSTROPHE;
        case GLFW_KEY_COMMA: return Key::COMMA;
        case GLFW_KEY_MINUS: return Key::MINUS;
        case GLFW_KEY_PERIOD: return Key::PERIOD;
        case GLFW_KEY_SLASH: return Key::SLASH;
        case GLFW_KEY_0: return Key::KEY_0;
        case GLFW_KEY_1: return Key::KEY_1;
        case GLFW_KEY_2: return Key::KEY_2;
        case GLFW_KEY_3: return Key::KEY_3;
        case GLFW_KEY_4: return Key::KEY_4;
        case GLFW_KEY_5: return Key::KEY_5;
        case GLFW_KEY_6: return Key::KEY_6;
        case GLFW_KEY_7: return Key::KEY_7;
        case GLFW_KEY_8: return Key::KEY_8;
        case GLFW_KEY_9: return Key::KEY_9;
        case GLFW_KEY_SEMICOLON: return Key::SEMICOLON;
        case GLFW_KEY_EQUAL: return Key::EQUAL;
        case GLFW_KEY_A: return Key::A;
        case GLFW_KEY_B: return Key::B;
        case GLFW_KEY_C: return Key::C;
        case GLFW_KEY_D: return Key::D;
        case GLFW_KEY_E: return Key::E;
        case GLFW_KEY_F: return Key::F;
        case GLFW_KEY_G: return Key::G;
        case GLFW_KEY_H: return Key::H;
        case GLFW_KEY_I: return Key::I;
        case GLFW_KEY_J: return Key::J;
        case GLFW_KEY_K: return Key::K;
        case GLFW_KEY_L: return Key::L;
        case GLFW_KEY_M: return Key::M;
        case GLFW_KEY_N: return Key::N;
        case GLFW_KEY_O: return Key::O;
        case GLFW_KEY_P: return Key::P;
        case GLFW_KEY_Q: return Key::Q;
        case GLFW_KEY_R: return Key::R;
        case GLFW_KEY_S: return Key::S;
        case GLFW_KEY_T: return Key::T;
        case GLFW_KEY_U: return Key::U;
        case GLFW_KEY_V: return Key::V;
        case GLFW_KEY_W: return Key::W;
        case GLFW_KEY_X: return Key::X;
        case GLFW_KEY_Y: return Key::Y;
        case GLFW_KEY_Z: return Key::Z;
        case GLFW_KEY_LEFT_BRACKET: return Key::BRACKETLEFT;
        case GLFW_KEY_BACKSLASH: return Key::BACKSLASH;
        case GLFW_KEY_RIGHT_BRACKET: return Key::BRACKETRIGHT;
        case GLFW_KEY_GRAVE_ACCENT: return Key::QUOTELEFT;
        case GLFW_KEY_ESCAPE: return Key::ESCAPE;
        case GLFW_KEY_ENTER: return Key::ENTER;
        case GLFW_KEY_TAB: return Key::TAB;
        case GLFW_KEY_BACKSPACE: return Key::BACKSPACE;
        case GLFW_KEY_INSERT: return Key::INSERT;
        case GLFW_KEY_DELETE: return Key::KEY_DELETE;
        case GLFW_KEY_RIGHT: return Key::RIGHT;
        case GLFW_KEY_LEFT: return Key::LEFT;
        case GLFW_KEY_DOWN: return Key::DOWN;
        case GLFW_KEY_UP: return Key::UP;
        case GLFW_KEY_PAGE_UP: return Key::PAGEUP;
        case GLFW_KEY_PAGE_DOWN: return Key::PAGEDOWN;
        case GLFW_KEY_HOME: return Key::HOME;
        case GLFW_KEY_END: return Key::END;
        case GLFW_KEY_CAPS_LOCK: return Key::CAPSLOCK;
        case GLFW_KEY_SCROLL_LOCK: return Key::SCROLLLOCK;
        case GLFW_KEY_NUM_LOCK: return Key::NUMLOCK;
        case GLFW_KEY_PRINT_SCREEN: return Key::PRINT;
        case GLFW_KEY_PAUSE: return Key::PAUSE;
        case GLFW_KEY_F1: return Key::F1;
        case GLFW_KEY_F2: return Key::F2;
        case GLFW_KEY_F3: return Key::F3;
        case GLFW_KEY_F4: return Key::F4;
        case GLFW_KEY_F5: return Key::F5;
        case GLFW_KEY_F6: return Key::F6;
        case GLFW_KEY_F7: return Key::F7;
        case GLFW_KEY_F8: return Key::F8;
        case GLFW_KEY_F9: return Key::F9;
        case GLFW_KEY_F10: return Key::F10;
        case GLFW_KEY_F11: return Key::F11;
        case GLFW_KEY_F12: return Key::F12;
        case GLFW_KEY_KP_0: return Key::KP_0;
        case GLFW_KEY_KP_1: return Key::KP_1;
        case GLFW_KEY_KP_2: return Key::KP_2;
        case GLFW_KEY_KP_3: return Key::KP_3;
        case GLFW_KEY_KP_4: return Key::KP_4;
        case GLFW_KEY_KP_5: return Key::KP_5;
        case GLFW_KEY_KP_6: return Key::KP_6;
        case GLFW_KEY_KP_7: return Key::KP_7;
        case GLFW_KEY_KP_8: return Key::KP_8;
        case GLFW_KEY_KP_9: return Key::KP_9;
        case GLFW_KEY_KP_DECIMAL: return Key::KP_PERIOD;
        case GLFW_KEY_KP_DIVIDE: return Key::KP_DIVIDE;
        case GLFW_KEY_KP_MULTIPLY: return Key::KP_MULTIPLY;
        case GLFW_KEY_KP_SUBTRACT: return Key::KP_SUBTRACT;
        case GLFW_KEY_KP_ADD: return Key::KP_ADD;
        case GLFW_KEY_KP_ENTER: return Key::KP_ENTER;
        case GLFW_KEY_LEFT_SHIFT: return Key::SHIFT;
        case GLFW_KEY_LEFT_CONTROL: return Key::CTRL;
        case GLFW_KEY_LEFT_ALT: return Key::ALT;
        case GLFW_KEY_LEFT_SUPER: return Key::META;
        case GLFW_KEY_RIGHT_SHIFT: return Key::SHIFT;
        case GLFW_KEY_RIGHT_CONTROL: return Key::CTRL;
        case GLFW_KEY_RIGHT_ALT: return Key::ALT;
        case GLFW_KEY_RIGHT_SUPER: return Key::META;
        case GLFW_KEY_MENU: return Key::MENU;
        default: return Key::UNKNOWN;
    }
}
} // namespace star

#endif // STAR_KEY_HPP
