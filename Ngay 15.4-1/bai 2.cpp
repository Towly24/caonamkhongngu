#include<stdio.h>
#include<math.h>
//bai 2
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[1000];
	int temp=0;
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
