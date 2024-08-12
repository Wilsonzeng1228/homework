#include <stdio.h>
#include<math.h>

int main(){
	double R, S, V, R2,R3; 
	double pi = M_PI;
	
	//获取球的半径 
	printf("请输入半径：");
	scanf("%lf",&R);
	
	//球的面积和体积的计算方式 
	R2 =  R*R;
	R3 = R2*R;
	S = 4*pi*R2;
	V = S/3*R;
	
	//输出结果 
	printf("这个球的面积是%.2lf，表面积是%.2lf",S,V);
	
	return 0;
	
	
	
	
	
}
