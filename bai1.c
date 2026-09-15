#include <stdio.h>
#define MAXM 100
#define MAXN 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a [MAXM] [MAXN];
	int m, n;
	printf("Nhap va xuat mang so nguyen\n");
	printf("Nhap m n: "); if(scanf("%d %d", &m,&n)!=2) return 0;
	printf("Nhap %d x %d phan tu: \n", m, n);
	for(int i = 0; i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	printf("Ma tran vua nhap:\n");
	for(int i=0; i<m;i++){
		for(int j=0; j<n;j++) printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
}