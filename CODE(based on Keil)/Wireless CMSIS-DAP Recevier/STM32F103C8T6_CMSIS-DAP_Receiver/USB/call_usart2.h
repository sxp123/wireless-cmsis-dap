#ifndef CALL_USART2_H
#define CALL_USART2_H
	#include <stdint.h>
  extern void UART2_Send(uint8_t *data,uint32_t len);
	extern void UART2_Receive(uint8_t *data,uint32_t len);
	extern uint8_t UART2_TxStatus(void);
#endif