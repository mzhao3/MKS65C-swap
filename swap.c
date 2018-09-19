#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  //Create an array large enough to store 10 ints.
  int barney[10];
  //Sets the seed for rand();
  srand(time(NULL));

  //Populate the array with random values. Set the last value in the array to 0.
  for (int i = 0; i < 10; i++)
    barney[i] = rand();
  barney[9] = 0;

  //Print out the values in this array
  printf("~============First  Array============~\n");
  for (int j = 0; j < 10; j++)
    printf("Value %d: %d \n", j, *(barney + j));

  //Create a separate array large enough to store 10 ints.
  int babyBop[10];
  //USING ONLY POINTERS populate the second array with the values in the first but in reverse order
  for (int k = 0; k < 10; k++)
    *(babyBop + k) = *(barney + 9 - k);

  //Print out the values in the second array
  printf("~============Second Array============~\n");
  for (int j = 0; j < 10; j++)
    printf("Value %d: %d \n", j, *(babyBop + j));

  return 0;
}


main();
