#include<reg52.h>

sbit led = P1^0; //位定义

int main()
{
	led = 1;
	while(1)
	{
		led = 0;   //让led灯熄灭   因为led灯一开始就是亮的
	}
}