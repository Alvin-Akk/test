// 1. Create a string

#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%s", greetings);
 
  return 0;
}


// 2. Another way to create a string

#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  
  return 0;
}



// 3. Access string characters

#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  printf("%c", greetings[0]);
 
  return 0;
}



// 4. Change string characters

#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  greetings[0] = 'J';
  printf("%s", greetings);

  return 0;
}



// 5. Loop through a string

#include <stdio.h>

int main() {
  char carName[] = "Volvo";
  int i;
  
  for (i = 0; i < 4; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}



// 6. Special characters in a string

#include <stdio.h>

int main() {
  char txt[] = "We are the so-called \"Vikings\" from the north.";
  printf("%s", txt);
 
  return 0;
}



// 7. Get the length of a string

#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%zu", strlen(alphabet));
  return 0;
}



// 8. Concatenate strings

#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[20] = "Hello ";
  char str2[] = "World!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s", str1);
 
  return 0;
}



// 9. Copy strings

#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hello World!";
  char str2[20];

  // Copy str1 to str2
  strcpy(str2, str1);

  // Print str2
  printf("%s", str2);
  
  return 0;
}



// 10. Compare strings

#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello";
  char str2[] = "Hello";
  char str3[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));
  
  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));
  
  return 0;
}
