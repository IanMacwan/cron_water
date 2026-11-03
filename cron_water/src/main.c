#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    while (1) {
        printf("i'm sorry, dave. i'm afraid i can't do that\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
