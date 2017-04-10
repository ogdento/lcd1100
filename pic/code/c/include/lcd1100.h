/*
 _   _    ___    _  __  ___      _          _   _    ___     ___        _       ____   ____
| \ | |  / _ \  | |/ / |_ _|    / \        / | / |  / _ \   / _ \      | |     / ___| |  _ \
|  \| | | | | | | ' /   | |    / _ \       | | | | | | | | | | | |     | |    | |     | | | |
| |\  | | |_| | | . \   | |   / ___ \      | | | | | |_| | | |_| |     | |___ | |___  | |_| |
|_| \_|  \___/  |_|\_\ |___| /_/   \_\     |_| |_|  \___/   \___/      |_____| \____| |____/

PIC 18f1320 to Nokia 1100 LCD Interface
http://sunbizhosting.com/~spiral/

File: lcd1100.h

*/
//#include <p18f1320.h>
//#include <delays.h> 
//#include <string.h>

// set output pins for lcd here
// 1   2   3    4    5   6   7   8
// LED Vdd Vdd1 sclk sda GND CS  RES

#ifndef sclk
	#define sclk PORTCbits.RC0
#endif
#ifndef sda
	#define sda PORTCbits.RC1
#endif
#ifndef cs
	#define cs PORTCbits.RC2
#endif
#ifndef rst
	#define rst PORTCbits.RC3
#endif

#define CMD		0
#define DATA	1


void init(void); 
void lcdInit(void);
void lcdWrite(char cd,unsigned char c);
void lcdClear(void);
void lcdSetContrast(unsigned char val);
void lcdMirrorY(void);
void lcdSetX(char x);
void lcdSetY(char y);
void lcdGotoxy(char x,char y);
void lcdVLine(char x,char y,char on);
void lcdLine(unsigned char x,unsigned char y,unsigned char y2,unsigned char on);
//void lcdPrintMessage(const rom char* message);
void lcdPrintChar(char c);
void lcdPrintCharInv(char c, char invert);
void lcdPrintString(char * message);

