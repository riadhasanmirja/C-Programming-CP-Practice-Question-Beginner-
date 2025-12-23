#include <stdio.h>

int main() {
   
   float a;
   float b;
   
   printf("Enter your Floating value a :");
   scanf("%f",&a);
   
   printf("Enter your Floating value b :");
   scanf(" %f",&b);      
   
   float Division = a/b;
   printf("Product value is :%f",Division);

    return 0;
}
