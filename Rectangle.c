#include <stdio.h>

int main() {
   
   int length ;
   int Width ;
   
   printf("Enter your integer Leangth value is :");
   scanf("%d",&length);
   
   printf("Enter your integer Width value is :");
   scanf("%d",&Width);
  
   int rectangle = length*Width; // We know, Rectangle = length*Width
   printf("Rectangle is : %d",rectangle);
   
   return 0;
}
