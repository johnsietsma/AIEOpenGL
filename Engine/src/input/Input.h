#pragma once

class Input
{
public:
    enum class Action
    {
        Press,
        Release,
        None
    };

    enum class MouseButton
    {
        Left,
        Middle,
        Right,
        None,
        Count
    };

    enum class Key
    {
        Backspace,
        Tab,
        Enter,
        Pause,
        CapsLock,
        Escape,
        Space,
        PageUp,
        PageDown,
        End,
        Home,
        Left,
        Up,
        Right,
        Down,
        Print,
        PrintScreen,
        Insert,
        Delete,
        Zero,
        One,
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        A,
        B,
        C,
        D,
        E,
        F,
        G,
        H,
        I,
        J,
        K,
        L,
        M,
        N,
        O,
        P,
        Q,
        R,
        S,
        T,
        U,
        V,
        W,
        X,
        Y,
        Z,
        NumPad0,
        NumPad1,
        NumPad2,
        NumPad3,
        NumPad4,
        NumPad5,
        NumPad6,
        NumPad7,
        NumPad8,
        NumPad9,
        Multiply,
        Add,
        Seperator,
        Subtract,
        Decimal,
        Divide,
        F1,
        F2,
        F3,
        F4,
        F5,
        F6,
        F7,
        F8,
        F9,
        F10,
        F11,
        F12,
        F13,
        F14,
        F15,
        F16,
        F17,
        F18,
        F19,
        F20,
        F21,
        F22,
        F23,
        F24,
        Numlock,
        ScrollLock,
        LeftShift,
        RightShift,
        LeftControl,
        RightContol,
        Menu,
        None,
        Count
    };
};