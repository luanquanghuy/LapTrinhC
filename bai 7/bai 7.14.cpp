// bai 7.14
#include <stdio.h>
#include <math.h>

void soChinhPhuong(int a[], int n){
	int cp[n], count=0, sum=0;
	for (int i=0; i<n; i++){
		if (sqrt(a[i])*sqrt(a[i])== a[i]) {
			count++;
			cp[count]=a[i];
			sum+=a[i];
		}
	}
	printf("\nCo %d so chinh phuong\nTong cac so chinh phuong la %d\nCac so chinh phuong:\t", count, sum);
	while(count!=0){
		printf("%d\t", cp[count]);
		count--;
	}
}

void soNguyenTo(int a[], int n){
	int nt[n], count=0, sum=0;
	bool ok;
	for (int i=0; i<n; i++){
		ok=1;
		for (int j=2; j<=a[i]/2; j++) if (a[i]%j==0) ok=0;
		if (ok&&a[i]!=1) {
			count++;
			nt[count]=a[i];
			sum+=a[i];
		}
	}
	printf("Co %d so nguyen to\nTong cac so nguyen to la %d\nCac so nguyen to:\t", count, sum);
	while(count!=0){
		printf("%d\t", nt[count]);
		count--;
	}
}

int main(){
	int a[100], n;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	soNguyenTo(a, n);
	soChinhPhuong(a, n);
	return 0;
}
