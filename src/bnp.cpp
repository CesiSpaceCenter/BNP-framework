#include "bnp.h"
#include "hal/board.h"
#include "hal/spi.h"
#include "hal/i2c.h"
#include "hal/uart.h"
#include <Arduino.h>

void bnp_panic(const char* message) {
    Serial.println("---- PANIC -----");
    Serial.println(message);
    digitalWrite(PIN_LED, LOW);
    while (true);
}

void bnp_init() {
    delay(4000);
    Serial.begin(9600);
    Serial.println("bnp init");
    bnp_init_spi();
    bnp_init_i2c();
    bnp_init_uart();
}