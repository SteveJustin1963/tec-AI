#include <stdio.h>
#include <stdlib.h>

struct data {
  int age;
  char gender;
  char class;
};

int main() {
  struct data input;
  
  printf("Enter the age: ");
  scanf("%d", &input.age);
  
  printf("Enter the gender (M/F): ");
  scanf(" %c", &input.gender);

  if (input.age < 18) {
    input.class = 'C';
  } else if (input.gender == 'M' || input.gender == 'm') { // added lowercase letter support
    input.class = 'A';
  } else if (input.gender == 'F' || input.gender == 'f') { // added lowercase letter support
    input.class = 'B';
  }

  printf("The class is: %c\n", input.class);
  
  return 0;
}
;user can enter either uppercase or lowercase 'M'/'F' as the gender input. 
  ;This is a small tweak, but it makes the program a bit more user-friendly.
  
