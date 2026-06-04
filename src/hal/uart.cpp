#include "uart.h"
#include "bnp.h"

void bnp::UARTManager::init() {
    // UARTs will be initialized by user code/libraries

    Serial.print("uart: enabled UART buses: ");

    #if UART1_ENABLE
    Serial.print("UART1 ");
    #endif

    #if UART2_ENABLE
    Serial.print("UART2 ");
    #endif
    
    #if UART3_ENABLE
    Serial.print("UART3 ");
    #endif

    #if UART4_ENABLE
    Serial.print("UART4 ");
    #endif

    #if UART5_ENABLE
    Serial.print("UART5 ");
    #endif

    #if UART6_ENABLE
    Serial.print("UART6 ");
    #endif

    Serial.println("");
}

HardwareSerial* bnp::UARTManager::operator[](int index) {
    HardwareSerial* instance = this->uart_instances[index-1];
    if (instance == nullptr) {
        bnp::panic(strcat("tried to use invalid UART bus ", String(index).c_str()));
        return nullptr;
    }
    return instance;
}