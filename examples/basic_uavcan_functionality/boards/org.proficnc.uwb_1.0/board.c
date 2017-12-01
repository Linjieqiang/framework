#include <hal.h>

void boardInit(void) {
    palSetLineMode(BOARD_PAL_LINE_SPI3_SCK, PAL_MODE_ALTERNATE(6) | PAL_STM32_OSPEED_HIGHEST | PAL_STM32_PUPDR_PULLDOWN); // SPI3 SCK
    palSetLineMode(BOARD_PAL_LINE_SPI3_MISO, PAL_MODE_ALTERNATE(6) | PAL_STM32_OSPEED_HIGHEST); // SPI3 MISO
    palSetLineMode(BOARD_PAL_LINE_SPI3_MOSI, PAL_MODE_ALTERNATE(6) | PAL_STM32_OSPEED_HIGHEST); // SPI3 MOSI
    palSetLineMode(BOARD_PAL_LINE_SPI3_UWB_CS, PAL_MODE_OUTPUT_PUSHPULL | PAL_STM32_OSPEED_HIGHEST); // UWB CS
    palSetLineMode(BOARD_PAL_LINE_CAN_RX, PAL_MODE_ALTERNATE(9) | PAL_STM32_OSPEED_HIGHEST);
    palSetLineMode(BOARD_PAL_LINE_CAN_TX, PAL_MODE_ALTERNATE(9) | PAL_STM32_OSPEED_HIGHEST);
}