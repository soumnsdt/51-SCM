#include<reg52.h>

typedef unsigned char u8;
typedef unsigned int u16;
sbit led = P0^0; //位定义


void delay1ms(u16 num)   //大约延时0.9ms
{
	u16 x,y;
	for(x = num;x > 0;x--)
		for(y = 110;y > 0;y--);
}

int main()
{
	while(1)
	{
		led = 0;
		delay1ms(5000);//大约延时4.4s
		led = 1;
		delay1ms(5000);
	}
}