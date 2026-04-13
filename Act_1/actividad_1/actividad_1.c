#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  cyw43_arch_init();

  int E = 0;
  // Mensaje por USB
    printf("\nHola mundo!\n");

  while (true) {
    // Prendo LED
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    E=E+1;
    // Mensaje por USB
    printf("LED prendido\n");
    // Demora
    sleep_ms(500);
    printf("encendiddas %d",E);
    // Demora
    sleep_ms(500);
    // Apago LED
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
    // Mensaje por USB
    printf("LED apagado\n");
    // Demora
    sleep_ms(500);
    printf("encendidas %d",E);
    // Demora
    sleep_ms(500);
  }
  return 0;
}
