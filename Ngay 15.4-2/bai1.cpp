#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[1000];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int s=0;
	int t=0;
	for(int i=0;i<n;i++){
		if(s<=abs(a[i]-x)){
			s=abs(a[i]-x);
			t=a[i];
		}
	}
	printf("gia tri xa gia tri x nhat la : %d",t);
}
