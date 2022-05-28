#include<stdio.h>
#include<string.h>
int slsv(int n){
	return n;
}
void dstsv(char a,int n){
	for(int i=0;i<n;i++){
		scanf("%c",a[i]);
	}
}
void sx(char a,int n){
	char tmp[50];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(a[j+1],a[j])<0){
				strcpy(tmp, a[j+1]);
				strcpy(a[j+1], a[j]);
				strcpy(a[j], tmp);
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap so luong sinh vien cua lop: ");
	scanf("%d",n);
	dstsv(n);
	char a[n][50];
	
}
