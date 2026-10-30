// 1. Create a pointer variable

#include <stdio.h>

int main() {
  int myAge = 43;  // An int variable
  int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d\n", myAge);

  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  return 0;
}




// 2. Get the value of a variable with the dereference operator *

#include <stdio.h>

int main() {
  int myAge = 43;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration

  // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  // Dereference: Output the value of myAge with the pointer (43)
  printf("%d\n", *ptr);
  
  return 0;
}



// 3. Access an array with pointers

#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  
  // Get the value of the first element in myNumbers
  printf("%d\n", *myNumbers);
  
  // Get the value of the second element in myNumbers
  printf("%d", *(myNumbers + 1));
 
  return 0;
}



// 4. Loop through an array using pointers

#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int *ptr = myNumbers;
  int i;

  for (i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
  }
  return 0;
}