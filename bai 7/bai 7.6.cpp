// bai 7.6
#include <stdio.h>
int main(){
	int a[100], n;
	// nhap mang
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]:", i);
		scanf("%d", &a[i]);
	}
	printf("Cac phan tu le trong mang la:\t");
	// in ra so le trong mang
	for(int i=0; i<n; i++){
		if (a[i]%2!=0) printf("%d\t", a[i]);
	}
	return 0;
}
