//pulling in libraries
#include<stdio.h>
#include<stdlib.h>

int main(){
   //declare variables
   char op;
   float num1, num2;
    //prompting the user to enter numbers and operartion
   printf("Enter operations i.e +, -, /, *: \n");
   scanf("%c", &op);
   printf("Enter two numbers: \n");
   scanf("%f %f", &num1, &num2);

   if(op=='+'){
       float sum;
       sum = num1 + num2;
       printf("Sum = %.2f\n", sum);
   } else if(op == '-'){
       float sub;
       sub = num1 - num2;
       printf("Diffrence = %.2f\n", sub);
   } else if (op == '/'){
       float div;
       div = num1 / num2;
       printf("Divide = %f \n", div);
   }else if(op == '*'){
       float mult;
       mult = num1 * num2;
       printf("Multiplication = %f\n", mult);
   } else{
       printf("Invalid input\n");
   }


    return 0;
}