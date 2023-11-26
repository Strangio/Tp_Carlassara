#include <stdio.h>
#include "pico/stdlib.h"
#include "display.h"

bool repeating_timer_callback(struct repeating_timer *t) {
  int v1=0;
    for(v1;v1<=9;v1++){
      switch (v1){
        case 0:
    gpio_put_masked(SEGMENTS, CERO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 1:
    gpio_put_masked(SEGMENTS, UNO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 2:
    gpio_put_masked(SEGMENTS, DOS);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 3:
    gpio_put_masked(SEGMENTS, TRES);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 4:
    gpio_put_masked(SEGMENTS, CUATRO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 5:
    gpio_put_masked(SEGMENTS, CINCO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 6:
    gpio_put_masked(SEGMENTS, SEIS);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 7:
    gpio_put_masked(SEGMENTS, SIETE);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 8:
    gpio_put_masked(SEGMENTS, OCHO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 9:
    gpio_put_masked(SEGMENTS, NUEVE);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
      }
    }
    return true;
}

/**
* @brief Programa principal
*/
int main() {
  stdio_init_all();
  display_init();
  gpio_put_masked(DIGITS, DIGITS);
  struct repeating_timer timer;
   add_repeating_timer_ms(0, repeating_timer_callback, NULL, &timer);
  while (true) {
  }
}