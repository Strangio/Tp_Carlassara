#include <stdio.h>
#include "pico/stdlib.h"

#include "display.h"

/**
* @brief Programa principal
*/
int main() {
  stdio_init_all();
  display_init();

  while (true) {

    gpio_put_masked(DIGITS, DIGITS);
    gpio_put_masked(SEGMENTS, CERO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, UNO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, DOS);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, TRES);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, CUATRO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, CINCO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);


    gpio_put_masked(SEGMENTS, SEIS);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, SIETE);
    gpio_put(DIG_2, false);
    sleep_ms(1000);


    gpio_put_masked(SEGMENTS, OCHO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);

    gpio_put_masked(SEGMENTS, NUEVE);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
  }
}