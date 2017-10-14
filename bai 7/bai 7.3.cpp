// bai 7.3
#include <stdio.h>

void xuat(float a[], int n){
	for (int i=0; i<n; i++) printf("%.2f\t", a[i]);
}

void nhap(float a[], int &n){
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}

int main(){
	float a[100];
	int n;
	nhap(a, n);
	xuat(a, n);
	return 0;
}
