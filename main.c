#include <stdio.h>

int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d", &age);
  if (age < 40)
  {
    printf("You are young");
  }
  else if (age >= 40 && age <= 60)
  {
    printf("You're old");
  }
  else 
  {
    printf("You're really old");
  }
  
  return 0;
}
