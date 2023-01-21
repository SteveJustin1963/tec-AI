#include <stdio.h>

int main() {
  int i, sum_of_cubes = 0, sum_of_squares = 0;

  for (i = 1; i <= 10; i++) {
    sum_of_cubes += i * i * i;   // adding the cube of i to sum_of_cubes
    sum_of_squares += i * i;     // adding the square of i to sum_of_squares
  }

  printf("The sum of cubes of numbers from 1 to 10 is: %d\n", sum_of_cubes);
  printf("The sum of squares of numbers from 1 to 10 is: %d\n", sum_of_squares);

  return 0;
}
 
