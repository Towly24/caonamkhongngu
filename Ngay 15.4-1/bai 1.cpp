#include<stdio.h>
#include<math.h>
//bai 1
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[1000];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				do{printf("Nhap lai a[%d]= ",i);
				scanf("%d",&a[i]);
				}
				while(a[i]==a[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		
	}
}
