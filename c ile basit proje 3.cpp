//GIRILEN SAYININ FAKTORIYELINI HESAPLAYAN PROGRAM
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi,i=1,faktoriyel=1;
	printf("Lutfen faktoriyel hesaplamak istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		faktoriyel=faktoriyel*i;
	}
	printf("%d!=%d\n",sayi,faktoriyel);
	return 0;
}
