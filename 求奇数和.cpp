#include<stdio.h>
int main(){
	int sum=0;
	
	for(int i=1;i <=10000;i=i+1){
		if(i%2 != 0){
			sum = sum+i;}
	}
	
	printf("the result is:%d\n",sum);
	
	return 0;
}
