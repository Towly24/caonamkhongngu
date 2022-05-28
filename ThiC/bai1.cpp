#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	float s;
	for(int i=1;i<=n;i++){
		s+=1/float(i);
	}
	printf("%f",s);
}
