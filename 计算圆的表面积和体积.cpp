#include <stdio.h>
#include<math.h>

int main(){
	double R, S, V, R2,R3; 
	double pi = M_PI;
	
	//��ȡ��İ뾶 
	printf("������뾶��");
	scanf("%lf",&R);
	
	//������������ļ��㷽ʽ 
	R2 =  R*R;
	R3 = R2*R;
	S = 4*pi*R2;
	V = S/3*R;
	
	//������ 
	printf("�����������%.2lf���������%.2lf",S,V);
	
	return 0;
	
	
	
	
	
}
