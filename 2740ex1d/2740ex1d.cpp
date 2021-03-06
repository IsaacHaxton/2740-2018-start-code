// 2740ex1d.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTERITEM "Enter Item information:\n"
#define DISPLAYITEM "\nYour item:\n"
#define ITEMNUMBER "Item Number:\t"
#define DESCRIPTION "Description:\t"
#define QUANTITY "Quantity:\t"
#define PRICE "Price:\t\t"
#define VALUE "Value:\t\t"

void numericTypeRanges() {
	char c1, c2;
	unsigned char uc1, uc2;
	short s1, s2;
	unsigned short us1, us2;
	int i1, i2;
	unsigned int ui1, ui2;
	long l1, l2;
	float f1, f2;
	double d1, d2;
	c1 = 127;
	c2 = c1 + 1;
	printf("char: %d %d\n", c1, c2);
	printf("hex: %x %x\n", c1, c2);
	printf("char: %c %c\n", c1, c2);

	// unsigned char: %u

	// short: %d

	// unsigned short: %u

	// int: %d

	// int (hexadecimal): %x

	// unsigned int: %u

	// long: %ld

	// float: %f

	// double: %lf

}

void consoleInput()
{
	int itemNum, quantity;
	char description[20];
	double price;
	char input[20];

	//// Read console input
	//printf(ENTERITEM);
	//printf(ITEMNUMBER);
	//scanf("%d", &itemNum);
	//// Add code to read description, quantity, and price from keyboard

	//// Display results
	//printf(DISPLAYITEM);
	//printf("%s%7d\n", ITEMNUMBER, itemNum);
	//// Add code to display description, quantity, price, and total value

	printf("\nPress <Enter> to continue:");
	_getch();
}

int main()
{
	numericTypeRanges();
	consoleInput();

	return 0;
}

/*
Dec Binary Hex
00 00000000 00
01 00000001 01
02 00000010 02
03 00000011 03
04 00000100 04
05 00000101 05
06 00000110 06
07 00000111 07
08 00001000 08
09 00001001 09
10 00001010 0A
11 00001011 0B
12 00001100 0C
13 00001101 0D
14 00001110 0E
15 00001111 0F
16 00010000 10
*/

