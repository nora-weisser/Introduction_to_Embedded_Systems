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
 * @file Week 1 Application Assignment
 * @brief There is simple application that performs statistical analytics on a dataset.
 *
 * There are a couple of functions that analyze an array of 
 * unsigned char data items and report analytics on the maximum, 
 * minimum, mean, and median of the data set. 
 * In addition, project consists of reordering data set from large to small.
 * 
 * @author Eleonora Belova
 * @date 20th of December, 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char find_maximum(unsigned char array[], int size) {
    unsigned char max = array[0];
    for (int i = 1; i < size; i++){
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char array[], int size) {
    unsigned char min = array[0];
    for (int i = 1; i < size; i++){
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

unsigned char find_mean(unsigned char array[], int size){
  unsigned int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  unsigned int mean = sum / size;
  unsigned char mean_final = (unsigned char) mean;
  return mean_final;
}

void swap(unsigned char*xp, unsigned char*yp) {
  unsigned char temp = *xp;
  *xp = *yp;
  *yp = temp;
}

unsigned char sort_array(unsigned char* array, int size) {
  int i, j, min_idx;
  for (i = (size - 1); i >= 0; i--) {
    min_idx = i;
    for (j = (i - 1); j >= 0; j--) {
      if (array[j] < array[min_idx]) {
        min_idx = j;
        
      }
    }
    swap(&array[min_idx], &array[i]);
  }
}

unsigned char find_median(unsigned char array[], int size) {
  int medi = 0;
  sort_array(array, size);

  //if number of elements are even
  if (size%2 == 0) {
    medi = ((array[size/2] + array[size/2 - 1]))/2;
  }
  //if number of elements are odd
  else {
    medi = array[size/2];
  }
  unsigned char median = (unsigned char) medi;
  return median;
}

unsigned char print_array(unsigned char array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%u   ", array[i]);
  }
}

unsigned char print_statistics(unsigned char array[], int size) {
  printf("Array of unsigned char data items:\n");
  print_array(array, 40);
  printf("\nMinimum: ");
  printf("%u\n", find_minimum(array, 40));
  printf("Maximum: ");
  printf("%u\n", find_maximum(array, 40));
  printf("Mean: ");
  printf("%u\n", find_mean(array, 40));
  printf("Median: ");
  printf("%u\n", find_median(array, 40));
  printf("Sorted array from largest to smallest element:\n");
  sort_array(array, 40);
  print_array(array, 40);
}

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  print_statistics(test, 40);
  return 0;
}