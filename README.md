# Bootloader project for smart bike side light


Uses UART on pins   
- [RX1PPS = 0x14; //RC4->EUSART1:RX1]
- [RC5PPS = 0x09;  //RC5->EUSART1:TX1]
- [RA0 -> Entry Button]

Main programm uses Vectored Interrupts so it activated at bl_config.h

Main programm start address is 0x2000!!!