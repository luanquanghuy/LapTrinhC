// bai 7.11
#include <stdio.h>
int main(){
	int a[100], n, sum=0;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for (int i=0; i<n; i++) if (a[i]%2!=0) sum+=a[i];
	printf("Tong cac so le trong mang: %d", sum);
	return 0;
}
