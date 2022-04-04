#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d=b*b-4*a*c;
	if(d>0){
		d=sqrt(d);
		printf("phuong trinh co 2 nghiem x1= %f va x2= %f",(-b+d)/2*c,(-b-d)/2*c);
	}
	else if(d==0){
		printf("phuong trinh co 1 nghiem x1=x2=%f",-b/2*a);
	}else{
		printf("phuong trinh vo nghiem");
	}

}
