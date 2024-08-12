#include<stdio.h>
#include<math.h>
#define M 1

//该函数用于计算 
double calc(double Q,double E){
	double a,x;
	int t;
	
	t=0;
	a= Q*E/M;
	//用while循环来计算每一秒位移 
	while(t<15){
		x = a/2*pow(t,2);
		printf("第%d秒时位移为%.2lf米\n",t,x);
		t++;
	}
	
	 
}

int main(){
	double Q,E;
	
	//获取电量和场强 
	printf("enter the Q:");
	scanf("%lf",&Q);
	printf("enter the E:");
	scanf("%lf",&E);
	
	//用输入的数值进行计算 
	calc(Q,E);
	
	return 0;
	
} 
