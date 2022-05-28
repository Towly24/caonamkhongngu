#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	char a[n][50];
	for(int i=0;i<n;i++){
		printf("chuoi %d = ",i);
		scanf("%s",&a[i]);
	}
	char s[50];
	printf("Nhap chuoi so sanh: ");
	scanf("%s",s[50]);
	int c;
	for(int i=0;i<n;i++){
		if(strcmp(a[i],s) == 0){
			printf("chuoi nay co trong danh sach");
		}
	}
	if(c>0){
		printf("chuoi nay co trong danh sach");
	}else{
		printf("chuoi nay khong co trong danh sach");
	}
}
