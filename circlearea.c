#include <stdio.h>

int main ()

{
     int r;
     double pi = 3.14589;
     
     printf("Please enter your radius: ");
     scanf("%d", &r);

     double area = pi * r * r;
     printf("Your circles are is: %f\n ", area);



     return 0;
}

