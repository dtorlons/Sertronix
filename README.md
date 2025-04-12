# 🔌 Serial to Centronics Bridge

This project turns an Arduino into a bridge between a **serial input** (UART) and a **Centronics-compatible parallel printer** 🖨️ — such as the legendary Epson FX-1050.

It allows you to send characters to a vintage dot-matrix printer using only a serial connection. Perfect for retro computing projects, embedded systems, or giving new life to classic hardware. 🕰️✨

---

## 📦 Features

- 🔄 Converts serial input to Centronics output
- 🧠 Modular code (`Printer` class in `Lib.h`)
- 🕹️ Simple serial interface (9600 baud, 8N1)
- 📡 Handles Centronics handshaking (`STROBE`, `BUSY`, `ACK`)
- ⚙️ Designed for real-time control of old printers

---

## 🧰 Hardware Requirements

- ✅ Arduino Uno / Nano / Mega (or compatible board)
- ✅ Centronics-compatible printer (e.g., Epson FX-1050)
- ✅ Basic wiring to connect Arduino digital pins to the printer's Centronics port (DB25)

---

## ⚙️ Wiring Example

| Centronics Pin | Signal Name | Arduino Pin |
|----------------|-------------|-------------|
| 1              | STROBE      | D2          |
| 10             | ACK         | D3 (INT1)   |
| 11             | BUSY        | D4          |
| 2–9            | Data 0–7    | D5–D12      |
| 18–25          | GND         | GND         |

> 📌 Modify pin assignments in `Lib.h` if needed.

---

## 🚀 How to Use

1. 🔌 Connect your Arduino to the printer using the wiring guide above.
2. 🧠 Upload the firmware via the Arduino IDE.
3. 🖥️ Send characters over serial (USB or UART). They’ll be printed in real time!
4. 🧪 You can use the Arduino Serial Monitor or your own serial source (e.g., PC, Raspberry Pi, another microcontroller).

---

## 🧪 Example Output

When you send:

Hello World!

Your dot matrix printer will happily rattle and print:

Hello World!



🥹 It’s beautiful.

---

## 🛠️ To Do

- [ ] Support for configurable baud rate
- [ ] Add optional buffering
- [ ] Support form feed / control codes
- [ ] Hardware flow control (RTS/CTS)

---

## 📜 License

MIT License – do whatever you want, but a mention is appreciated 😊

---

## 🤝 Contributions

Feel free to fork, improve, or open an issue! This project is built for nerds, by nerds 🤓.

---

## 🔗 Related Projects

If you're building a GUI or PC interface (e.g., Java frontend), consider linking it here in the future.

---

Made with ❤️ for retro printers.

