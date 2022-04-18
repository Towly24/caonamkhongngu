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
	printf("doan[a,b] la doan [%d,%d]",min,max);
}
