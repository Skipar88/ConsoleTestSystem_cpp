#include <iostream>
#include <string>

#ifndef SOURCE1_H_
#define SOURCE1_H_

#define KEY_Y 89
#define KEY_N 78

#define KEY_y 121
#define KEY_n 110


#define KEY_y_bg 234
#define KEY_n_bg 173


#define KEY_Y_bg 154
#define KEY_N_bg 141

extern std::string questions[2] = {
	"1.За следната компютърна конфигурация:700MHz Intel Celeron, ZIDA Tomato T810-CU i810 SB SVGA, 128MB SDRAM PC133, HDD 15GB ATA100 5400/2Mb, 15\" MOnitor, Modem 56k, 52x CD_ROM, FDD, Mouse, KBD, Speakers, големината на твърдия диск е : ",
	"2.Свързването на клавиатурата като периферно устройство към компютърна система се извършва чрез:"
};

extern std::string answers[3][8] = {
	{
		"а)56MB",
		"б)128MB",
		"в)10GB",
		"г)15GB",

		"а)asdas",
		"б)12asdasd8MB",
		"в)asda",
		"г)asdasd"
	},
	{
		"0",
		"0",
		"0",
		"0",

		"1",
		"1",
		"1",
		"1",
	},
	{
		"0",
		"1",
		"0",
		"0",

		"0",
		"0",
		"1",
		"0"
	}
};

#endif