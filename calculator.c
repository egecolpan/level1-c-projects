#include <stdio.h>

int main()
{
      int firstnum;
      int secondnum;
  
      printf("Insert the first number: ");
      scanf("%d", &firstnum);

      printf("Insert the second number: ");
      scanf("%d", &secondnum);
     
      int result = firstnum + secondnum;  

      printf("The result of adding is: %i\n ", result);

      return 0;
}
