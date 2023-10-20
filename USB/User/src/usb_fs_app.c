#include "usb_fs_app.h"

__ALIGN_BEGIN USB_OTG_CORE_HANDLE USB_OTG_dev __ALIGN_END;

void usb_customhid_open(void) {
    USBD_Init(&USB_OTG_dev, USB_OTG_FS_CORE_ID, &USR_desc, &USBD_CUSTOMHID_cb, &USR_cb);
}

void usb_customhid_close(void) {
    DCD_DevDisconnect(&USB_OTG_dev);
}

void usb_customhid_send(uint8_t* data, uint16_t len) {
    USBD_CUSTOM_HID_SendReport(&USB_OTG_dev, data, len);
}
