// bai 7.2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void pauseScreen(){
	printf("\n");
	system("pause");
	system("cls");
}

void swap(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void sapXepMangTangDan(int a[], int n){
	for(int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) if(a[i]>a[j]) swap(a[i], a[j]);
}

void hamThu15(int a[], int n){
	int p, q, mangSaoChep[n], count=0;
	for (int i=0; i<n; i++) mangSaoChep[i]=a[i];
	do{
	printf("nhap doan p, q: ");
	scanf("%d%d", &p, &q);
	}while (p>=q);
	sapXepMangTangDan(mangSaoChep, n);
	printf("Vi tri cac phan tu chan nam trong doan [%d, %d] la:\n", p, q);
	for (int i=0; i<n; i++) if(mangSaoChep[i]>=p&&mangSaoChep[i]<=q&&mangSaoChep[i]%2==0){
		for (int j=0; j<n; j++) if(a[j]==mangSaoChep[i]) printf("a[%d] = %d\n", j, a[j]);
		count++;
	}
	printf("So luong cac phan tu chan nam trong doan [%d, %d] la: %d", p, q, count);
	pauseScreen();
}

void soLeTangDan(int a[], int n){
	int b[n];
	for (int i=0; i<n; i++) b[i]=abs(a[i]);
	sapXepMangTangDan(b, n);
	printf("So le theo thu tu tri tuyet doi tang dan: ");
	for (int i=0; i<n; i++) if(b[i]%2!=0) printf("%d\t", b[i]);
	printf("\nSo chan theo thu tu tri tuyet doi giam dan: ");
	for (int i=n-1; i>=0; i--) if(b[i]%2==0) printf("%d\t", b[i]);
	pauseScreen();
}


void inSoChinhPhuong(int a[], int n){
	bool cp;
	printf("Cac so chinh phuong la: ");
	for (int i=0; i<n; i++){
		cp=0;
		if((int)sqrt(a[i])*(int)sqrt(a[i])==a[i]) cp=1;
		if (cp) printf("%d\t");
	}
	pauseScreen();
}

void tongSoChinhPhuong(int a[], int n){
	int tong=0;
	for (int i=0; i<n; i++) if ((int)sqrt(a[i])*(int)sqrt(a[i])==a[i]) tong+=a[i];
	printf("Tong cac so chinh phuong la %d", tong);
	pauseScreen();
}

void trungBinhSoLe(int a[], int n){
	int tong=0, count=0;
	for (int i=0; i<n; i++) if(a[i]%2!=0){
		tong+=a[i];
		count++;
	}
	printf("Trung binh cong cac phan tu le la %.2f", (float)tong/count);
	pauseScreen();
}

void tinhTongChanChia3(int a[], int n){
	int tong=0;
	for (int i=0; i<n; i++) if (a[i]%6==0) tong+=a[i];
	printf("Tong cac phan tu chan chia het cho 3 la %d", tong);
	pauseScreen();
}

void trungBinhSoNguyenTo(int a[], int n){
	bool nt;
	int tong=0, count=0;
	for (int i=0; i<n; i++){
		nt=1;
		for (int j=2; j<=a[i]/2; j++) if(a[i]%j==0) nt=0;
		if (nt) {
			count++;
			tong+=a[i];
		}
	}
	printf("Trung binh cong cac so nguyen to trong mang la %.2f", (float)tong/count);
	pauseScreen();
}

void demSoNguyenTo(int a[], int n){
	bool nt;
	int count=0;
	for (int i=0; i<n; i++){
		nt=1;
		for (int j=2; j<=a[i]/2; j++) if(a[i]%j==0) nt=0;
		if (nt) count++;
	}
	printf("Co %d so nguyen to trong mang.", count);
	pauseScreen();
}

void inSoNguyenTo(int a[], int n){
	bool nt;
	printf("So nguyen to trong mang: ");
	for (int i=0; i<n; i++){
		nt=1;
		for (int j=2; j<=a[i]/2; j++) if(a[i]%j==0) nt=0;
		if (nt) printf("%d\t", a[i]);
	}
	pauseScreen();
}

void timChiSoMin(int a[], int n){
	int chiSo, min=a[0];
	for (int i=0; i<n; i++) if (a[i]<=min) chiSo=i;
	printf("Gia tri min a[%d]=%d", chiSo, a[chiSo]);
	pauseScreen();
}

void timChiSoMax(int a[], int n){
	int chiSo, max=a[0];
	for (int i=0; i<n; i++) if (a[i]>=max) chiSo=i;
	printf("Gia tri max a[%d]=%d", chiSo, a[chiSo]);
	pauseScreen();
}

void timGiaTriMax(int a[], int n){
	int max=a[0];
	for (int i=0; i<n; i++) if (a[i]>max) max=a[i];
	printf("Gia tri max %d", max);
	pauseScreen();
}

void inMang(int a[], int n){
	for (int i=0; i<n; i++) printf("a[%d]=%d\n", i, a[i]);
	pauseScreen();
}

void nhapMang(int a[], int &n){
	do{
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	}while(n<=0);
	for (int i=0; i<n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	pauseScreen();
}

int main(){
	int a[100], n, choose;
	while(choose!=0){
		printf("\n1.Nhap mang\n2.In mang\n3.Gia tri Max\n4.Gia tri va chi so Max\n5.Gia tri va chi so Min\n6.In so nguyen to\n7.Dem so nguyen to\n8.Trung binh so nguyen to\n9.Tong cac phan tu chan chia het 3\n10.Trung binh cong cac phan tu le\n11.Tong cac so chinh phuong\n12.Liet ke cac so chinh phuong\n13.Sap xep mang theo thu tu tang dan\n14.In so le co tri tuyet doi tang dan, cac so chan tri tuyet doi gian dan\n15.So luong va vi tri cac phan tu chan nam trong doan p va q\n0.Exit\nChoose: ");
nhap:
		scanf("%d", &choose);
		switch (choose){
			case 1:
				nhapMang(a, n);
				break;
			case 2:
				inMang(a, n);
				break;
			case 3:
				timGiaTriMax(a, n);
				break;
			case 4:
				timChiSoMax(a, n);
				break;
			case 5:
				timChiSoMin(a, n);
				break;
			case 6:
				inSoNguyenTo(a, n);
				break;
			case 7:
				demSoNguyenTo(a, n);
				break;
			case 8:
				trungBinhSoNguyenTo(a, n);
				break;
			case 9:
				tinhTongChanChia3(a, n);
				break;
			case 10:
				trungBinhSoLe(a, n);
				break;
			case 11:
				tongSoChinhPhuong(a, n);
				break;
			case 12:
				inSoChinhPhuong(a, n);
				break;
			case 13:
				sapXepMangTangDan(a, n);
				printf("Da sap xep xong.");
				pauseScreen();
				break;
			case 14:
				soLeTangDan(a, n);
				break;
			case 15:
				hamThu15(a, n);
				break;
			case 0: return 0;
			default: printf("Nhap khong dung! Nhap lai: "); goto nhap;
		}
	}
}
