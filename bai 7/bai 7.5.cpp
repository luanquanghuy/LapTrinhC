// bai 7.5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int a[1000], n;
	printf("nhap n: ");
	scanf("%d", &n);
// Hàm void srand(unsigned int seed)
// Hàm này cung cap seed cho bo sinh so ngau nhiên duoc su dung boi hàm rand()
	srand(time(NULL));//Hàm time_t time(time_t *seconds) tra ve thoi gian tu Epoch (00:00:00 1/1/1970 theo UTC), duoc uoc luong bang giay
	for(int i=0; i<n; i++){
		a[i]=-rand()%100-1;
	}
	for (int i=0; i<n; i++) printf("%d\t", a[i]);
	return 0;
}
