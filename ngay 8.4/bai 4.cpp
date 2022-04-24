#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int sd=0;
	int s=0;
	while(n>0){
		sd=n%10;
		if(n<10){
			s+=sd;
		}
		n/=10;
	}
	printf("chu so dau tien cua n la: %d",s);
}
