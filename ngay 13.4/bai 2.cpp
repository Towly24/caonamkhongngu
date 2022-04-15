#include <stdio.h>
#include <math.h>
//bai2
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	int c=0;
	for(int i=0;i<n;i++){
		if(i%2==0&&a[i]%2==1){
			s+=a[i];
			c++;
		}
	}
	if (c>0){
		float d=s/float(c);
	printf("trung binh cac so le la: %f",d);
	}else{
		printf("khong co so le o vi tri chan");
	}
}
