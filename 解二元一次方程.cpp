#include<stdio.h>
#include<math.h>

//�ú������ڻ�ȡ���� 
void getNumber(double *list){
	double a,b,c;
	printf("���ڼ���һԪ���η��̵���ʽΪ'ax**2 + bx + c = 0'\n");
	printf("������a:"); 
	scanf("%lf",&a);
	printf("������b:");
	scanf("%lf",&b);
	printf("������c:");
	scanf("%lf",&c) ;
	list[0]=a;
	list[1]=b;
	list[2]=c;
} 

//�ú����������� 
void calc(double a,double b,double c){
	double result,result1,result2;

	//a=0ʱ�൱��һԪ���� 
	if(a == 0){
		if(b!=0){
		
			result = -c/b;
			printf("the result is:%.2lf\n",result);
		}
	}
	//a��b������0��ʱ��û��Ҫ���δ֪�� 
		else if(b == 0){
			printf("there is no x!"); 
	} 
	
	//�����б�ʽ���ж�����0�Ĵ�С��ϵ 
	double delta = b*b - 4*a*c;
	//����0��������ʵ���� 
	if(delta > 0 ){
		//�����delta 
	double delta_ = sqrt(delta);
	result1 = (-b+delta_)/2/a;
	result2 = (-b-delta_)/2/a;
	printf("results are %.2lf and %.2lf",result1,result2);
	}
	//����������Ψһʵ�� 
	else if(delta == 0){
		result = -1*b/2/a;
		printf("the result is:%.2lf\n",result);
	}
	//С��0��û��ʵ�� 
	else {
		printf("there is no result");
	}
}

int main(){
	double result,result1,result2;
	double a,b,c;
	
	//����һ�������Դ洢��õĶ��ϵ��
	double list[10];
	//�Ȼ�ȡ����ϵ�� 
	//�Ȼ�ȡ����ϵ�� 
	getNumber(list);
//	�������� 
	calc(list[0],list[1],list[2]);
		 
	return 0; 
}
