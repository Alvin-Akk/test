// 1. Create boolean variables

#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d", isFishTasty);         // Returns 0 (false)
  
  return 0;
}



// 2. Compare two values

#include <stdio.h>

int main() {
  printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9
  
  return 0;
}



// 3. Compare two variables

#include <stdio.h>

int main() {
  int x = 10;
  int y = 9;
  
  printf("%d", x > y); // Returns 1 (true) because 10 is greater than 9
  return 0;
}



// 4. Compare two boolean variables

#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

int main() {
  bool isHamburgerTasty = true;
  bool isPizzaTasty = true;
  printf("%d", isHamburgerTasty == isPizzaTasty);
  
  return 0;
}



