#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int sd=0;
	int s=0;
	while(n>0){
		sd=n%10;
		s=s*10+sd;
		n=n/10;
	}
	printf("so dao nguoc cua n la: %d",s);
}
