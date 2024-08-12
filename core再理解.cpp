#include<stdio.h>

void f(int a){
	int *p;
	//获取输入函数的参数的指针地址 
	p=&a;
	printf("value:%d\n",*p);
	printf("address:%p\n",p);

//修改指针地址对应的变量 
	*p = *p +20;
printf("value:%d\n",*p);
	printf("address:%p\n",p);

}
int main(){
	f(30);	
	return 0;
}
