#include <stdio.h>
#include <math.h>

int max1(int *p,int size,int *position){
int max;
max=*p;
int i =0;
//ͨ��ȫ���ȴ�С�ҳ����ֵ 
while(i!=size){
	//�������飬�ͳ��ֹ������ֵ�Ƚ� 
	if (max<p[i]) {
		max=p[i];
	//��¼�����ֵ��λ�ã��������ֱ���޸����� 
		*position=i;
	}
	i++;
}
//������ֵ����λ�� 
return *position;}

int min1(int *p,int size){
int min;
min=*p;
int i =0;
//ͨ��ȫ���ȴ�С�ȳ���Сֵ 
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
	//��ȡ��ǰ�������ֵ����λ�� 
	po=max1(p,size,&po);
	//��ȡ��ǰ�����Сֵ 
	min=min1(p,size);
	maxk=p[po];
	//���ϰ����ֵ�����Сֵ���������ֵ���Ӷ��õ���k����� 
	for(int i=1;i<k;i++){	
	//�����������ֵ�����Сֵ 
	p[po]=min;
	//��ȡ�µ����ֵ 
	po=max1(p,size,&po);
	maxk=p[po];
	}
	return maxk;
}

int main(){
	//���ó�ʼ���� 
	int arr[]={0,1,2,3,4,5,6}; 
	int size=sizeof arr/sizeof arr[0];
	printf("%d\n",max_k(arr,4,size));
return 0;}
