#ifndef GENERATIONTWO_USB_FS_APP_H
#define GENERATIONTWO_USB_FS_APP_H

#include <stdint.h>
#include "usbd_customhid_core.h"
#include "usbd_usr.h"
#include "usbd_desc.h"

extern __ALIGN_BEGIN USB_OTG_CORE_HANDLE USB_OTG_dev __ALIGN_END;

void usb_customhid_open(void);
void usb_customhid_close(void);
void usb_customhid_send(uint8_t* data, uint16_t len);


#endif //GENERATIONTWO_USB_FS_APP_H
