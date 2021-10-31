#include "stm32f4xx.h"
#include <string.h>
void printMsg(const int a)
{
	 char Msg[100];
	 char *ptr;
	 sprintf(Msg, "Even count in array: %x", a);
	 ptr = Msg ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
}


