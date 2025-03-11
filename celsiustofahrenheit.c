#include <stdio.h>

int main()

{
     int celsius;
     printf("Please enter degree in celsius to convert: ");
     scanf("%d", &celsius);
     
     double fahrenheit = (celsius * 1.8) + 32;
     
     printf("Converted result is: %1.f\n ", fahrenheit,"fahrenheit"); 
     
     return 0;
}
