//GIRILEN DORT BASAMAKLI SAYIYI YAZAN PROGRAM 
#include<stdio.h>
#include<stdlib.h>
void birlikCevir(int);
void onlukCevir(int);
void yuzlukCevir(int);
void binlikCevir(int);

void birlikCevir(int birler){
	switch(birler){
	
	case 1:printf("bir");break;
		case 2:	printf("iki");break;
		case 3:printf("uc");break;
		case 4:printf("dort");break;
		case 5:printf("bes");break; 
		case 6:printf("alti");break;
		case 7:printf("yedi");break;
		case 8:printf("sekiz");break;
		case 9:printf("dokuz");break;
		default:break;
	}
}
void onlukCevir(int onlar){
	switch(onlar){
	
	case 10:printf("on");break;
		case 20:	printf("yirmi");break;
		case 30:printf("otuz");break;
		case 40:printf("kirk");break;
		case 50:printf("elli");break; 
		case 60:printf("altmis");break;
		case 70:printf("yetmis");break;
		case 80:printf("seksen");break;
		case 90:printf("doksan");break;	
		default:break;
	}
}
void yuzlukCevir(int yuzler){
	switch(yuzler){
	
	case 100:printf("yuz");break;
		case 200:	printf("iki yuz");break;
		case 300:printf("uc yuz");break;
		case 400:printf("dort yuz");break;
		case 500:printf("bes yuz");break; 
		case 600:printf("alti yuz");break;
		case 700:printf("yedi yuz");break;
		case 800:printf("sekiz yuz");break;
		case 900:printf("dokuz yuz");break;	
		default:break;
	}
}
void binlikCevir(int binler){
	switch(binler){
	
	case 1000:printf("bin");break;
		case 2000:	printf("iki bin");break;
		case 3000:printf("uc bin");break;
		case 4000:printf("dort bin");break;
		case 5000:printf("bes bin");break; 
		case 6000:printf("alti bin");break;
		case 7000:printf("yedi bin");break;
		case 8000:printf("sekiz bin");break;
		case 9000:printf("dokuz bin");break;
		default:break;
	}
} 

int main(){
	int sayi,binler,yuzler,onlar,birler;

	
	printf("Lutfen yazdirmak istediginiz dort basamakli sayiyi giriniz:\n");
	scanf("%d",&sayi);
		binler=(sayi/1000)*1000;
	yuzler=((sayi%1000)/100)*100;
	onlar=((sayi%100)/10)*10;
	birler=sayi%10;
	


	
	if(sayi>=1000 && sayi<10000){
	if (binler != 0) { binlikCevir(binler); printf(" "); }
        if (yuzler != 0) { yuzlukCevir(yuzler); printf(" "); }
        if (onlar != 0) { onlukCevir(onlar); printf(" "); }
        if (birler != 0) { birlikCevir(birler); }
		
	}
	else{
		printf("Lutfen gecerli bir sayi giriniz!!");
	}
	return 0;
}
