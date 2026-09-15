#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAXM 100
#define MAXN 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


bool isPrime(int x){
    if(x<2) return false;
    if(x%2==0) return x==2;
    for(int i=3;i<= (int)sqrt(x); i+=2) if(x%i==0) return false;
    return true;
}

int main(){
    int a[MAXM][MAXN], m,n;
    printf("In cac so nguyen to\nNhap m n: "); if(scanf("%d %d",&m,&n)!=2) return 0;
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("Cac so nguyen to: ");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(isPrime(a[i][j])) printf("%d ", a[i][j]);
    printf("\n");
    return 0;
}
