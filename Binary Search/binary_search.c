/*
 * binary_search.c
 *
 *  Created on: Jan 4, 2020
 *      Author: MMHG
 */


int binary_search(int arr[], int index, int number){
	int occurence;
	int i;
	if(number < (index/2))
	{
		for(i=0; i<(index/2); ++i)
		{
			if(number == arr[i]){
				occurence = i;
				break;
			}
		}
	}

	else
	{
		for(i=(index/2); i<index; ++i)
		{
			if(number == arr[i]){
				occurence = i;
				break;
			}
		}
	}


	return occurence;
}
