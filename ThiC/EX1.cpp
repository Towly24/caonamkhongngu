#include<stdio.h>
#include<math.h>
float tinhtong(int n){
	float s=0;
	for(int i=1;i<=n;i++){
		s+=1/float(i);
	}
	return s;
}
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<1);
	printf("Tong so nguyen vua nhap la: %f",tinhtong(n));
}
