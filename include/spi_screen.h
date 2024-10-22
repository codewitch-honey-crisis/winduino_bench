#ifndef SPI_SCREEN_H
#define SPI_SCREEN_H

#define SPI_SCREEN_PIN_MOSI 0
#define SPI_SCREEN_PIN_MISO 1
#define SPI_SCREEN_PIN_CLK 2
#define SPI_SCREEN_PIN_CS 3
#define SPI_SCREEN_PIN_DC 4
#define SPI_SCREEN_PIN_RST 5
#define SPI_SCREEN_PIN_BKL 6

#define SPI_SCREEN_PROP_RESOLUTION 0
#define SPI_SCREEN_PROP_BKL_LOW 1
#define SPI_SCREEN_PROP_COLSET 2
#define SPI_SCREEN_PROP_ROWSET 3
#define SPI_SCREEN_PROP_WRITE 4
#define SPI_SCREEN_PROP_READ 5
#define SPI_SCREEN_PROP_OFFSETS 6

#define LIB_SPI_SCREEN ".\\winduino_hardware\\spi_screen\\winduino_spi_screen.dll"
#endif // SCREEN_H