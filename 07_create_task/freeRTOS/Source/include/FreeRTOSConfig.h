#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#define configUSE_16_BIT_TICKS		              0
#define configMAX_TASK_NAME_LEN		            ( 16 )
#define configSUPPORT_STATIC_ALLOCATION           1
#define configMAX_PRIORITIES		            ( 5 )

#define configKERNEL_INTERRUPT_PRIORITY 		255   /* The high four bits are valid, equal to 0xF0 or 15. */
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 	191   /* The high four bits are valid, equal to 0xB0 or 11. */

#define xPortPendSVHandler   PendSV_Handler
#define xPortSysTickHandler  SysTick_Handler
#define vPortSVCHandler      SVC_Handler

#endif /* FREERTOS_CONFIG_H */
