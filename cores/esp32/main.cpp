#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_task_wdt.h"
#include "Arduino.h"

// TaskHandle_t loopTaskHandle = NULL;

#if CONFIG_AUTOSTART_ARDUINO

// bool loopTaskWDTEnabled;

// void loopTask(void *pvParameters)
// {
//     setup();
//     // for (;;)
//     // {
//     //     if (loopTaskWDTEnabled)
//     //     {
//     //         esp_task_wdt_reset();
//     //     }
//     //     loop();
//     //     if (serialEventRun)
//     //         serialEventRun();
//     // }
// }

extern "C" void app_main()
{
    // loopTaskWDTEnabled = false;
    initArduino();
    setup();
    // xTaskCreateUniversal(loopTask, "loopTask", 1024 * 4, NULL, 1, &loopTaskHandle, CONFIG_ARDUINO_RUNNING_CORE);
}

#endif
