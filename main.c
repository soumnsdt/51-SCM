#include<reg52.h>

sbit led = P1^0; //λ����

int main()
{
	led = 1;
	while(1)
	{
		led = 0;   //��led��Ϩ��   ��Ϊled��һ��ʼ��������
	}
}