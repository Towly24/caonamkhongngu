#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int i=0;
	while (i<n){
		if(i%2==0 && i%3==0){
			printf("%d ",i );
		}
		i++;
	}
}

