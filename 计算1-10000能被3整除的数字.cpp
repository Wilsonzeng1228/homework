 #include<stdio.h>
 
 int main(){
 	int sum;
 	//�ȶ���һ�������洢��� 
 	sum = 0;
 	
 	//ͨ��ȡ���Ƿ�Ϊ0���ж��ܷ�3���� 
	for(int i = 3 ;i<10000;i = i +3){ 
 		if(i%3==0){
 			//���ܱ�3�������������� 
 			sum = sum + i;
		 }
	}
	
	//������ 
	printf("the result is:%d",sum);
	
	return 0;
 } 
