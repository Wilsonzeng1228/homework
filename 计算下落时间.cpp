#include<stdio.h>
#include<math.h>
#define GRAVIVTY 9.80

//该函数用于计算初速度0时从某高度自由落体用时 
void calc(double height){
	double time,time_;
	time_ = 2*height/GRAVIVTY;
	time = sqrt(time_);
	printf("the time is:%.2lf",time);
}

int main(){
	double height;
	//获取要计算的高度 
	printf("enter the height:");
	scanf("%lf",&height);
	
	//进行计算 
	calc(height);
	
	return 0;
}
