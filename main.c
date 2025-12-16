#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

int main(void)
{

    int sayi,i;
    char isim1[25],isim2[25];
    char karar[10];
    int tahmin, sayac1=1,sayac2=1;

    printf("sayi tahmin uygulamasina hos geldeniz\n");
    printf("Bu oyunda iki arkadas kapisabilirsiniz\n");
    printf("Ilk oyuncunun ve ikinci Oyuncunun ismini arada bosluk olucak sekilde giriniz:");
    scanf("%s%s",&isim1,&isim2);


    srand(time(NULL));
    sayi=rand()%100;


    printf("Bir sayi secerek basla: %s (0-100):",isim1);
    scanf("%d",&tahmin);

    while(tahmin!=sayi)
    {
        if (tahmin>sayi)
        {
            printf("Daha kucuk bir sayi giriniz:");
            scanf("%d",&tahmin);
        }

        else if (tahmin<sayi)
        {
            printf("Daha buyuk Bir sayi giriniz:");
            scanf("%d",&tahmin);

        }
        sayac1=sayac1+1;
    }

    printf("%s %d. denemede dogru bildin, bravo simdi sira %s adli oyuncuda hazir oldugunuzda \"basla\" yazin:",isim1,sayac1,isim2);
    scanf("%s",&karar);

    if (strcmp(karar,"basla")==0)
    {

        sayi=rand()%100;

        int tahmin, sayac=1;
        printf("Bir sayi secerek basla %s (0-100):",isim2);
        scanf("%d",&tahmin);

        while(tahmin!=sayi)
        {
            if (tahmin>sayi)
            {
                printf("Daha kucuk bir sayi giriniz:");
                scanf("%d",&tahmin);
            }

            else if (tahmin<sayi)
            {
                printf("Daha buyuk Bir sayi giriniz:");
                scanf("%d",&tahmin);

            }
            sayac2=sayac2+1;
        }
        printf("%s adli oyuncu %d. denemede bilmistir asagida oyun sonun tablosu bulunmaktadir\n",isim2,sayac2);
    }
    else
    {
        printf("Oyuncu iki basla yazmadıği icin oyun bitirilmişsidr");
    }

    printf("\n-------------------------\n");

    if (sayac1<sayac2)
    {
        printf("1. olan oyuncu %d. denemsiyele %s olmustur\n",sayac1,isim1);
        printf("2. olan oyuncu %d. denemsiyele %s olmustur\n",sayac2,isim2);
        printf("Oynadiginiz icin tesekkurler");
    }
    else if (sayac1>sayac2)
    {
        printf("1. olan oyuncu %d. denemsiyele %s olmustur\n",sayac2,isim2);
        printf("2. olan oyuncu %d. denemsiyele %s olmustur\n",sayac1,isim1);
        printf("Oynadiginiz icin tesekkurler");
    }
    else
    {
        printf("%s ve %s adli oyunclarin ikiside %d. denemsinde bildigi icin kazanan yok",isim1,isim2,sayac1);
        printf("Oynadiginiz icin tesekkurler");
    }
    getchar();
    getchar();
    return 0;
}