#include<stdio.h>
#include<string.h>

int main(){
	//���ó�ʼ�ַ��� 
	char str1[]="hello";
	//���ÿ��ַ����Դ����� 
	char str2[100];
	
	//�����ַ��� 
	strcpy(str2,str1);
	//ƴ���ַ��� 
	strcat(str1,str2);
	
	//������ 
	printf("result:%s\n",str1);
	
	return 0;
} 
