#include<stdio.h>
#include<math.h>
#define M 1

//�ú������ڼ��� 
double calc(double Q,double E){
	double a,x;
	int t;
	
	t=0;
	a= Q*E/M;
	//��whileѭ��������ÿһ��λ�� 
	while(t<15){
		x = a/2*pow(t,2);
		printf("��%d��ʱλ��Ϊ%.2lf��\n",t,x);
		t++;
	}
	
	 
}

int main(){
	double Q,E;
	
	//��ȡ�����ͳ�ǿ 
	printf("enter the Q:");
	scanf("%lf",&Q);
	printf("enter the E:");
	scanf("%lf",&E);
	
	//���������ֵ���м��� 
	calc(Q,E);
	
	return 0;
	
} 
