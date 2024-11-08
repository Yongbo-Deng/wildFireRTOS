#include "list.h"
#include "FreeRTOS.h"

/*  Global variable */
portCHAR flag1;
portCHAR flag2;


/*  Define task stack   */
#define TASK1_STACK_SIZE         20
StackType_t Task1Stack[TASK1_STACK_SIZE];

#define TASK2_STACK_SIZE         20
StackType_t Task2Stack[TASK2_STACK_SIZE];

/* Define task block    */
TCB_t Task1TCB;
TCB_t Task2TCB;

/*  Function declaration    */
void Task1_Entry(void *p_arg);
void Task2_Entry(void *p_arg);


/*  Main    */
int main(void)
{	
    for(;;)
	{
		//NULL
	}
}

/*  Software delay  */
void delay(uint32_t count)
{
    for(; count != 0; count--);
}


/*  Define task function    */
void Task1_Entry(void *p_arg)
{
    for(;;)
    {
        flag1 = 1;
        delay(100);
        flag1 = 0;
        delay(100);
    }
}

void Task2_Entry(void *p_arg)
{
    for(;;)
    {
        flag2 = 1;
        delay(100);
        flag2 = 0;
        delay(100);
    }
}

