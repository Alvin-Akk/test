// 1. A demonstration of different data types and format specifiers

#include <stdio.h>

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}



// 2. Set decimal precision for floating point values

#include <stdio.h>

int main() {
  float myFloatNum = 3.5;

  printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("%.1f\n", myFloatNum); // Only show 1 digit
  printf("%.2f\n", myFloatNum); // Only show 2 digits
  printf("%.4f", myFloatNum);   // Only show 4 digits
  return 0;
}



// 3. Implicit / Automatic conversion (convert an int to a float)

#include <stdio.h>

int main() {
  // Automatic conversion: int to float
  float myFloat = 9;

  printf("%f", myFloat);
  return 0;
}



// 4. Explicit / Manual conversion (convert an int to a float)

#include <stdio.h>

int main() {
  int num1 = 5;
  int num2 = 2;
  float result = (float) num1 / num2;

  printf("%.1f", result);
  return 0;
}