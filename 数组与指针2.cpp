#include<stdio.h>

void arrp(int *p,int size){
	 for(int i=0;i<size;i++){
	 	printf("%d\n",*p);
	 	p++;
	 }
}
int main(){
	int size; 
	int arr[]={1,2,3,4,5};
	size = sizeof arr/sizeof arr[0];
	arrp(arr,size);
	return 0;
}
