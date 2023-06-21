#include <stdio.h>

int main() {
  int i, sum_of_cubes = 0, sum_of_squares = 0;

  // iterate over the numbers 1 to 10
  for (i = 1; i <= 10; i++) {
    sum_of_cubes += i * i * i;   // calculate the cube of the current number and add it to the sum of cubes
    sum_of_squares += i * i;     // calculate the square of the current number and add it to the sum of squares
  }

  // print the sum of cubes
  printf("The sum of cubes of numbers from 1 to 10 is: %d\n", sum_of_cubes);
  // print the sum of squares
  printf("The sum of squares of numbers from 1 to 10 is: %d\n", sum_of_squares);

  return 0;
}
