//  bai 7.4
#include <stdio.h>
int main(){
	int a[100], n;
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++) a[i]=0;
	for (int i=0; i<n; i++) printf("a[%d]=%d\n", i, a[i]);
	return 0;
}
