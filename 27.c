#include<stdio.h>
void main(){
    float net_sales,gross_sales,discount;

    printf("enter the gross sales\n");
    scanf("%f",&gross_sales);

    if(gross_sales>=20000)
    discount=gross_sales*0.15;

    if(gross_sales>=10000 && gross_sales<20000)
    discount=gross_sales*0.1;

    else{
    if(gross_sales<10000)
   discount=gross_sales*0.05;
}
   net_sales=gross_sales-discount;
   printf("net sales is:%f\n",net_sales);




}




