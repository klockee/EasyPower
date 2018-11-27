#include <string.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
sd_unmount();
#ifdef MENU_LOGO_ENABLE
	free(Kc_MENU_LOGO);
#endif 
i2c_send_byte(I2C_5, MAX77620_I2C_ADDR, MAX77620_REG_ONOFFCNFG1, MAX77620_ONOFFCNFG1_PWR_OFF);
return 0;
}
