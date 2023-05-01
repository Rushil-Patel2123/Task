#include<stdio.h>
int main()
{
	int a,b,add;
	printf("Enter value of a:");
	scanf("%d" ,&a);
	printf("Enter value of b:");
	scanf("%d" ,&b);
	add=a+b;
	printf("Adddition is: %d \n" ,add);
	
	
	int c,d,sub;
	printf("Enter value of c:");
	scanf("%d" ,&c);
	printf("Enter value of d:");
	scanf("%d" ,&d);
	sub=c-d;
	printf("Subtraction is: %d \n" ,sub);
	
	
	int e,f,mul;
	printf("Enter value of e:");
	scanf("%d" ,&e);
	printf("Enter value of f:");
	scanf("%d" ,&f);
	mul=e*f;
	printf("Multi is: %d \n" ,mul);
	
	
	int g,h,div;
	printf("Enter value of g:");
	scanf("%d" ,&g);
	printf("Enter value of h:");
	scanf("%d" ,&h);
	div=g/h;
	printf("Division is: %d \n" ,div);
	
	
	int i,j,mod;
	printf("Enter value of i:");
	scanf("%d" ,&i);
	printf("Enter value of j:");
	scanf("%d" ,&j);
	mod=i/j;
	printf("Modules is: %d \n" ,mod);
}
