#define MICROPY_HW_BOARD_NAME               "LYW_WATCH_S3"
#define MICROPY_HW_MCU_NAME                 "ESP32S3"

// 启用 UART REPL (配合 CP2104)
#define MICROPY_HW_ENABLE_UART_REPL         (1)

// 彻底禁用底层的 USB 和 JTAG
#define MICROPY_HW_ESP_USB_SERIAL_JTAG      (0)
#define MICROPY_HW_ENABLE_USBDEV            (0)
#define MICROPY_HW_USB_CDC                  (0)
#define MICROPY_HW_USB_MSC                  (0)
