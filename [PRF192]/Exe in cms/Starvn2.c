//m le
//n chan
#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j;
	printf("Nhap n: ");
	scanf("%d",&n);
	int m;
	printf("\nNhap m: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i==1 || i==n || j==1 || j==m || j==((m/2)+1)){
				printf("*");
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
