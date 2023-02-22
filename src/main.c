//
// Created by Artyom Shpakovski 22.02.2023
//

#include <stdio.h>
#include "m_server.c"
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(void) 
{
  const int ARRAY_SIZE = 20;
  float* first_class = get_class_marks(ARRAY_SIZE);
  float* second_class = get_class_marks(ARRAY_SIZE);
  proccess(first_class, second_class, ARRAY_SIZE);
  return 0;
}