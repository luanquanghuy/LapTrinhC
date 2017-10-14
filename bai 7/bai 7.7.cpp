// bai 7.7
#include <stdio.h>
int main(){
	int a[100], n;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	puts("Phan tu chan nho hon 20 la:");
	for (int i=0; i<n; i++) if(a[i]%2==0&&a[i]<20) printf("%d\t", a[i]);
	return 0;
}
