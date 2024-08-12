#include<stdio.h>
#include<string.h>

int main(){
	//设置初始字符串 
	char str1[]="hello";
	//设置空字符串以待复制 
	char str2[100];
	
	//复制字符串 
	strcpy(str2,str1);
	//拼接字符串 
	strcat(str1,str2);
	
	//输出结果 
	printf("result:%s\n",str1);
	
	return 0;
} 
