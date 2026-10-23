#include "Arduino.h"
#include "variant.h"

/*
 * Instanciação das portas físicas baseadas na serigrafia do kit AURIX V2
 */
PortGroup PORT_P00 = { 0xF0031000 }; // Exemplo base de endereço de registrador P00
PortGroup PORT_P02 = { 0xF0031200 };
PortGroup PORT_P10 = { 0xF0031A00 };
PortGroup PORT_P33 = { 0xF0034100 };

/*
 * Mapeamento correspondente aos pinos digitais e analógicos 
 * expostos nos cabeçalhos da placa AURIX Lite Kit V2.
 */
const PinDescription g_APinDescription[TOTAL_PINS] = 
{
  // Pinos Digitais (Mapeados para portas reais visíveis na placa)
  { &PORT_P00, 0, (PIN_ATTR_DIGITAL) },                   // D0 (P00.0)
  { &PORT_P00, 1, (PIN_ATTR_DIGITAL) },                   // D1 (P00.1)
  { &PORT_P00.regAddr, 2, (PIN_ATTR_DIGITAL) },           // D2 (P00.2)
  { &PORT_P00, 3, (PIN_ATTR_DIGITAL) },                   // D3 (P00.3)
  { &PORT_P00, 4, (PIN_ATTR_DIGITAL) },                   // D4 (P00.4)
  { &PORT_P00, 5, (PIN_ATTR_DIGITAL | PIN_ATTR_COM) },    // D5 (P00.5 - Botão 2)
  { &PORT_P00, 6, (PIN_ATTR_DIGITAL) },                   // D6 (P00.6)
  { &PORT_P00, 7, (PIN_ATTR_DIGITAL | PIN_ATTR_COM) },    // D7 (P00.7 - Botão 1)
  { &PORT_P10, 3, (PIN_ATTR_DIGITAL) },                   // D8 (P10.3)
  { &PORT_P10, 4, (PIN_ATTR_DIGITAL) },                   // D9 (P10.4)
  { &PORT_P02, 0, (PIN_ATTR_DIGITAL) },                   // D10 (P02.0 - SPI/CS)
  { &PORT_P02, 1, (PIN_ATTR_DIGITAL) },                   // D11 (P02.1 - MOSI)
  { &PORT_P02, 2, (PIN_ATTR_DIGITAL) },                   // D12 (P02.2 - MISO)
  { &PORT_P02, 3, (PIN_ATTR_DIGITAL) },                   // D13 (P02.3 - SCK / LED)

  // Pinos Analógicos (AN0 a AN7 conforme serigrafia do kit)
  { &PORT_P33, 0, (PIN_ATTR_ANALOG) },                    // A0 (AN0)
  { &PORT_P33, 1, (PIN_ATTR_ANALOG) },                    // A1 (AN1)
  { &PORT_P33, 2, (PIN_ATTR_ANALOG) },                    // A2 (AN2)
  { &PORT_P33, 3, (PIN_ATTR_ANALOG) },                    // A3 (AN3)
  { &PORT_P33, 4, (PIN_ATTR_ANALOG) },                    // A4 (AN4)
  { &PORT_P33, 5, (PIN_ATTR_ANALOG) },                    // A5 (AN5)
  { &PORT_P33, 6, (PIN_ATTR_ANALOG) },                    // A6 (AN6)
  { &PORT_P33, 7, (PIN_ATTR_ANALOG) }                     // A7 (AN7)
};

/*
 * Rotina de inicialização de hardware executada no arranque do core
 */
void initVariant()
{
  // Configurações iniciais específicas para os pinos e relógios do TC375
}
