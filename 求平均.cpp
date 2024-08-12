#include <stdio.h> 
int main() {
	double num1,num2,num3;
		
	printf("enter first number:");
	scanf("%lf",&num1);
	
	printf("enter second number:");
	scanf("%lf",&num2);
	
	printf("你输入了%lf和%lf\n",num1,num2) ;
	
	num3 = (num1 + num2)/2;
	printf("你输入了%.2lf和%lf，生成了%.2lf",num1,num2,num3);
	
	return 0 ;
}
