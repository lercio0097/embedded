// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_LCD_H
	#define	XC_LCD_H
	
	#include <xc.h> // include processor files - each processor file is guarded.  
	void writecmd(char command);
	void writechar(char character);
	void writeInt(int i);
	void writeString(char str[]);
	void setCursorPos(int lineN, int pos);
	void lcd_init(void);
    void lcd_clear(void);
    void lcd_home(void);
#endif	/* XC_HEADER_TEMPLATE_H */

