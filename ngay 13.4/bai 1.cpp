#include <stdio.h>
#include <math.h>
//bai1
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			s+=a[i];
			c++;
		}
	}
	float d=s/float(c);
	printf("trung binh cac so le la: %f",d);
}
