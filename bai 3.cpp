#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (abs(a-b)<c){
		if(c<b+a){	
		printf("chu vi tam giac la: %d",a+b+c);
		int p=(a+b+c)/2;
		printf("\ndien tich cua tam giac la: %f",sqrt(p*(p-a)*(p-b)*(p-c)));
		}
		else{
			printf("a,b,c khong la 3 canh cua 1 tam giac ");
		}
	}else{
		printf("a,b,c khong la 3 canh cua 1 tam giac ");
	}

}
