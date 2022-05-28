#include<stdio.h>
#include<math.h>
void sum(int a,int b){
	printf("Tong 2 so la: %d\n",a+b);	
}
void sub(int a, int b){
	printf("Hieu 2 so la: %d\n",a-b);	
}
void multi(int a, int b){
	printf("Tich 2 so la: %d\n",a*b);
}
void div(int a,int b){
	if(b==0){
		printf("khong co gia tri thuong\n");
	}else{
		printf("thuong 2 so la : %lf\n",double(a)/b);
	}
}
void menu(){
	printf("TINH TOAN\n");
	printf("=================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh tong\n");
	printf("3. Tinh hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh thuong\n");
	printf("6. Thoat\n");
	printf("=================\n");
	printf("Chon:    ");
}
int main(){
	int m;
	do{
		menu();
		scanf("%d",&m);
		switch(m){
		case 1:
			int a,b;
			printf("Nhap a va b: ");
			scanf("%d%d",&a,&b);
		break;
		case 2:
			sum(a,b);
		break;
		case 3:
			sub(a,b);
		break;
		case 4:
			multi(a,b);
		break;
		case 5:
			div(a,b);
		break;
	}
	}while(m!=6);
}
