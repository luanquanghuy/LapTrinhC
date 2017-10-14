// bai 7.15
#include <stdio.h>
int main(){
	int a[100], n, position, x;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("nhap phan tu can tim kiem: ");
	scanf("%d", &x);
	position=-1;
	for (int i=0; i<n; i++) if (a[i]==x){
		position=i;
		printf("a[%d] = %d\n", position, x);
	}
	if (position==-1) puts("Khong thay phan tu can tim.");
	return 0;
}
