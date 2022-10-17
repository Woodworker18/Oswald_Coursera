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

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Hello Hello AGAIN");
  printf("\n");	

  for (unsigned int i = 0; i < SIZE; ++i)
  {
  	printf("%i\n",test[i]);
  }

  int tmp = test[0];
  for (unsigned int j = 1; j < SIZE; ++j)
  {
    if (test[j]>tmp)
    {
    	tmp=test[j];
        printf("%i\n",test[j]);
    }  	
  }
  printf("Maximum = %i\n",tmp);


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  return;

}

/* Add other Implementation File Code Here */
