#include<stdio.h>
void main(){
   float net_salary,gross_salary,allowance,deduction;
   printf("enter gross salary\n");
   scanf("%f",&gross_salary);
   if(gross_salary>=10000){
   allowance=gross_salary*0.10;
   deduction=gross_salary*0.03;

}
   else{
   if(gross_salary>=5000 ){
   allowance=gross_salary*0.07;
   deduction=gross_salary*0.02;}



}
   net_salary=gross_salary+allowance-deduction;
   printf("net salary is:%f\n",net_salary);





}
