#include "console.h"
int ct = 1;
int kern_entry()
{
    console_clear();
    console_write_color("Welcome to JOS,Version 0.0.1 beta(JOS Panda)\n",rc_black,rc_red);
    console_write_color("sources:https://www.github.com/JackMerryYoung/JOS\n",rc_black,rc_blue);
    while(1)
    {
        console_write_color("Hello, OS kernel!\n",rc_black,ct);
	     for(int i = 0;i < 100000000;i ++);
	     if(ct % 16 == 0) 
	     {
	         console_clear();
	         ct = 1;
	     }
	     ct ++;
    }
    return 0;
}
