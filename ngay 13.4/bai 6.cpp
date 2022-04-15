#include <stdio.h>
#include <math.h>
//bai6
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	int s1=0;
	for(int i=0;i<n;i++){
		s++;
		if(a[i]<0){
			s=0;
			continue;
		}
		if(s>=s1){
			s1=s;
		}
	}
	printf("so luong cac so duong lien tiep la: %d",s1);
}
