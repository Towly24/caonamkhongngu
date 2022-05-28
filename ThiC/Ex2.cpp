#include<stdio.h>
#include<math.h>
void reverseArray(int* ary, int n){
	for(int i=0;i<n/2;i++){
			int temp = ary[i];
			ary[i]=ary[n-i-1];
			ary[n-i-1]=temp;
	}
}
void showArray(int ary[],int n){
	for(int i= 0;i<n;i++){
		printf("%d ",ary[i]);
	}
}
int main(void){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int temp=0;
	int *ary[100];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]= ",i);
		scanf("%d",&ary[i]);
	}
	reverseArray(ary, n);
}
