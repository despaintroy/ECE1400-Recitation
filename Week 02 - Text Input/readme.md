# Reading Input from the User

```c
#include <stdio.h>

int main(void) {
  
  int number;
  int doubled;

  printf("Enter an integer: ");
  scanf_s("%d", &number);

  doubled = 2 * number;

  printf("Your number doubled is %d", doubled);
  
  getchar(); 
  getchar();
  return 0;
}
```