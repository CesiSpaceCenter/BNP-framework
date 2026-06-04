#ifndef BNP_UART_H
#define BNP_UART_H

#include "board.h"
#include <HardwareSerial.h>

namespace bnp {
    class UARTManager {
    public:
        void init();
        HardwareSerial* operator[](int index);

    private:
        HardwareSerial* uart_instances[6] = {
            #if UART1_ENABLE
            new HardwareSerial(PIN_UART1_TX, PIN_UART1_RX),
            #else
            nullptr,
            #endif

            #if UART2_ENABLE
            new HardwareSerial(PIN_UART2_TX, PIN_UART2_RX),
            #else
            nullptr,
            #endif
            
            #if UART3_ENABLE
            new HardwareSerial(PIN_UART3_TX, PIN_UART3_RX),
            #else
            nullptr,
            #endif

            #if UART4_ENABLE
            new HardwareSerial(PIN_UART5_TX, PIN_UART6_RX),
            #else
            nullptr,
            #endif

            #if UART5_ENABLE
            new HardwareSerial(PIN_UART5_TX, PIN_UART5_RX),
            #else
            nullptr,
            #endif

            #if UART6_ENABLE
            new HardwareSerial(PIN_UART6_TX, PIN_UART6_RX),
            #else
            nullptr,
            #endif
        };
    };
};

#endif