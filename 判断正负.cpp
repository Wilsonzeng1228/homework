#include<stdio.h>

int main(){
	double num;
	
	printf("enter a number:") ;
	scanf("%.lf",num);
	
	if (num >= 0){
		printf("���Ǹ�����");
	}
	
	else if (num <= 0){
		printf("���Ǹ�����");
	}
	
	else{
		printf("����0");
	}
	
	return 0;
}
