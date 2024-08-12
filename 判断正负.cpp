#include<stdio.h>

int main(){
	double num;
	
	printf("enter a number:") ;
	scanf("%.lf",num);
	
	if (num >= 0){
		printf("这是个正数");
	}
	
	else if (num <= 0){
		printf("这是个负数");
	}
	
	else{
		printf("这是0");
	}
	
	return 0;
}
