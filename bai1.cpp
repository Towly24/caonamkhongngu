#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min=0;
	min=a;
	if(min>b){
		min=b;
	}
	if(min>c){
		min=c;
	}
	printf("so nho nhat la: %d",min);
}
