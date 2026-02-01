#include "spi.h"
#include "board.h"
#include <SPI.h>

#if SPI1_ENABLE
extern SPIClass SPI_1(PIN_SPI1_MOSI, PIN_SPI1_MISO, PIN_SPI1_SCK);
#endif

#if SPI2_ENABLE
extern SPIClass SPI_2(PIN_SPI2_MOSI, PIN_SPI2_MISO, PIN_SPI2_SCK);
#endif

#if SPI3_ENABLE
extern SPIClass SPI_3(PIN_SPI3_MOSI, PIN_SPI3_MISO, PIN_SPI3_SCK);
#endif

void bnp_init_spi() {
    #if SPI1_ENABLE
    Serial.println("init SPI1");
    SPI_1.begin();
    #endif
    
    #if SPI2_ENABLE
    Serial.println("init SPI2");
    SPI_2.begin();
    #endif

    #if SPI3_ENABLE
    Serial.println("init SPI3");
    SPI_3.begin();
    #endif
}