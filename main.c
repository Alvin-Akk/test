// 1. Create an integer variable and print it

#include <stdio.h>

int main() {
  int myNum = 15;
  printf("%d", myNum);
  return 0;
}



// 2. Combine both text and a variable

#include <stdio.h>

int main() {
  int myNum = 15;
  printf("My favorite number is: %d", myNum);
  return 0;
}



// 3. Change/overwrite variable values

#include <stdio.h>

int main() {
  int myNum = 15; // myNum is 15
  myNum = 10; // Now myNum is 10
  
  printf("%d", myNum);
  return 0;
}



// 4. Add a variable to another variable

#include <stdio.h>

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  printf("%d", sum);
  return 0;
}



// 5. Declare many variables of the same type with a comma-separated list

#include <stdio.h>

int main() {
  int x = 5, y = 6, z = 50;
  printf("%d", x + y + z);
  return 0;
}



// 6. Assign the same value to multiple variables of the same type

#include <stdio.h>

int main() {
  int x, y, z;
  x = y = z = 50;
  printf("%d", x + y + z);
  return 0;
}





