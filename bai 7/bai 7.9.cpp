// bai 7.9
#include <stdio.h>
int main(){
	int a[100]={10, 11, 21, 3, 5, 14, 13, 8, 41, 33, 2, 16}, m=12, n, count=0;
	bool nt;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<m; i++){
		nt=1;
		for (int j=2; j<=a[i]/2; j++) if (a[i]%j==0) nt=0;
		if (nt&&a[i]<n){
			count++;
			if (count==1) printf("Cac phan tu la so nguyen to nho hon %d:\n", n);
			printf("%d\t", a[i]);
		}
	}
	if (count==0) printf("Khong co phan tu nao la so nguyen to nho hon %d.", n);
	return 0;
}
