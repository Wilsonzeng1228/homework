#include<stdio.h>

int main(){
	int result;
	
	for(int i=1;i<=9;i++){
		for (int j = i;j<=9;j++){
			result = i *j;
			printf("%d * %d = %d\n",i,j,result);
		}
	}
	

	
	return 0;
}
