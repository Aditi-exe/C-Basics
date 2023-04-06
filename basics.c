#include <stdio.h>

int main()
{
  int x;
  float f;
  char ch;
  
  printf("Enter an integer: ");
  scanf("%d", &x);
  printf("\n");
  
  printf("Enter a floating point number: ");
  scanf("%f", &f);
  printf("\n");
  
  printf("Enter a character: ");
  scanf("%c", &ch);
  printf("\n");
  
  printf("Integer: %d\nFloat: %f\nCharacter: %c\n", x, f, ch);
  
  return 0;
}
