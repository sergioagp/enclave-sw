#include <stdint.h>
#include <stdio.h>
#include "uart.h"
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
    printf("Hello World!");
    fflush(stdout);
    putchar_uart0('D');
    printf("number: %d", 10);
    fflush(stdout);
    /* Loop forever */
	for(;;);
}
