// 1. Create and call a function

#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}



// 2. Call a function multiple times

#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed!\n");
}

int main() {
  myFunction(); // call the function
  myFunction(); // call the function
  myFunction(); // call the function
  return 0;
}



// 3. Function declaration and definition

#include <stdio.h>

// Function declaration
void myFunction();

// The main function
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}



// 4. Parameters and arguments

#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}



// 5. Multiple parameters

#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}



// 6. Pass arrays as function parameters

#include <stdio.h>

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};  
  myFunction(myNumbers);
  return 0;
}



// 7. Return value

#include <stdio.h>

int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));
  return 0;
}



// 8. Return the sum of two parameters

#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;
}



// 9. Local scope

#include <stdio.h>

void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;

  // Print the variable x
  printf("%d", x);
}

int main() {
  myFunction();
  return 0;
}



// 10. Global scope

#include <stdio.h>

// Global variable x
int x = 5;

void myFunction() {
  // We can use x here
  printf("%d\n", x);
}

int main() {
  myFunction();

  // We can also use x here
  printf("%d\n", x);
  return 0;
}



// 11. Recursion (make a function call itself)

#include <stdio.h>

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}




// 12. Use a math function to get the square root of a number

#include <stdio.h>
#include <math.h>

int main() {
  printf("%f", sqrt(16));
  return 0;
}