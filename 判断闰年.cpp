#include<stdio.h>

int main(){               
	 int year;
	 
	 //获取要判断的年份
	 printf("enter a year number:");
	 scanf("%d",&year);
	 
	 //闰年的基础判断规则是能否被四整除
	 if (year%4 ==0){
	 	
	 	if(year%400 != 0){ 
	 	printf("这是普通闰年");}
	 	//闰年的一种特殊分类是能同时被100整除
	 	else{
	 		printf("这是世纪闰年");
		 }
	 }
	 //不符合上述条件的都是平年
	 else{
	 	printf("这是平年");
	 	
	 	return 0;
	 }
	 
	 return 0;
}
