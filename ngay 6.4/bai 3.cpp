#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int i=1;
	int s=0;
	while(i<n){
		if(n%i==0){
			s=s+i;
		}
		i++;
	}	
	if(s-n==0){
		printf("n la so hoan hao");
	}
	else{
		printf("n khong phai la so hoan hao");
	}
}
