#include<stdio.h>
#include<math.h>
#define GRAVIVTY 9.80

//�ú������ڼ�����ٶ�0ʱ��ĳ�߶�����������ʱ 
void calc(double height){
	double time,time_;
	time_ = 2*height/GRAVIVTY;
	time = sqrt(time_);
	printf("the time is:%.2lf",time);
}

int main(){
	double height;
	//��ȡҪ����ĸ߶� 
	printf("enter the height:");
	scanf("%lf",&height);
	
	//���м��� 
	calc(height);
	
	return 0;
}
