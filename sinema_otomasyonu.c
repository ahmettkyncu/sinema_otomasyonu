#include <stdio.h>
#include <stdlib.h>



int main()
{
    float pazartesi_toplam_ucret = 0,toplam_indirim= 0,sepet_toplam=0, toplam_ucret = 0, bilet_fiyati = 100;
    char cevap,ad;
    int yas;

    printf("KAMPANYA BILGI:\n- Ogrencilere yuzde 20 indirim \n- 18 yas altina yuzde 50 indirim \n- Pazartesi gunleri tum biletlere yuzde 30 indirim[indirimsiz bilet fiyatina uygulanir] \n\n");
    printf("filMatik:\n----------\n");
    printf("JOHN WICK 4\nAksiyon, Gerilim, Suc\nfiyat:%.f TL\n----------\n", bilet_fiyati);
    printf("HIZLI VE OFKELI 10\nAksiyon, Suc, Gerilim\nfiyat:%.f TL\n----------\n", bilet_fiyati);
    printf("OPPENHEIMER\nDram, Tarih\nfiyat: %.f TL\n----------\n", bilet_fiyati);

    printf("JOHN WICK 4 izlemek istiyor musun?-->[E/H] ");
    scanf(" %c", &cevap);

    if (cevap == 'E' || cevap == 'e')
    {
        float fiyat_artis = 0;
        float fiyat_indirim =0;
        int dil_secenek;

        printf("1-)TR Dublaj[yuzde 10 fiyat artisi yapilacaktir]\n2-)TR Altyazi\n");
        printf("filmi nasil izlemek istersin? ");
        scanf("%d", &dil_secenek);

        if (dil_secenek == 1)
           {
            fiyat_artis += bilet_fiyati * 10 / 100;
            printf("toplam fiyat artisi:%.2f TL\n", fiyat_artis);
           }

        printf("----------\n");

        int boyut_secenek;
        printf("1-)2D\n2-)3D[yuzde 15 fiyat artisi yapilacaktir]\n");
        printf("filmi nasil izlemek istersin? ");
        scanf("%d", &boyut_secenek);

        if (boyut_secenek == 2)
           {
            fiyat_artis +=  bilet_fiyati * 15 / 100;
            printf("toplam fiyat artisi:%.2f TL\n", fiyat_artis);
           }

        printf("----------\n");

        int gun;
        printf("1-)pazartesi[sepette yuzde 30 indirim kazan]\n2-)sali\n3-)carsamba\n4-)persembe\n5-)cuma\n6-)cumartesi\n7-)pazar\n");
        printf("bilet almak istediginiz gunu girin: ");
        scanf("%d", &gun);
        printf("----------\n");

        int seans_secim;
        printf("1-)sabah[yuzde 5 indirim kazan]\n2-)oglen\n3-)aksam\n");
        printf("hangi seansta izlemek istersin? ");
        scanf("%d", &seans_secim);

        if (seans_secim == 1)
        {
            fiyat_indirim += bilet_fiyati * 5 / 100;                                                  //
        }
        printf("----------\n");

        if (gun == 1)
            {
            toplam_ucret = bilet_fiyati + fiyat_artis;
            sepet_toplam = sepet_toplam +toplam_ucret ;
            pazartesi_toplam_ucret += toplam_ucret;
            toplam_indirim += fiyat_indirim;
            }
        else
            {
            toplam_ucret = bilet_fiyati + fiyat_artis;
            sepet_toplam = sepet_toplam + toplam_ucret ;
            toplam_indirim += fiyat_indirim;
            }
        printf(" biletin    ucreti : %.2f TL\n", (toplam_ucret- fiyat_indirim));
        printf(" uygulanan indirim : %.2f TL\n", fiyat_indirim);
     }

    printf("HIZLI VE OFKELI 10 izlemek istiyor musun?-->[E/H] ");
    scanf(" %c", &cevap);

    if (cevap == 'E' || cevap == 'e')
    {
        float fiyat_artis = 0;
        float fiyat_indirim=0;
        int dil_secenek;

        printf("1-)TR Dublaj[yuzde 10 fiyat artisi yapilacaktir]\n2-)TR Altyazi\n");
        printf("filmi nasil izlemek istersin? ");
        scanf("%d", &dil_secenek);

        if (dil_secenek == 1)
           {
            fiyat_artis += bilet_fiyati * 10 / 100;
            printf("toplam fiyat artisi:%.2f TL\n", fiyat_artis);
           }

        printf("----------\n");

        int boyut_secenek;
        printf("1-)2D\n2-)3D[yuzde 15 fiyat artisi yapilacaktir]\n");
        printf("filmi nasil izlemek istersin? ");
        scanf("%d", &boyut_secenek);

        if (boyut_secenek == 2)
           {
            fiyat_artis +=  bilet_fiyati * 15 / 100;
            printf("toplam fiyat artisi:%.2f TL\n", fiyat_artis);
           }

        printf("----------\n");

        int gun;
        printf("1-)pazartesi[sepette yuzde 30 indirim kazan]\n2-)sali\n3-)carsamba\n4-)persembe\n5-)cuma\n6-)cumartesi\n7-)pazar\n");
        printf("bilet almak istediginiz gunu girin: ");
        scanf("%d", &gun);
        printf("----------\n");

        int seans_secim;
        printf("1-)sabah[yuzde 5 indirim kazan]\n2-)oglen\n3-)aksam\n");
        printf("hangi seansta izlemek istersin? ");
        scanf("%d", &seans_secim);

        if (seans_secim == 1)
        {
            fiyat_indirim += bilet_fiyati * 5 / 100;
        }
        printf("----------\n");

        if (gun == 1)
            {
            toplam_ucret = bilet_fiyati + fiyat_artis;
            sepet_toplam = sepet_toplam +toplam_ucret ;
            pazartesi_toplam_ucret += toplam_ucret;
            toplam_indirim += fiyat_indirim;
            }
        else
            {

            toplam_ucret = bilet_fiyati + fiyat_artis;
            sepet_toplam = sepet_toplam + toplam_ucret ;
            toplam_indirim += fiyat_indirim;
            }
        printf(" biletin    ucreti : %.2f TL\n", (toplam_ucret- fiyat_indirim));
        printf(" uygulanan indirim : %.2f TL\n", fiyat_indirim);
     }
    printf("OPPENHEIMER izlemek istiyor musun?-->[E/H] ");
    scanf(" %c", &cevap);

   if (cevap == 'E')
    {
        float fiyat_artis = 0;
        float fiyat_indirim=0;
        int dil_secenek;

        printf("1-)TR Dublaj[yuzde 10 fiyat artisi yapilacaktir]\n2-)TR Altyazi\n");
        printf("filmi nasil izlemek istersin? ");
        scanf("%d", &dil_secenek);

        if (dil_secenek == 1)
           {
            fiyat_artis += bilet_fiyati * 10 / 100;
            printf("toplam fiyat artisi:%.2f TL\n", fiyat_artis);
           }

        printf("----------\n");

        int boyut_secenek;
        printf("1-)2D\n2-)3D[yuzde 15 fiyat artisi yapilacaktir]\n");
        printf("filmi nasil izlemek istersin? ");
        scanf("%d", &boyut_secenek);

        if (boyut_secenek == 2)
           {
            fiyat_artis +=  bilet_fiyati * 15 / 100;
            printf("toplam fiyat artisi:%.2f TL\n", fiyat_artis);
           }

        printf("----------\n");

        int gun;
        printf("1-)pazartesi[sepette yuzde 30 indirim kazan]\n2-)sali\n3-)carsamba\n4-)persembe\n5-)cuma\n6-)cumartesi\n7-)pazar\n");
        printf("bilet almak istediginiz gunu girin: ");
        scanf("%d", &gun);
        printf("----------\n");

        int seans_secim;
        printf("1-)sabah[yuzde 5 indirim kazan]\n2-)oglen\n3-)aksam\n");
        printf("hangi seansta izlemek istersin? ");
        scanf("%d", &seans_secim);

        if (seans_secim == 1)
        {
            fiyat_indirim += bilet_fiyati * 5 / 100;                                                  //
        }
        printf("----------\n");

        if (gun == 1)
            {
            toplam_ucret = bilet_fiyati + fiyat_artis;
            sepet_toplam = sepet_toplam +toplam_ucret ;
            pazartesi_toplam_ucret += toplam_ucret;
            toplam_indirim += fiyat_indirim;
            }
        else
            {
            toplam_ucret = bilet_fiyati + fiyat_artis;
            sepet_toplam = sepet_toplam + toplam_ucret;
            toplam_indirim += fiyat_indirim;
            }

        printf(" biletin    ucreti : %.2f TL\n", (toplam_ucret- fiyat_indirim));
        printf(" uygulanan indirim : %.2f TL\n", fiyat_indirim);
     }

    printf("islemlere devam etmek icin filMatik bazi bilgileri bilmek istiyor:\n");
    printf("adiniz:  ");
    scanf("%s",& ad);
    printf("yasiniz: ");
    scanf("%d",& yas);
    printf("ogrenci misin?-->[E/H] ");
    scanf(" %c", &cevap);

    if(yas<18)
    {
        if(cevap=='E' || cevap == 'e')
        {
              //%20
             //%50
            //%30 PAZARTESİ İSE
            printf("toplam tutar: %.2f",sepet_toplam);
            toplam_indirim += pazartesi_toplam_ucret  * 30 / 100 + sepet_toplam * 50 / 100 + sepet_toplam * 20 / 100;
            sepet_toplam=sepet_toplam-toplam_indirim;

            printf("toplam indirim: %.2f",toplam_indirim);
            printf("sepetinizdeki odenecek toplam tutar: %.2f",sepet_toplam);
        }
        else
        {
             //%50
            //%30 PAZARTESİ İSE
            printf("toplam tutar: %.2f",sepet_toplam);
            toplam_indirim += pazartesi_toplam_ucret  * 30 / 100 + sepet_toplam * 50 / 100;
            sepet_toplam=sepet_toplam-toplam_indirim;

            printf("toplam indirim: %.2f",toplam_indirim);
            printf("sepetinizdeki odenecek toplam tutar: %.2f",sepet_toplam);
        }
    }
    else
    {
        if(cevap=='E')

        {
             //%20
            //%30 PAZARTESİ İSE
            printf("toplam tutar: %.2f",sepet_toplam);
            toplam_indirim += pazartesi_toplam_ucret  * 30 / 100 + sepet_toplam * 20 / 100;
            sepet_toplam=sepet_toplam-toplam_indirim;

            printf("toplam indirim: %.2f",toplam_indirim);
            printf("sepetinizdeki odenecek toplam tutar %.2f",sepet_toplam);
        }
        else
        {
           //%30 PAZARTESİ İSE
           printf("toplam tutar: %.2f\n",sepet_toplam);
           toplam_indirim += pazartesi_toplam_ucret  * 30 / 100;
           sepet_toplam=sepet_toplam-toplam_indirim;

           printf("toplam indirim: %.2f\n",toplam_indirim);
           printf("sepetinizdeki odenecek toplam tutar: %.2f\n",sepet_toplam);
        }
    }
    return 0;
}
