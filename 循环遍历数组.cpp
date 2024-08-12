#include<stdio.h>
int main(){
	int j;
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);

	for (int i=0;i<size;i++){
		printf("%d",arr[i]);
	}

	printf("\n");
	
	j = 0;
	while(j<size){
		printf("%d",arr[j]);
		j++;
	}
	
	return 0;
}
