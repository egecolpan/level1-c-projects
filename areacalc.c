#include <stdio.h>

int main()

{
     int a;
     int b;
    
     printf("Welcome to the area calculator! \n");
     printf("Please enter the first lenght: ");
     scanf("%d", &a);

     printf("Please enter the second lenght: ");
     scanf("%d", &b);

     int result = a * b;
     
     printf("The area is:  %d\n", result);   

     return 0;
 
}
