#include "main.h"

void System_Init(void);

int main()
{
	System_Init();
	
	while(1)
	{
		;
	}
}

void System_Init(void)
{
	delay_init();
}
