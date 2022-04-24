#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int sd,s,t;
	while(n>0){
		sd=n%10;
		if(sd%2==0){
			printf("n co chu so chan");
			t++;
		}else{
			s++;
		}
		n=n/10;
	}
	if(t==1){
		printf("n toan chu so le ");
	}
}
