#include<stdio.h>
int main(){
	int a,b;
	do{
		printf("Nhap a: ");
		scanf("%d",&a);
		printf("Nhap b: ");
		scanf("%d",&b);
	}while(a>b);
	printf("cac so nguyen to trong khoang tu a den b la: ");
	for(int i=a;i<=b;i++){
		int t=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				t++;
			}
		}
		if(t==2){
				printf("%d ",i);
			}
	}
}
