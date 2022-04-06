#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	if(n>1&&n<9){
		if(n>=2&&n<=7){
			printf("Day la  thu %d",n);
		}
		else{
			printf("Day la chu nhat");
		}
	}
	else{
		printf("Day khong phai ngay trong tuan");
	}
}
