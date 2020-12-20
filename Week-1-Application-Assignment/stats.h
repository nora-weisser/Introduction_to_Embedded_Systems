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
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief <This function returns the maximum of array>
 *
 * Inputs of the function is an array of data and length and returns the maximum of the array
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <The max element in array>
 */

unsigned char find_maximum(unsigned char array[], int size);


/**
 * @brief <This function returns the minimum of array>
 *
 * Inputs of the function is an array of data and length and returns the minimum of the array
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <The min element in array>
 */

unsigned char find_minimum(unsigned char array[], int size);

/**
 * @brief <This function returns the mean of array>
 *
 * Inputs of the function is an array of data and length and returns the mean of the array
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <The mean of the array>
 */

unsigned char find_mean(unsigned char array[], int size);

/**
 * @brief <This function returns the median of array>
 *
 * Inputs of the function is an array of data and length and returns the median of the array
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <The median element in array>
 */

unsigned char find_median(unsigned char array[], int size);

/**
 * @brief <This function sorts the array from largest to smallest>
 *
 * Inputs of the function is an array of data and length and returns sorted array from largest to smallest
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <The sorted array>
 */

unsigned char sort_array(unsigned char* array, int size);

/**
 * @brief <This function prints the array>
 *
 * Inputs of the function is an array of data and length and prints array
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <the printed array>
 */

unsigned char print_array(unsigned char array[], int size);

/**
 * @brief <This function prints the statistics of an array including minimum, maximum, mean, and median>
 *
 * Inputs of the function is an array of data and length and returns the statistics of an array including minimum, maximum, mean, and median
 *
 * @param <array[]> <The array of 40 characters which was given for implementation>
 * @param <size> <Size of array>
 *
 * @return <The statistics of an array>
 */

unsigned char print_statistics(unsigned char array[], int size);

#endif /* __STATS_H__ */
