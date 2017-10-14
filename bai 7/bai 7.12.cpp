// bai 7.12
#include <stdio.h>
int main(){
	int a[100], n, temp;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
		if (a[i]>a[j]) {
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	puts("Mang sap xep theo thu tu tang dan:");
	for (int i=0; i<n; i++) printf("%d\t", a[i]);
	return 0;
}
