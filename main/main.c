#include <stdio.h>
#include <unistd.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
  vTaskDelay(pdMS_TO_TICKS(2000));

  for (int i = 1; i < 11; ++i)
  {
    printf("Start!\n");
    vTaskDelay(pdMS_TO_TICKS(500));
    printf("Delay Completed!\n");
  }
}