/**
  ******************************************************************************
  * @file    usbd_usr.c
  * @author  MCD Application Team
  * @version V1.2.1
  * @date    17-March-2018
  * @brief   This file includes the user application layer
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2015 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                      <http://www.st.com/SLA0044>
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------ */
#include "usbd_usr.h"

/** @addtogroup STM32_USB_OTG_DEVICE_LIBRARY
* @{
*/

/** @defgroup USBD_USR
* @brief    This file includes the user application layer
* @{
*/

/** @defgroup USBD_USR_Private_TypesDefinitions
* @{
*/
/**
* @}
*/


/** @defgroup USBD_USR_Private_Defines
* @{
*/
/**
* @}
*/


/** @defgroup USBD_USR_Private_Macros
* @{
*/
/**
* @}
*/


/** @defgroup USBD_USR_Private_Variables
* @{
*/

USBD_Usr_cb_TypeDef USR_cb = {
  USBD_USR_Init,
  USBD_USR_DeviceReset,
  USBD_USR_DeviceConfigured,
  USBD_USR_DeviceSuspended,
  USBD_USR_DeviceResumed,

  USBD_USR_DeviceConnected,
  USBD_USR_DeviceDisconnected,
};

uint32_t ADC_ConvertedValueX = 0;
uint32_t ADC_ConvertedValueX_1 = 0;

/**
* @}
*/

/** @defgroup USBD_USR_Private_Constants
* @{
*/

/**
* @}
*/



/** @defgroup USBD_USR_Private_FunctionPrototypes
* @{
*/
static void ADC_Configuration(void);
/**
* @}
*/


/** @defgroup USBD_USR_Private_Functions
* @{
*/

#define USER_INFORMATION1      (uint8_t*)"[Key]:switch On/Off Button[ReportID 5] "
#define USER_INFORMATION2      (uint8_t*)"[Leds]:switch on/off Leds [ReportID 1:4]"
#define USER_INFORMATION3      (uint8_t*)"[Potentiometer]:[ReportID 7]"

/**
* @brief  USBD_USR_Init
*         Displays the message on // LCD for host lib initialization
* @param  None
* @retval None
*/
void USBD_USR_Init(void)
{


}

/**
* @brief  USBD_USR_DeviceReset
*         Displays the message on // LCD on device Reset Event
* @param  speed : device speed
* @retval None
*/
void USBD_USR_DeviceReset(uint8_t speed)
{
  switch (speed)
  {
  case USB_OTG_SPEED_HIGH:
    // LCD_LOG_SetFooter((uint8_t *) "     USB Device Library V1.2.1 [HS]");
    break;

  case USB_OTG_SPEED_FULL:
    // LCD_LOG_SetFooter((uint8_t *) "     USB Device Library V1.2.1 [FS]");
    break;
  default: {

  }
    // LCD_LOG_SetFooter((uint8_t *) "     USB Device Library V1.2.1 [??]");

  }
}


/**
* @brief  USBD_USR_DeviceConfigured
*         Displays the message on // LCD on device configuration Event
* @param  None
* @retval Staus
*/
void USBD_USR_DeviceConfigured(void)
{
  // LCD_UsrLog("> CUSTOMHID Interface started.\n");

}


/**
* @brief  USBD_USR_DeviceConnected
*         Displays the message on // LCD on device connection Event
* @param  None
* @retval Status
*/
void USBD_USR_DeviceConnected(void)
{
  // LCD_UsrLog("> USB Device Connected.\n");
}


/**
* @brief  USBD_USR_DeviceDisonnected
*         Displays the message on // LCD on device disconnection Event
* @param  None
* @retval Status
*/
void USBD_USR_DeviceDisconnected(void)
{
  // LCD_UsrLog("> USB Device Disconnected.\n");
}

/**
* @brief  USBD_USR_DeviceSuspended
*         Displays the message on // LCD on device suspend Event
* @param  None
* @retval None
*/
void USBD_USR_DeviceSuspended(void)
{
  // LCD_UsrLog("> USB Device in Suspend Mode.\n");
  /* Users can do their application actions here for the USB-Reset */
}


/**
* @brief  USBD_USR_DeviceResumed
*         Displays the message on // LCD on device resume Event
* @param  None
* @retval None
*/
void USBD_USR_DeviceResumed(void)
{
  // LCD_UsrLog("> USB Device in Idle Mode.\n");
  /* Users can do their application actions here for the USB-Reset */
}

/**
  * @brief  ADC3 channel07 with DMA configuration
  * @note   This function Configure the ADC peripheral
            1) Enable peripheral clocks
            2) DMA2_Stream0 channel2 configuration
            3) Configure ADC Channel7 pin as analog input
            4) Configure ADC3 Channel7
  * @param  None
  * @retval None
  */


/**
* @}
*/

/**
* @}
*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
