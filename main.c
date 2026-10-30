// 1. While loop

#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 5) {
    printf("%d\n", i);
    i++;
  }
  
  return 0;
}



// 2. Do while loop

#include <stdio.h>

int main() {
  int i = 0;
  
  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 5);
  
  return 0;
}



// 3. For loop

#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 5; i++) {
    printf("%d\n", i);
  }
  
  return 0;
}



// 4. Nested loop

#include <stdio.h>

int main() {
  int i, j;
  
  // Outer loop
  for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times
    
    // Inner loop
    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
  }
  
  return 0;
}



// 5. Break a loop

#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }
   
  return 0;
}



// 6. Continue a loop

#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
  }   
  
  return 0;
}
