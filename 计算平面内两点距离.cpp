#include<stdio.h>
#include<math.h>

void calcDistance(){
	double distance,x1,x2,y1,y2;
	
	//��ȡ��һ��������� 
	 printf("enter the x1:");
	 scanf("%lf",&x1);
	 printf("enter the y1:");
	 scanf("%lf",&y1);
	 
	 //��ȡ�ڶ���������� 
	 printf("enter the x2:");
	 scanf("%lf",&x2);
	 printf("enter the y2:");
	 scanf("%lf",&y2);
	 
	 //���������ľ��� 
	 distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	 
	 //������ 
	 printf("the distance is:%.4lf",distance);
}

int main(){
calcDistance(); 
	
	return 0 ;
}

 
