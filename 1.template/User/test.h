#ifndef __TEST_H
#define __TEST_H

#include "list.h"

typedef struct tskTaskControlBlock
{
    volatile StackType_t    *pxTopOfStack;
    ListItem_t              xStateListItem;
    StackType_t             *pxStack;
} tskTCB;
typedef tskTCB TCB_t;


#endif