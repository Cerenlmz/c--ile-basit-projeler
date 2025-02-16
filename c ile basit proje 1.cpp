//GÝRÝLEN SAYININ ASAL SAYI OLUP OLMADIÐINI TESPÝT EDEN PROGRAM
#include<stdio.h>
#include<stdlib.h>

int main(){
int sayi,bolen,mod,sayininYarisi;
sayininYarisi=sayi/2;
printf("Lutfen asal olup olmadigini ogrenmek istediginiz sayiyi giriniz:\n");
scanf("%d",&sayi);
mod=sayi%2;
if(mod==0 && sayi!=2){
	printf("Girmis oldugunuz sayi bir cift sayidir ve asal degildir ");
}
else{
	for (bolen=2;bolen<=sayininYarisi;bolen++);
	mod=sayi%bolen;
	if(mod=0){
		printf("Girdiginiz sayi asal bir sayi degildir");
		
	}
	else
	{
		printf("Girdiginiz sayi asal bir sayidir");
	}
}
	
	return 0;
}
