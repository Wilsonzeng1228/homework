#include<stdio.h>

void f(int a){
	int *p;
	//��ȡ���뺯���Ĳ�����ָ���ַ 
	p=&a;
	printf("value:%d\n",*p);
	printf("address:%p\n",p);

//�޸�ָ���ַ��Ӧ�ı��� 
	*p = *p +20;
printf("value:%d\n",*p);
	printf("address:%p\n",p);

}
int main(){
	f(30);	
	return 0;
}
