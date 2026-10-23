# Infineon AURIX TriCore & ESP32 Boards for Arduino

<img width="1331" height="582" alt="image" src="https://github.com/user-attachments/assets/81b5d109-c4b5-4cdd-81c2-0b704698d7a9" />

    /home/astral/.arduino15/packages/Infineon
<img width="1521" height="737" alt="image" src="https://github.com/user-attachments/assets/e77b83ca-cdfd-40aa-bbab-43a81a3defb1" />

<img width="1521" height="737" alt="image" src="https://github.com/user-attachments/assets/2e4a0284-19bb-4517-9f1b-159c1f98f35f" />


<img width="1096" height="177" alt="image" src="https://github.com/user-attachments/assets/efd4491e-35fd-462a-85e2-6317e4fb7603" />

sha256sum Infineon-1.0.1.tar.gz

stat -c%s Infineon-1.0.1.tar.gz


    https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json
    https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json


# 1. Download the Linux toolchain (~436 MB)
    wget -O /tmp/tricore-gcc.tar.gz \
    https://github.com/NoMore201/tricore-gcc-toolchain/releases/download/13.4.1/tricore-gcc-13.4.1-linux.tar.gz
# 2. Create the target directory
    mkdir -p ~/.arduino15/packages/infineon/tools/tricore-gcc/1.0.0/
# 3. Extract into it
    tar -xzf /tmp/tricore-gcc.tar.gz -C ~/.arduino15/packages/infineon/tools/tricore-gcc/1.0.0/ --strip-components=1
# 4. Verify
    ~/.arduino15/packages/infineon/tools/tricore-gcc/1.0.0/bin/tricore-elf-g++ --version
# 5. Clean up
    rm /tmp/tricore-gcc.tar.gz


    Correções aplicadas
    1. Toolchain instalado
    Baixei e extraí o TriCore GCC 13.4.1 (open-source, NoMore201) em: ~/.arduino15/packages/Infineon/tools/tricore-gcc/1.0.0/bin/
    2. Flag do compilador corrigida no 
    platform.txt
    ❌ Antes: -mmcu=tc37x (flag do HighTec proprietário — não reconhecida)
    ✅ Depois: -mcpu=tc39xx (flag correta para o toolchain open-source, compatível com TC375)

    Support for boards based on the **Infineon AURIX™ TriCore™** architecture (such as the **ShieldBuddy TC375** and compatible development kits) alongside **ESP32** devices in the Arduino IDE.
    ✨ astral@debian:~/Downloads$ ~/.arduino15/packages/infineon_tricore/tools/tricore-gcc/1.0.0/bin/tricore-elf-g++ --version
    tricore-elf-g++ (tricore-gcc-toolchain) 13.4.1 20260422
    Copyright (C) 2023 Free Software Foundation, Inc.
    This is free software; see the source for copying conditions.  There is NO
    warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

    ---

<img width="398" height="250" alt="image" src="https://github.com/user-attachments/assets/19395c9e-1d82-4d1c-ba6d-f5a26254397a" />


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
     Separate multiple URLs with a comma `,`:
     ```text
     [https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json](https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json), [https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json](https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json)
     ```

4. Click **OK** to save the preferences.
5. Open the **Boards Manager** by navigating to **Tools > Board > Boards Manager...** (or click the Boards Manager icon on the left sidebar).
6. Search for **`Infineon`** or **`AURIX`** and click **Install**.

---
---

# [BR] Placas Infineon AURIX TriCore para Arduino

Suporte para placas baseadas na arquitetura **Infineon AURIX™ TriCore™** (como a **ShieldBuddy TC375** e kits de desenvolvimento compatíveis) e dispositivos **ESP32** na Arduino IDE.

---

## [BR] Instalação via Gerenciador de Placas (Boards Manager)

Para adicionar o suporte a estas placas no seu Arduino IDE, siga os passos abaixo:

1. Abra a **Arduino IDE**.
2. Vá em **Arquivo > Preferências** (File > Preferences).
3. No campo **URLs Adicionais de Gerenciadores de Placas**, cole o link de índice:

   * **Apenas para placas Infineon AURIX:**
     ```text
     [https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json](https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json)
     ```

   * **Para instalar AMBAS (ESP32 e Infineon AURIX):**
     Separe os dois links por uma vírgula `,`:
     ```text
     [https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json](https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json), [https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json](https://raw.githubusercontent.com/Annabel369/Infineon/main/package.json)
     ```

4. Clique em **OK** para salvar.
5. Abra o **Gerenciador de Placas** em **Ferramentas > Placa > Gerenciador de Placas...** (ou clique no ícone do Gerenciador na barra lateral esquerda).
6. Pesquise por **`Infineon`** ou **`AURIX`** e clique em **Instalar**.

<p center="align">
  <img width="310" height="631" alt="Gerenciador de Placas Infineon" src="https://github.com/user-attachments/assets/922ee816-6729-4ad6-9c62-a895b6ed0ada" />
  <img width="310" height="631" alt="Instalação do pacote Infineon AURIX" src="https://github.com/user-attachments/assets/8cbc4a34-6f56-4e62-9c5d-5cbea03a783c" />
</p>

---

## Hardware Suportado / Supported Hardware

* **Infineon Core:** ShieldBuddy TC375 (Arquitetura AURIX™ TC375 TriCore™)
* **ESP32 Core:** Módulos das séries ESP32, ESP32-S, ESP32-C e ESP32-H

---

## Licença / License

Distribuído sob licença aberta para desenvolvimento de sistemas embarcados.
