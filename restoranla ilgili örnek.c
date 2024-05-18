#include<stdio.h>

int main()
{
	int ikiyuz,yuz,elli,yirmi,on,bes,bir;
	int adet,restoran,ucret,toplam=0;
	printf("GUL Restoranimiza Hosgeldiniz :=)\n");
	printf("1) sandwich=13 TL\n2) hamburger=36 TL\n3) pizza=50TL\n4) tost=14 TL\n5) kola=12 TL\n");
	printf("Ne almak isterdiniz.Numarayi yazmaniz yeterli:");
	scanf("%d",&restoran);
	switch(restoran)
	{
		case 1:
			printf("Kac adet alacaksiniz:");
			scanf("%d",&adet);
			toplam=adet*13;
			printf("Toplam odeme yapmaniz gereken tutar:%d\n",toplam);
			break;
	    case 2:
			printf("Kac adet alacaksiniz:");
			scanf("%d",&adet);
			toplam=adet*36;
			printf("Toplam odeme yapmaniz gereken tutar:%d\n",toplam);
			break;
		case 3:
			printf("Kac adet alacaksiniz:");
			scanf("%d",&adet);
			toplam=adet*50;
			printf("Toplam odeme yapmaniz gereken tutar:%d\n",toplam);
			break;
		case 4:
			printf("Kac adet alacaksiniz:");
			scanf("%d",&adet);
			toplam=adet*14;
			printf("Toplam odeme yapmaniz gereken tutar:%d\n",toplam);
			break;
		case 5:
			printf("Kac adet alacaksiniz:");
			scanf("%d",&adet);
			toplam=adet*12;
			printf("Toplam odeme yapmaniz gereken tutar:%d\n",toplam);
			break;
		default :{
			printf("yanlis numarayi girdiniz!!!tekrar deneyin... :)");
		}
    }
		printf("odeme miktari giriniz:");
		scanf("%d",&ucret);
		toplam=ucret-toplam;
		
	if(toplam>0)
	{
		ikiyuz=toplam/200;
		toplam=toplam%200;
		yuz=toplam/100;
		toplam=toplam%100;
		elli=toplam/50;
		toplam=toplam%50;
		yirmi=toplam/20;
		toplam=toplam%20;
		on=toplam/10;
		toplam=toplam%10;
		bes=toplam/5;
		toplam=toplam%5;
		bir=toplam/1;
		toplam=toplam%1;
	}
	printf("Para ustunuz  ");
	if(ikiyuz>0)printf("%d ikiyuzluk  ",ikiyuz);
    if(yuz>0)printf("%d yuzluk  ",yuz);
    if(elli>0)printf("%d ellilik  ",elli);
    if(yirmi>0)printf("%d yirmilik  ",yirmi);
    if(on>0)printf("%d onluk  ",on);
    if(bes>0)printf("%d beslik  ",bes);
    if(bir>0)printf("%d birlik  ",bir);
    printf("alinacaktir...Afiyet olsun...Iyi gunler... :=)\n");
   return 0;
}
