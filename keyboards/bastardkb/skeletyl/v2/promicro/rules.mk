# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

AUDIO_SUPPORTED = no        # Audio is not supported
RGB_MATRIX_SUPPORTED = no  # RGB matrix is supported and enabled by default
RGBLIGHT_SUPPORTED = no    # RGB underglow is supported, but not enabled by default
RGB_MATRIX_ENABLE = no     # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)


POINTING_DEVICE_ENABLE = yes # Enable trackball
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_SHARED_EP = no # Unify multiple HID interfaces into a single Endpoint


SPLIT_KEYBOARD = yes
LAYOUTS = split_3x5_3
