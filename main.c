// 1. Create and access an array

#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d", myNumbers[0]);
 
  return 0;
}



// 2. Change an array element

#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  myNumbers[0] = 33;

  printf("%d", myNumbers[0]);
 
  return 0;
}



// 3. Loop through an array

#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  int i;
  
  for (i = 0; i < 3; i++) {
    printf("%d\n", myNumbers[i]);
  }
 
  return 0;
}



// 4. Two-dimensional array

#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d", matrix[0][2]);
 
  return 0;
}



// 5. Change elements in a two-dimensional array

#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  matrix[0][0] = 9;
  printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1
 
  return 0;
}



// 6. Loop through a two-dimensional array

#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  
  return 0;
}
