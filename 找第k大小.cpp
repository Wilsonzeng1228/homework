#include <stdio.h>
#include <math.h>

int max1(int *p,int size,int *position){
int max;
max=*p;
int i =0;
//通过全部比大小找出最大值 
while(i!=size){
	//遍历数组，和出现过的最大值比较 
	if (max<p[i]) {
		max=p[i];
	//记录下最大值的位置，方便后面直接修改数组 
		*position=i;
	}
	i++;
}
//输出最大值所在位置 
return *position;}

int min1(int *p,int size){
int min;
min=*p;
int i =0;
//通过全部比大小比出最小值 
while(i!=size){
	if (min>p[i]) {
		min=p[i];
	}
	i++;
}
return min;
}

int max_k(int *p,int k,int size){
	int max,maxk,min,po;
	//获取当前数组最大值所在位置 
	po=max1(p,size,&po);
	//获取当前最大最小值 
	min=min1(p,size);
	maxk=p[po];
	//不断把最大值变成最小值，再找最大值，从而得到第k大的数 
	for(int i=1;i<k;i++){	
	//把数组中最大值变成最小值 
	p[po]=min;
	//获取新的最大值 
	po=max1(p,size,&po);
	maxk=p[po];
	}
	return maxk;
}

int main(){
	//设置初始数组 
	int arr[]={0,1,2,3,4,5,6}; 
	int size=sizeof arr/sizeof arr[0];
	printf("%d\n",max_k(arr,4,size));
return 0;}
