#define MICROPY_HW_BOARD_NAME               "LYW_WATCH_S3"
#define MICROPY_HW_MCU_NAME                 "ESP32S3"

// === 关键：禁用 USB，释放 GPIO 19/20 ===
#define MICROPY_HW_USB_CDC                  (0)
#define MICROPY_HW_USB_MSC                  (0)
#define MICROPY_HW_ENABLE_UART_REPL         (1) // 强制用 UART0

// === 关键：启用 Octal SPIRAM (R8) ===
#define MICROPY_HW_SPIRAM_MODE              (SPIRAM_MODE_OCT)
#define MICROPY_HW_SPIRAM_SPEED             (80000000) // 80MHz

// === 关键：Flash 配置 ===
// 32MB = 32 * 1024 * 1024
// 注意：MicroPython 的 Flash 大小通常由分区表决定，但这里声明一下
#define MICROPY_HW_FLASH_MODE               (FLASH_MODE_QIO) // 或 OCT, 看您Flash型号
// W25Q256 通常是 QSPI (QIO)
