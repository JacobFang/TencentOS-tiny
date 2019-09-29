#include "led.h"

/*********************************************************************************
			  ___   _     _____  _____  _   _  _____  _____  _   __
			 / _ \ | |   |_   _||  ___|| \ | ||_   _||  ___|| | / /
			/ /_\ \| |     | |  | |__  |  \| |  | |  | |__  | |/ /
			|  _  || |     | |  |  __| | . ` |  | |  |  __| |    \
			| | | || |_____| |_ | |___ | |\  |  | |  | |___ | |\  \
			\_| |_/\_____/\___/ \____/ \_| \_/  \_/  \____/ \_| \_/

 *	******************************************************************************
 *	������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
 *	ALIENTEK W601������
 *	LED��������
 *	����ԭ��@ALIENTEK
 *	������̳:www.openedv.com
 *	��������:2019/7/10
 *	�汾��V1.0
 *	��Ȩ���У�����ؾ���
 *	Copyright(C) �������������ӿƼ����޹�˾ 2019-2029
 *	All rights reserved
 *	******************************************************************************
 *	��ʼ�汾
 *	******************************************************************************/


/**
 * @brief	LED IO��ʼ������
 *
 * @param   void
 *
 * @return  void
 */
void LED_Init(void)
{
    /*
    	LED-B	PA13
    	LED-G	PA14
    	LED-R	PA15
    */

    tls_gpio_cfg(WM_IO_PA_13, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_PULLHIGH);
    tls_gpio_cfg(WM_IO_PA_14, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_PULLHIGH);
    tls_gpio_cfg(WM_IO_PA_15, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_PULLHIGH);

    LED_R = 1;
    LED_G = 1;
    LED_B = 1;
}




