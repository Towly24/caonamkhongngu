#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int max=a[0];
	for(int i=0;i<n;i++){
		if(min>=a[i]){
			min=a[i];
		}
		if(max<=a[i]){
			max=a[i];
		}
	}
	int x=0;
	if(abs(min)>=max){
		x=min;
	}
	else{
		x=max;
	}
	printf("gia tri x la %d, doan [-x,x] la doan [%d,%d]",x,-abs(x),abs(x));
}
