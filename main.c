// 1. Get the size of different data types

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



// 2. Dynamically allocate memory to store an array of integers

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *students;
  int numStudents = 12;
  students = calloc(numStudents, sizeof(*students));
  printf("%zu", numStudents * sizeof(*students)); // 48 bytes
  
  return 0;
}



// 3. Read from and write to dynamic memory

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Allocate memory
  int *ptr;
  ptr = calloc(4, sizeof(*ptr));

  // Write to the memory
  *ptr = 2;
  ptr[1] = 4;
  ptr[2] = 6;

  // Read from the memory
  printf("%d\n", *ptr);
  printf("%d %d %d", ptr[1], ptr[2], ptr[3]);

  return 0;
}



// 4. Reallocate memory

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr1, *ptr2, size;

  // Allocate memory for four integers
  size = 4 * sizeof(*ptr1);
  ptr1 = malloc(size);

  printf("%d bytes allocated at address %p \n", size, ptr1);

  // Resize the memory to hold six integers
  size = 6 * sizeof(*ptr1);
  ptr2 = realloc(ptr1, size);

  printf("%d bytes reallocated at address %p \n", size, ptr2);
 
  return 0;
}



// 5. Reallocate memory and check for errors

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr1, *ptr2;

  // Allocate memory
  ptr1 = malloc(4);

  // Attempt to resize the memory
  ptr2 = realloc(ptr1, 8);

  // Check whether realloc is able to resize the memory or not
  if (ptr2 == NULL) {
    // If reallocation fails
    printf("Failed. Unable to resize memory");
  } else {
    // If reallocation is sucessful
    printf("Success. 8 bytes reallocated at address %p \n", ptr2);
    ptr1 = ptr2; // Update ptr1 to point to the newly allocated memory
  }
 
  return 0;
}



// 6. Deallocate (free) memory

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = malloc(sizeof(*ptr)); // Allocate memory for one integer

  // If memory cannot be allocated, print a message and end the main() function
  if (ptr == NULL) {
    printf("Unable to allocate memory");
    return 1;
  }

  // Set the value of the integer
  *ptr = 20;

  // Print the integer value
  printf("Integer value: %d\n", *ptr);

  // Free allocated memory
  free(ptr);

  // Set the pointer to NULL to prevent it from being accidentally used
  ptr = NULL; 
  return 0;
}



// 7. Real-life memory management example (Dynamic student grades)

#include <stdio.h>
#include <stdlib.h>

struct list {
  int *data; // Points to the memory where the list items are stored
  int numItems; // Indicates how many items are currently in the list
  int size; // Indicates how many items fit in the allocated memory
};

void addToList(struct list *myList, int item);

int main() {
  struct list myList;
  int amount;
  int i, j;

  // Create a list and start with enough space for 10 items
  myList.numItems = 0;
  myList.size = 10;
  myList.data = malloc(myList.size * sizeof(int));

  // Find out if memory allocation was successful
  if (myList.data == NULL) {
    printf("Memory allocation failed");
    return 1; // Exit the program with an error code
  }
  
  // Add any number of items to the list specified by the amount variable
  amount = 44;
  for (i = 0; i < amount; i++) {
    addToList(&myList, i + 1);
  }

  // Display the contents of the list
  for (j = 0; j < myList.numItems; j++) {
    printf("%d ", myList.data[j]);
  }

  // Free the memory when it is no longer needed
  free(myList.data);
  myList.data = NULL;
  return 0;
}

// This function adds an item to a list
void addToList(struct list *myList, int item) {

  // If the list is full then resize the memory to fit 10 more items
  if (myList->numItems == myList->size) {
    int newSize = myList->size + 10;

    // Use a temporary pointer so we don't lose the original on failure
    int *tmp = realloc(myList->data, newSize * sizeof(int));
    if (tmp == NULL) {
      printf("Memory resize failed\n");
      return; // Leave the list unchanged
    }

    // Only update fields after a successful reallocation
    myList->data = tmp;
    myList->size = newSize;
  }

  // Add the item to the end of the list
  myList->data[myList->numItems] = item;
  myList->numItems++;
}