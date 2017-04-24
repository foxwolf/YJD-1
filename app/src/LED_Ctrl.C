/***********************************************************************
�ļ����ƣ�LED_Ctrl.C
��    �ܣ�
��дʱ�䣺
�� д �ˣ�������Ƕ���������Ӽ����Ŷ�
ע    �⣺

***********************************************************************/
#include "main.h"

/***********************************************************************
�������ƣ�void LED_Ctrl(unsigned char *data)
��    �ܣ�����data�������������led������
���������
���������
��дʱ�䣺
�� д �ˣ�
ע    �⣺
			���	led1_on				LED1����
					led2_on				LED2����
					led3_on				LED3����
					led4_on				LED4����
									
					led1_off			LED1����
					led2_off			LED2����
					led3_off			LED3����
					led4_off			LED4����
***********************************************************************/
void LED_Ctrl(unsigned char *data)
{
	if(strncmp(&data[0],"led", 3) == 0)//��LED�Ŀ�������
	{
		switch(data[3])				//��3���ֽ��ǿ����ĸ�LED��
		{
			case '1':
			{
				if(strncmp(&data[4],"_on", 3) == 0)//�����led1_on
				{
					LED1_ON;
				}
				else if(strncmp(&data[4],"_off", 4) == 0)
				{
					LED1_OFF;

				}
				break;
			}
			case '2':
			{
				if(strncmp(&data[4],"_on", 3) == 0)//�����led1_on
				{
					LED2_ON;
				}
				else if(strncmp(&data[4],"_off", 4) == 0)
				{
					LED2_OFF;

				}
				break;
			}
			case '3':
			{
				if(strncmp(&data[4],"_on", 3) == 0)//�����led1_on
				{
					LED3_ON;
				}
				else if(strncmp(&data[4],"_off", 4) == 0)
				{
					LED3_OFF;

				}
				break;
			}
			case '4':
			{
				if(strncmp(&data[4],"_on", 3) == 0)//�����led1_on
				{
					LED4_ON;
				}
				else if(strncmp(&data[4],"_off", 4) == 0)
				{
					LED4_OFF;

				}
				break;
			}
			default:
			{
				break;
			}
		}
	}
}