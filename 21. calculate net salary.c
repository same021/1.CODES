#include<stdio.h>
int main(){
     float net_salary,gross_salary,allowance,deduction;
     printf("enter gross salary");
     scanf("%f",&gross_salary);
     allowance=gross_salary*0.1;
     deduction=gross_salary*0.03;
     net_salary=gross_salary+allowance-deduction;


     printf("%.2f",net_salary);

     return 1;
}
