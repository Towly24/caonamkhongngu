#include <stdio.h>
#include <math.h>
//bai4
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	int s1=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			s1=s;
			s+=a[i]-s1;
		}
	}
	printf("so le cuoi cung la:%d",s);
}
