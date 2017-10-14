// bai 7.13
#include <stdio.h>
#include <math.h>
int main(){
	int a[100], n;
	float x, p;
	printf("nhap n: ");
	scanf("%d", &n);
	printf("nhap x: ");
	scanf("%f", &x);
	for (int i=n; i>=0; i--){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	p=0;
	for (int i=n; i>=0; i--) p+=a[i]*pow(x, i);
	printf("P = %.2f", p);
	return 0;
}
