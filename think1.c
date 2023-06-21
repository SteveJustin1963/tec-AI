#include <stdio.h>

int cube(int number) {
    return number * number * number;
}

int square(int number) {
    return number * number;
}

int main() {
    int i;
    int sum_of_cubes = 0;
    int sum_of_squares = 0;

    for (i = 1; i <= 10; i++) {
        sum_of_cubes += cube(i);
        sum_of_squares += square(i);
    }

    printf("The sum of cubes of numbers from 1 to 10 is: %d\n", sum_of_cubes);
    printf("The sum of squares of numbers from 1 to 10 is: %d\n", sum_of_squares);

    return 0;
}
