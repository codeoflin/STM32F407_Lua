clear
openocd -f openocd.cfg -c init -c "reset halt" 
::一些配置以及烧录语句,根据情况使用:
::-c "flash write_image erase E:/projects/Folder/STM32H7Template/build/STM32H7Template.bin 0x8000000"
::-c "stm32h7x unlock 0"