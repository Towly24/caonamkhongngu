#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[100];
	int temp=0;
	for(int i=0;i<n;i++){
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]%2!=0&&a[j]%2!=0&&a[i]<a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
