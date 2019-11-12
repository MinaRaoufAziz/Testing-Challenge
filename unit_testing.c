/*
 * unit_testing.c
 *
 *  Created on: Nov 10, 2019
 *      Author: Mina
 */



#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"

uint32 Expected_Area=50;
uint32  height=10;
uint32 base=10;


uint32 CalculateTringleArea(uint32 height,uint32 base );
void Test_CalculateTringleArea(uint32 Area);

int main(void)
{
	uint32 Area=CalculateTringleArea(height,base );
	 Test_CalculateTringleArea(Area);

	return 0;
}


uint32 CalculateTringleArea(uint32 height,uint32 base )
{
	return ((base*height) / 2.0); 
}


void Test_CalculateTringleArea(uint32 Area)
{
	if(Area==Expected_Area)
	{
		printf("ok");
	}
	else
		printf("NOK");
}