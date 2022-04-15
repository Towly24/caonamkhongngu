#include <stdio.h>
#include <math.h>
//bai5
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			min=a[i];
			break;
		}
	}
	for(int i=0; i<n;i++){
		if(a[i]>0&&a[i]<=min){
			min=a[i];
		}
	}
	printf("so duong nho nhat la: %d",min);
}
