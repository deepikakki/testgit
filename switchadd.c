#include<stdio.h>
int main()
{
int num,num1,num2,add,sub,div,mul;

		printf("enter value of num1: \n");
	scanf("%d",&num1);
	printf("enter value of num2: \n");
	scanf("%d",&num2);
	printf("enter value of num: \n");
	scanf("%d",&num);
add=num1+num2;
mul=num1*num2;
sub=num1-num2;
div=num1/num2;
num<=4;

switch(num)
{
case'1':
	printf("addition of two numbers: \n");
break;

case'2':
	printf("multiplication of two numbers: \n");
break;

case'3':
	printf("subtraction of two numbers: \n");
break;

case'4':
	printf("divison of two numbers: \n");
break;

default:
	printf("enter wrong number:\n);
break;
return 0;
}
