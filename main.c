// 1. Create an enum variable and assign a value to it

#include <stdio.h>

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;
 
  // Print the enum variable
  printf("%d", myVar);
  
  return 0;
}



// 2. Change the value of enum items

#include <stdio.h>

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
  
int main() {
  enum Level myVar = MEDIUM;
  printf("%d", myVar);
  
  return 0;
}



// 3. Change the value of a specific enum item

#include <stdio.h>

enum Level {
  LOW = 5,
  MEDIUM,
  HIGH
};
  
int main() {
  enum Level myVar = MEDIUM;
  printf("%d", myVar);
  
  return 0;
}



// 4. Enum in a switch statement

#include <stdio.h>

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;
  
  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
   
  return 0;
}