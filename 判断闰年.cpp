#include<stdio.h>

int main(){               
	 int year;
	 
	 //��ȡҪ�жϵ����
	 printf("enter a year number:");
	 scanf("%d",&year);
	 
	 //����Ļ����жϹ������ܷ�������
	 if (year%4 ==0){
	 	
	 	if(year%400 != 0){ 
	 	printf("������ͨ����");}
	 	//�����һ�������������ͬʱ��100����
	 	else{
	 		printf("������������");
		 }
	 }
	 //���������������Ķ���ƽ��
	 else{
	 	printf("����ƽ��");
	 	
	 	return 0;
	 }
	 
	 return 0;
}
