#include<stdio.h>
int main()
{
	int n,i;
	int tong=0;
	printf("Nhan n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		tong=tong+(i*i*i);
	}
	printf("\nTong cua bieu thuc la: %d",tong);
}
