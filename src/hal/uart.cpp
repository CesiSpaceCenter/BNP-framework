#include "uart.h"
#include "board.h"
#include <HardwareSerial.h>

#if UART1_ENABLE
extern HardwareSerial UART_1(PIN_UART1_RX, PIN_UART1_TX);
#endif

#if UART2_ENABLE
extern HardwareSerial UART_2(PIN_UART2_RX, PIN_UART2_TX);
#endif

#if UART3_ENABLE
extern HardwareSerial UART_3(PIN_UART3_RX, PIN_UART3_TX);
#endif

#if UART4_ENABLE
extern HardwareSerial UART_4(PIN_UART4_RX, PIN_UART4_TX);
#endif

#if UART5_ENABLE
extern HardwareSerial UART_5(PIN_UART5_RX, PIN_UART5_TX);
#endif

#if UART6_ENABLE
extern HardwareSerial UART_6(PIN_UART6_RX, PIN_UART6_TX);
#endif

void bnp_init_uart() {
    // UARTs will be initialized by libraries/drivers
}