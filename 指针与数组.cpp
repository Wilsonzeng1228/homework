#include<stdio.h>

int main(){
	int arr[6];
	int tem,size;
	for(int i =0;i<6;i++){
		printf("enter an int:");
		scanf("%d",&tem);
		arr[i]=tem;
	}
	size=sizeof arr/sizeof arr[0];
	int *p=&arr[0];
	for(int j =0;j<size;j++){
		printf("%d\n",*p);
		p++;
	}
	
	return 0;}

