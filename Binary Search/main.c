/*
 * main.c
 *
 *  Created on: Jan 4, 2020
 *      Author: MMHG
 */

#include "stdio.h"
#include "binary_search.h"

int main (void){
	int array1[25]= {0, 3, 5, 6, 9,
					11, 13, 16, 17, 19,
					21, 25, 31, 33, 35,
	                37, 40, 41, 46, 47,
					51, 53, 57, 62, 69};

	int number = 47;
	int occurence;
	occurence = binary_search(array1, 25, number);

	printf("the index of %d in the array is %d",number,occurence);
	return 0;
}
