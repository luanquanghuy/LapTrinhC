// bai 7.8
#include <stdio.h>
int main(){
	int a[100], n;
	bool nt;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	puts("Cac phan tu la so nguyen to:");
	for (int i=0; i<n; i++){
		nt=1;
		for (int j=2; j<=a[i]/2; j++) if (a[i]%j==0) nt=0;
		if (nt) printf("%d\t", a[i]);
	}
	return 0;
}
