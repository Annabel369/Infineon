#ifndef VARIANT_H
#define VARIANT_H

#include <stdint.h>

// Definições de pinos baseadas nas barras de expansão da AURIX Lite Kit V2
#define NUM_DIGITAL_PINS     14
#define NUM_ANALOG_INPUTS    8
#define TOTAL_PINS           22

// Estrutura para representação das portas físicas do TriCore
typedef struct {
    uint32_t regAddr;
} PortGroup;

// Atributos dos pinos
#define PIN_ATTR_DIGITAL  (1 << 0)
#define PIN_ATTR_ANALOG   (1 << 1)
#define PIN_ATTR_PWM      (1 << 2)
#define PIN_ATTR_COM      (1 << 3)

typedef struct {
    PortGroup *pPort;
    uint32_t ulPin;
    uint32_t ulPinAttribute;
} PinDescription;

extern const PinDescription g_APinDescription[];

// Declarações das portas físicas identificadas na serigrafia da placa
extern PortGroup PORT_P00;
extern PortGroup PORT_P02;
extern PortGroup PORT_P10;
extern PortGroup PORT_P33;

#ifdef __cplusplus
extern "C" {
#endif
void initVariant(void);
#ifdef __cplusplus
}
#endif

#endif /* VARIANT_H */
