 #include<stdio.h>
 
 int main(){
 	int sum;
 	//先定义一个变量存储结果 
 	sum = 0;
 	
 	//通过取余是否为0来判断能否被3整除 
	for(int i = 3 ;i<10000;i = i +3){ 
 		if(i%3==0){
 			//若能被3整除则加入变量中 
 			sum = sum + i;
		 }
	}
	
	//输出结果 
	printf("the result is:%d",sum);
	
	return 0;
 } 
