#include "spi.h"
#include "bnp.h"

void bnp::SPIManager::init() {
    Serial.print("spi: enabled SPI buses: ");

    #if SPI1_ENABLE
    Serial.print("SPI1 ");
    this->operator[](1)->begin();
    #endif
    
    #if SPI2_ENABLE
    Serial.print("SPI2 ");
    this->operator[](2)->begin();
    #endif

    #if SPI3_ENABLE
    Serial.print("SPI3 ");
    this->operator[](3)->begin();
    #endif
    Serial.println("");
}

SPIClass* bnp::SPIManager::operator[](int index) {
    SPIClass* instance = this->spi_buses[index-1];
    if (instance == nullptr) {
        bnp::panic(strcat("tried to use invalid SPI bus ", String(index).c_str()));
        return nullptr;
    }
    return instance;
}
