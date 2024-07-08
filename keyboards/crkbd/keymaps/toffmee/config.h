#pragma once

// Split keyboard settings
#define MASTER_LEFT  // Or MASTER_RIGHT, depending on which side you want as master

// TRS pin configuration
#define SPLIT_USB_DETECT           // Detect USB connection to determine master
#define SPLIT_USB_TIMEOUT 2000     // Timeout for USB detection
#define SPLIT_USB_TIMEOUT_POLL 10  // Poll interval for USB detection

// RP2040 specific configurations
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
