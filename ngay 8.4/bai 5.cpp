#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int sd=0;
	int s=0;
	while(n>0){
		sd=n%10;
		if(sd>s){
			s=sd;
		}
		n/=10;
	}
	printf("chu so lon nhat cua n la: %d",s);
}
