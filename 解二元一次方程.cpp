#include<stdio.h>
#include<math.h>

//该函数用于获取参数 
void getNumber(double *list){
	double a,b,c;
	printf("现在假设一元二次方程的形式为'ax**2 + bx + c = 0'\n");
	printf("请输入a:"); 
	scanf("%lf",&a);
	printf("请输入b:");
	scanf("%lf",&b);
	printf("请输入c:");
	scanf("%lf",&c) ;
	list[0]=a;
	list[1]=b;
	list[2]=c;
} 

//该函数用来运算 
void calc(double a,double b,double c){
	double result,result1,result2;

	//a=0时相当于一元方程 
	if(a == 0){
		if(b!=0){
		
			result = -c/b;
			printf("the result is:%.2lf\n",result);
		}
	}
	//a和b都等于0的时候没有要求的未知数 
		else if(b == 0){
			printf("there is no x!"); 
	} 
	
	//计算判别式并判断其与0的大小关系 
	double delta = b*b - 4*a*c;
	//大于0则有两个实数根 
	if(delta > 0 ){
		//求根号delta 
	double delta_ = sqrt(delta);
	result1 = (-b+delta_)/2/a;
	result2 = (-b-delta_)/2/a;
	printf("results are %.2lf and %.2lf",result1,result2);
	}
	//等于零则有唯一实根 
	else if(delta == 0){
		result = -1*b/2/a;
		printf("the result is:%.2lf\n",result);
	}
	//小于0则没有实根 
	else {
		printf("there is no result");
	}
}

int main(){
	double result,result1,result2;
	double a,b,c;
	
	//设置一个数组以存储获得的多个系数
	double list[10];
	//先获取方程系数 
	//先获取方程系数 
	getNumber(list);
//	进行运算 
	calc(list[0],list[1],list[2]);
		 
	return 0; 
}
