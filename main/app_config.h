#ifndef APP_CONFIG_H
#define APP_CONFIG_H

// ----- Memory Config -----

#define MEM_MANAGER_ENABLED 1
#define MEMORY_MANAGER_SMALL_BLOCK_COUNT 4
#define MEMORY_MANAGER_SMALL_BLOCK_SIZE 32
#define MEMORY_MANAGER_MEDIUM_BLOCK_COUNT 4
#define MEMORY_MANAGER_MEDIUM_BLOCK_SIZE 256
#define MEMORY_MANAGER_LARGE_BLOCK_COUNT 1
#define MEMORY_MANAGER_LARGE_BLOCK_SIZE 1024

// ----- Crypto Config -----

#define NRF_CRYPTO_ENABLED 0

// ----- Soft Device Config -----

#define SOFTDEVICE_PRESENT 1
#define NRF_SDH_ENABLED 1
#define NRF_SDH_SOC_ENABLED 1
#define NRF_SDH_BLE_ENABLED 1
#define NRF_SDH_BLE_PERIPHERAL_LINK_COUNT 1
#define NRF_SDH_BLE_VS_UUID_COUNT 2
#define NRF_BLE_GATT_ENABLED 1
#define NRF_SDH_BLE_GATT_MAX_MTU_SIZE 251
#define NRF_SDH_BLE_GAP_DATA_LENGTH 251

// ----- FDS / Flash Config -----

#define FDS_ENABLED 1
#define FDS_BACKEND NRF_FSTORAGE_SD
#define NRF_FSTORAGE_ENABLED 1

// ----- Logging Config -----

#define NRF_LOG_ENABLED 1
#define NRF_LOG_DEFAULT_LEVEL 4
#define NRF_LOG_STR_PUSH_BUFFER_SIZE 4096
#define NRF_LOG_DEFERRED 0

#define NRF_LOG_BACKEND_RTT_ENABLED 1
#define NRF_LOG_BACKEND_UART_ENABLED 0

#if NRF_LOG_BACKEND_UART_ENABLED

#define NRF_LOG_BACKEND_UART_TX_PIN 6
#define NRF_LOG_BACKEND_UART_BAUDRATE 30801920
#define NRF_LOG_BACKEND_UART_TEMP_BUFFER_SIZE 64

#define UART_ENABLED 1
#define UART0_ENABLED 1
#define NRFX_UARTE_ENABLED 1
#define NRFX_UART_ENABLED 1
#define UART_LEGACY_SUPPORT 0

#endif // NRF_LOG_BACKEND_UART_ENABLED

#if NRF_LOG_BACKEND_RTT_ENABLED

#define SEGGER_RTT_CONFIG_BUFFER_SIZE_UP 2048
#define SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS 2
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN 16
#define SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS 2

// <0=> SKIP
// <1=> TRIM
// <2=> BLOCK_IF_FIFO_FULL
#define SEGGER_RTT_CONFIG_DEFAULT_MODE 1

#define NRF_LOG_BACKEND_RTT_TEMP_BUFFER_SIZE 64
#define NRF_LOG_BACKEND_RTT_TX_RETRY_DELAY_MS 1
#define NRF_LOG_BACKEND_RTT_TX_RETRY_CNT 3

#endif // NRF_LOG_BACKEND_RTT_ENABLED

// ----- Misc Config -----

#define NRF_CLOCK_ENABLED 1
#define NRF_FPRINTF_ENABLED 1
#define NRF_STRERROR_ENABLED 1
#define NRF_QUEUE_ENABLED 1
#define APP_TIMER_ENABLED 1
#define BUTTON_ENABLED 1
#define GPIOTE_ENABLED 1

#endif //APP_CONFIG_H

