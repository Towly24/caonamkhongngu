#include <stdio.h>
#include <math.h>
//bai 3
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int s=0;
	int c=0;
	for(int i=0;i<n;i++){
		s=a[i]-x;
		if(s==0){
			printf("x co trong mang");
			c++;
			break;
		}
	}
	if(c==0){
		printf("x khong co trong mang");
	}
}
