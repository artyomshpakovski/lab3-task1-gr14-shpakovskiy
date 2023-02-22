//
// Created by Artyom Shpakovski 22.02.2023
//

#ifndef H_INTER
#define H_INTER

#include "stddef.h"

// float* get_class_marks()
// generates an array of average marks of the class
// Arguments:
//   const int ARRAY_SIZE - the size of the array
//   int seed - the seed to generate an array
// Return:
//   An array with float between 1.0 and 10.0
float* get_class_marks(const int ARRAY_SIZE);

// void sort_array(float* array, const int ARRAY_SIZE)
// sorts the array of floats, the size is ARRAY_SIZE
// Arguments:
//  float* array - an array needs to be sorted
//  const int ARRAY_SIZE - the size of the array 
// Return:
//  Make an array sorted
void sort_array(float* array, const int ARRAY_SIZE);

// bool is_better(float* array1, float* array2)
// compares the 5th element of each arrays and returns 1 in case
// 5th element of array1 bigger that 5th element of array2, 0 in the other way
// Arguments:
//  float* array1 - the first array
//  float* array2 - the second array
//  const int ARRAY_SIZE - the size of the array
// Return:
//  1 - array1[4] > array2[4]
//  0 - in the other way
int is_better(float* array1, float* array2, const int ARRAY_SIZE);

// void proccess(float* array1, float* array2, const int ARRAY_SIZE)
// takes the data from is_better and write in console the result of the program
// Arguments:
//  float* array1 - the first array
//  float* array2 - thhe second array
//  const int ARRAY_SIZE - the size of the array
// Return:
//  the message into console - the result of the program
void proccess(float* array1, float* array2, const int ARRAY_SIZE);

#endif