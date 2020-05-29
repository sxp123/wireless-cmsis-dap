#ifndef _DATA_H
#define _DATA_H
#include "stdint.h"
#include "DAP_config.h"
extern volatile uint8_t  USB_RequestFlag;       // Request  Buffer Usage Flag
extern volatile uint32_t USB_RequestIn;         // Request  Buffer In  Index
extern volatile uint32_t USB_RequestOut;        // Request  Buffer Out Index

extern volatile uint8_t  USB_ResponseIdle;      // Response Buffer Idle  Flag
extern volatile uint8_t  USB_ResponseFlag;      // Response Buffer Usage Flag
extern volatile uint32_t USB_ResponseIn;        // Response Buffer In  Index
extern volatile uint32_t USB_ResponseOut;       // Response Buffer Out Index

extern uint8_t  USB_Request [DAP_PACKET_COUNT][DAP_PACKET_SIZE];  // Request  Buffer
extern uint8_t  USB_Response[DAP_PACKET_COUNT][DAP_PACKET_SIZE];  // Response Buffer
#endif