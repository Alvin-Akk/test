// 1. Addition operator (+)

#include <stdio.h>

int main() {
  int myNum = 100 + 50;
  printf("%d", myNum);
  return 0;
}



// 2. Subtraction operator (-)

#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  printf("%d", x - y);
  return 0;
}



// 3. Division operator (/)

#include <stdio.h>

int main() {
  int x = 12;
  int y = 3;
  printf("%d", x / y);
  return 0;
}



// 4. Modulus operator (%) - returns the division remainder

#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;
  printf("%d", x % y);
  return 0;
}



// 5. Increment operator (++) - increases value by 1

#include <stdio.h>

int main() {
  int x = 5;
  printf("%d", ++x);
  return 0;
}



// 6. Decrement operator (--) - decreases value by 1

#include <stdio.h>

int main() {
  int x = 5;
  printf("%d", --x);
  return 0;
}



// 7. Assignment operator (=)

#include <stdio.h>

int main() {
  int x = 10;
  printf("%d", x);
  return 0;
}



// 8. Addition assignment operator (+=)

#include <stdio.h>

int main() {
  int x = 10;
  x += 5;
  printf("%d", x);
  return 0;
}



// 9. Comparison operators (==, !=, >, <, >=, <=)

#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  printf("%d", x > y); // returns 1 (true) because 5 is greater than 3
  return 0;
}



// 10. Logical operators (&& AND, || OR, ! NOT)

#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d", x > 3 && x < 10);
  return 0;
}



// 11. Using the "sizeof" operator to get memory size in bytes

#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("%zu\n", sizeof(myInt));
  printf("%zu\n", sizeof(myFloat));
  printf("%zu\n", sizeof(myDouble));
  printf("%zu\n", sizeof(myChar));
  
  return 0;
}