// bai 7.16-7.29
#include <stdio.h>

void bai29(int a[], int n){
	int temp;
	for(int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) if(a[i]<a[j]&&a[i]%2==0&&a[j]%2==0) {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

void bai28(int a[], int n){
	int temp;
	for(int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) if(a[i]>a[j]&&a[i]%2!=0&&a[j]%2!=0) {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

void bai27(int a[], int n){
	int temp;
	for(int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) if(a[i]<a[j]) {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

int bai26(int a[], int n){
	int sum=0;
	bool ok;
	for (int i=0; i<n; i++){
		ok=1;
		for (int j=2; j<=a[i]/2; j++) if (a[i]%j==0) ok=0;
		if (ok&&a[i]!=1) sum+=a[i];
	}
	return sum;
}

int bai25(int a[], int n){
	int sum=0;
	for (int i=0; i<n; i++) if(a[i]%2!=0) sum+=a[i];
	return sum;
}

int bai24(int a[], int n){
	int sum=0;
	for (int i=0; i<n; i++) if(a[i]%2==0) sum+=a[i];
	return sum;
}

int bai23(int a[], int n){
	int count=0;
	bool ok;
	for (int i=0; i<n; i++){
		ok=1;
		for (int j=2; j<=a[i]/2; j++) if (a[i]%j==0) ok=0;
		if (ok&&a[i]!=1) count++;
	}
	return count;
}

int bai22(int a[], int n){
	int x, count=0;
	printf("Nhap phan tu can tim: ");
	scanf("%d", &x);
	for (int i=0; i<n; i++) if(a[i]==x) count++;
	return count;
}

void bai21(int a[], int n){
	int am=0, duong=0;
	for (int i=0; i<n; i++){
		if (a[i]<0) am++;
		else duong++;
	}
	printf("So phan tu la so am la: %d\nSo phan tu la so duong la: %d", am, duong);
}

void bai20(int a[], int n){
	puts("Phan tu la boi cua 3 va 5:");
	for (int i=0; i<n; i++) if(a[i]%3==0||a[i]%5==0) printf("%d\t", a[i]);
}

int bai19(int a[], int n){
	int position=-1;
	for (int i=0; i<n; i++){
		if (position==-1&&a[i]<0) position=i;
		if (a[i]<0&&a[i]>a[position]) position=i;
	}
	return position;
}

void bai18(int a[], int n){
	bool ok;
	puts("Vi tri cac phan tu la so nguyen to:");
	for (int i=0; i<n; i++){
		ok=1;
		for (int j=2; j<=a[i]/2; j++) if (a[i]%j==0) ok=0;
		if (ok&&a[i]!=1) printf("%d\t", i);
	}
}

int bai17(int a[], int n){
	int position=0;
	for (int i=0; i<n; i++) if(a[i]<a[position]) position=i;
	return position;
}

int bai16(int a[], int n){
	int x;
	int position=-1;
	printf("nhap phan tu can tim kiem: ");
	scanf("%d", &x);
	position=-1;
	for (int i=0; i<n; i++) if (a[i]==x){
		position=i;
	}
	return position;
}

int main(){
	int a[100], n;
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("%d", bai23(a, n));
//	bai21(a, n);
	return 0;
}
