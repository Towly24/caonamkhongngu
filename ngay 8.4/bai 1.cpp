#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int tong=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			tong+=i;
		}
	}
	printf("tong uoc cua n la: %d",tong);
}
