#ifndef BNP_BNP_H
#define BNP_BNP_H

#include "hal/i2c.h"
#include "hal/spi.h"
#include "hal/uart.h"

namespace bnp {
    inline I2CManager i2c;
    inline SPIManager spi;
    inline UARTManager uart;

    void bnp_panic(const char*);
    void bnp_init();
};
#endif