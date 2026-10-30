// 1. The if statement

#include <stdio.h>

int main() {
  if (20 > 18) {
    printf("20 is greater than 18");
  }
  
  return 0;
}



// 2. The else statement

#include <stdio.h>

int main() {
  int time = 20;
  
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  
  return 0;
}



// 3. The else if statement

#include <stdio.h>

int main() {
  int time = 16;

  if (time < 12) {
    printf("Good morning.");
  } else if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }

  return 0;
}



// 4. Short hand if...else (Ternary Operator)

#include <stdio.h>

int main() {
  int time = 20;
  
  (time < 18) ? printf("Good day.") : printf("Good evening.");
  
  return 0;
}