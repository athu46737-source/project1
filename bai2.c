#include <stdio.h>
#define MAXM 100
#define MAXN 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a [MAXM] [MAXN], m, n, x;
	printf("Tim x trong ma tran\nNhap m n: "); if(scanf("%d %d",&m,&n)!=2) return 0;
	for(int i=0; i<m; i++) for(int j=0; j<n; j++) scanf("%d",&a[i][j]);
	printf("Nhap x can tim: "); scanf("%d",&x);
	for (int i=0; i<m; i++) {
		for(int j=0; j<n; j++){
			if(a[i][j]==x) { printf("Tim thay tai (%d, %d)\n", i, j); return 0; }
		}
	}
	printf("Khong tim thay\n");
	return 0;
}