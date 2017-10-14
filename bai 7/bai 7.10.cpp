// bai 7.10 
#include <stdio.h>
#include <math.h>
int main(){
	int a[100], n;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("Cac phan tu la so chinh phuong va nam tai vi tri le trong mang:\n");
	for (int i=0; i<n; i++) if (sqrt(a[i])*sqrt(a[i])==a[i]&&i%2!=0) printf("a[%d] = %d\n", i, a[i]);
	return 0;
}
