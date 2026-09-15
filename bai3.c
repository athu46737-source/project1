#include <stdio.h>
#define MAXM 100
#define MAXN 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
    int a[MAXM][MAXN], m,n,i,j,x;
    printf("Cap nhat phan tu\nNhap m n: "); if(scanf("%d %d",&m,&n)!=2) return 0;
    for(int r=0;r<m;r++) for(int c=0;c<n;c++) scanf("%d",&a[r][c]);
    printf("Nhap i j x: "); if(scanf("%d %d %d",&i,&j,&x)!=3) return 0;
    if(i<0||i>=m||j<0||j>=n){ printf("Chi so khong hop le\n"); return 0; }
    a[i][j] = x;
    printf("Ma tran sau khi cap nhat:\n");
    for(int r=0;r<m;r++){ for(int c=0;c<n;c++) printf("%d ", a[r][c]); printf("\n"); }
    return 0;
}