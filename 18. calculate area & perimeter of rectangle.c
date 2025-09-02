#include <stdio.h>
int main (){
   float area,perimeter,L,B;
   printf("enter L ");
   scanf("%f",&L);
   printf("enter B");
   scanf("%f",&B);

   area=L*B;
   perimeter=2*(L+B);

   printf("%f",area);
   printf("%f",perimeter);
   return 1;
}
