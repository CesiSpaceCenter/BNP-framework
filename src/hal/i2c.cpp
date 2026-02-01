#include "i2c.h"
#include "board.h"
#include <Wire.h>

#if I2C1_ENABLE
extern TwoWire I2C_1(PIN_I2C1_SDA, PIN_I2C1_SCL);
#endif

#if I2C2_ENABLE
extern TwoWire I2C_2(PIN_I2C2_SDA, PIN_I2C2_SCL);
#endif

#if I2C3_ENABLE
extern TwoWire I2C_3(PIN_I2C3_SDA, PIN_I2C3_SCL);
#endif

void bnp_init_i2c() {
    #if I2C1_ENABLE
    Serial.println("init I2C1");
    I2C_1.begin();
    #endif
    
    #if I2C2_ENABLE
    Serial.println("init I2C2");
    I2C_2.begin();
    #endif

    #if I2C3_ENABLE
    Serial.println("init I2C3");
    I2C_3.begin();
    #endif
}