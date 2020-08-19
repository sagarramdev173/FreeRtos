/*
 ============================================================================
 Name        : FreeRtos.c
 Author      : Sagar ramdev
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"


#define mainREGION_1_SIZE	10801
#define mainREGION_2_SIZE	29905
#define mainREGION_3_SIZE	6007

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
