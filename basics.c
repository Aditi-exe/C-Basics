#include <stdio.h>

int main()
{
  int x;
  float f;
  char ch;
  
  printf("Enter an integer: ");
  scanf("%d", &x);
  
  printf("Enter a floating point number: ");
  scanf("%f", &f);
  
  printf("Enter a character: ");
  scanf("%c", &ch);
  
  printf("Integer: %d\nFloat: %f\nCharacter: %c\n", x, f, ch);
  
  return 0;
}
