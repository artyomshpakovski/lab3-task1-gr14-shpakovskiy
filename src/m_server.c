//
// Created by Artyom Shpakovski 22.02.2023
//

#include "m_interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int seed = 0;

float* get_class_marks(const int ARRAY_SIZE);

float* get_class_marks(const int ARRAY_SIZE) {
  float* my_array = (float*) malloc(ARRAY_SIZE * sizeof(float));
  if (seed == 0) {
    seed = time(NULL);
  }
  srand(seed);
  seed+=1;
  for (int i = 0; i < ARRAY_SIZE; i++) {
        my_array[i] = (float)rand() / RAND_MAX * 9.0 + 1.0;
    }
    return my_array;
}

void sort_array(float* array, const int ARRAY_SIZE);

void sort_array(float* array, const int ARRAY_SIZE) {
  int i, j;
  float temp;
  for (i = 0; i < ARRAY_SIZE; i++) {
    for (j = i+1; j < ARRAY_SIZE; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        }
     }
  }
}

int is_better(float* array1, float* array2, const int ARRAY_SIZE);

int is_better(float* array1, float* array2, const int ARRAY_SIZE) {
  sort_array(array1, ARRAY_SIZE);
  sort_array(array2, ARRAY_SIZE);
  printf("Information about the first class(sorted by average marks): \n");
  for(int i = 0; i < ARRAY_SIZE; i++) {
    printf("%f ", array1[i]);
  }
  printf("\nInformation about the second class(sorted by average marks): \n");
  for(int i = 0; i < ARRAY_SIZE; i++) {
    printf("%f ", array2[i]);
  }
  return (array1[4] >= array2[4]);
}


void proccess(float* array1, float* array2, const int ARRAY_SIZE);


void proccess(float* array1, float* array2, const int ARRAY_SIZE) {
  if (is_better(array1, array2, ARRAY_SIZE)) {
    printf("The first class studies better.\n");
  }
  else {
    printf("The second class studies better.\n");
  }
}