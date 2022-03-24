build:
	@avr-gcc -Wall -g -Os -mmcu=atmega328p -o Flame.bin Flame.c
	@avr-objcopy -j .text -j .data -O ihex Flame.bin Flame.hex
flash:
	@avrdude -F -V -c arduino -p atmega328p -P /dev/ttyACM0 -U flash:w:Flame.hex
