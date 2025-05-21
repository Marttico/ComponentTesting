
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led_effects_driver.hpp"

#define TAG "Main"

extern "C" void app_main(void)
{
    ESP_LOGI(TAG,"HELLO WORLD!!");
    init_led_effects_driver(21,7,25); 

    while(true){
        vTaskDelay( 1000 / portTICK_PERIOD_MS);
        trigger_animation();
    }
}
