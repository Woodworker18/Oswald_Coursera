/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Outputs simple statistical information about an array
 *
 * This program prints the median, mean, maximum, and minimum of a data set and displays the 
 * data set in ascending order.
 *
 * @author Doug Oswald
 * @date   10/10/22
 */



#include <stdio.h>
#include "stats.h"


unsigned char maximum(unsigned char num[], unsigned char len);


/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char max = 0;

  max = maximum(test,SIZE); 
  printf("%i\n",max);

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  return;

}


unsigned char maximum(unsigned char num[], unsigned char len) {

  printf("Hello Hello AGAIN");
  printf("\n");	

  for (unsigned int i = 0; i < len; ++i)
  {
  	printf("%i\n",num[i]);
  }

  int tmp = num[0];
  for (unsigned int j = 1; j < len; ++j)
  {
    if (num[j]>tmp)
    {
    	tmp=num[j];
        printf("%i\n",num[j]);
    }  	
  }
  printf("Maximum = %i\n",tmp);
 
  return (0);
}
