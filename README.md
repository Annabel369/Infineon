# Infineon AURIX TriCore & ESP32 Boards for Arduino

Support for boards based on the **Infineon AURIX™ TriCore™** architecture (such as the **ShieldBuddy TC375** and compatible development kits) alongside **ESP32** devices in the Arduino IDE.

---

## Installation via Boards Manager

To add support for Infineon AURIX and ESP32 boards in your Arduino IDE, follow these steps:

1. Open the **Arduino IDE**.
2. Go to **File > Preferences** (or press `Ctrl + ,`).
3. In the **Additional Boards Manager URLs** field, add the index URL(s):

   * **To install Infineon AURIX Boards only:**
     ```text
     [https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json](https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json)
     ```

   * **To install BOTH ESP32 and Infineon AURIX Boards:**
     Separate multiple URLs with a comma `,` (or add them on new lines in the multi-URL window):
     ```text
     [https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json](https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json), [https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json](https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json)
     ```

4. Click **OK** to save the preferences.
5. Open the **Boards Manager** by navigating to **Tools > Board > Boards Manager...** (or click the Boards Manager icon on the left sidebar).
6. Search for:
   * **`Infineon`** or **`AURIX`** and click **Install** for *Infineon AURIX TriCore Boards*.
   * **`esp32`** and click **Install** for *esp32 by Espressif Systems*.

---

## Supported Hardware

* **Infineon Core:** ShieldBuddy TC375 (AURIX™ TC375 TriCore™ architecture)
* **ESP32 Core:** Standard ESP32, ESP32-S, ESP32-C, and ESP32-H series modules

---

## Repository Structure

* `package.json` — Custom index file for the Infineon AURIX core release.
* `variants/shieldbuddy_tc375/` — Physical pin mappings and hardware descriptors (`variant.h` / `variant.cpp`).
* `boards.txt` & `platform.txt` — Core hardware parameters and compiler toolchain configurations.

---

## License

Distributed under the open-source license for embedded systems development.

