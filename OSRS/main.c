#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



void ana_menu(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void firma_girisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void otobus_ekleme(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void sefer_bilgisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void sefer_no_olusturma(char sefer_no[][7]);
void rez_no_olusturma(char rez_no[][34]);
void sefer_koltuk_bigisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void bilgi_menu(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void bos_yer_goster(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void rezervasyon_yap(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void musteri_girisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void seferleri_listele(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void sefer_rezervasyon_yap(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void rezervasyon_bilgi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void musteri_rez_yap(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void musteri_bos_yer(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
void koltuk_olustur(char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4]);
void rezervasyon_goster(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri);
int main()
{

    srand(time(NULL));
    int otobus_numarasi=0;  // Otobus eklendikce bu degisken artacak
    int kapasite[100];  // Kapasite bilgisinin tutuldugu dizi
    int otobus_no[100];     // Otobus numaralarinin bilgisinin tutuldugu dizi
    int personel_sayisi[100];   // Personel sayilari bilgisinin tutuldugu dizi
    char otobus_model[100][5];  // Model bilgisinin tutuldugu dizi
    char sefer_no[100][7];  // Sefer numaralarinin bilgisinin tutuldugu dizi
    int sefer_dizi[100];    // Sefer bilgisi eklenirken sirasiyla hangi otobuslere sefer bilgisi eklendiyse o otobuslerin numaralarinin tutuldugu dizi
    char sehir_baslangic[100][15];  // Sefer kalkis sehri bilgisinin tutuldugu dizi
    char sehir_varis[100][15];  // Sefer varis sehri bilgisinin tutuldugu dizi
    int saat_baslangic[100][2]; // Kalkis saati bilgisinin tutuldugu dizi
    int saat_varis[100][2]; // Varis saati bilgisinin tutuldugu dizi
    int top_hasilat[100];   // Tum koltuklarin dolmasi durumunda toplam ucret bilgisinin tutuldugu dizi
    int kisi_ucret[100];    // Kisi basi ucret bilgisinin tutuldugu dizi
    int sayac=0;    // Sefer bilgisi eklendikce artan sayac
    int secim;  //  Kullanicinin sefer kltuk bilgisi eklerken sectigi sefer nnumarasinin tutuldugu degisken
    char stn1[100][20][4];   //
    char stn2[100][20][4];   // Koltuk düzenini simüle edebilmek icin olusturulan diziler
    char stn3[100][20][4];   //
    char stn4[100][20][4];   //
    int dolan_koltuk[100];  // Her otobus icin dolan koltuk sayisin tutuldugu dizi
    int s;         // Koltuklari simüle ederken kulanilan bir degisken
    char rez_no[1000][34];  // Rezervasyon numaralarinin bilgisinin tutuldugu dizi
    char ad[1000][20];  // Ad bilgilerinin tutuldugu dizi
    char soyad[1000][20];   // Soyad bilgilerinin tutuldugu dizi
    int sayac_musteri=0;    // Musteri girisi sırasinda rezervasyon yapildikca artan sayac

    sefer_no_olusturma(sefer_no);   // Sefer numaralarinin olusturuldugu fonksiyon
    rez_no_olusturma(rez_no);   // Rezervasyon numaralarinin olusturuldugu fonksiyon
    koltuk_olustur(stn1,stn2,stn3,stn4);    // Koltuklari simüle ettigimiz fonksiyon


    ana_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

    return 0;
}

void ana_menu(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int secim_anamenu;

    printf("\n** ANA MENU **\n\n");
    printf("1. FIRMA GIRISI\n");
    printf("2. MUSTERI GIRISI\n");
    printf("3. CIKIS\n");
    printf("\nLutfen bir giris yapiniz: ");
    scanf("%d",&secim_anamenu);

    switch(secim_anamenu){
    case 1:
        firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 2:
        musteri_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 3:
        exit;
        break;
    default:
        printf("\nHatali giris!! Tekrar deneyiniz...\n");
        ana_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }

}

void firma_girisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){
    int secim_firma;

    printf("\n\n** FIRMA GIRISI **\n\n");
    printf("1. OTOBUS EKLE\n");
    printf("2. SEFER BILGISI EKLE\n");
    printf("3. SEFER/KOLTUK BILGISI\n");
    printf("4. BIR UST MENUYE DON\n");
    printf("\nLutfen bir giris yapiniz: ");

    scanf("%d",&secim_firma);

    switch(secim_firma){
    case 1:
        otobus_ekleme(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 2:
        if(otobus_numarasi==0){ // Eger eklenmis otobus mevcut degilse sefer bilgisi eklenmiyor
            printf("\nSisteme kayitli otobus bulunmamaktadir. Lutfen once otobus ekleyiniz..");
            firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
       }
        sefer_bilgisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
       break;
    case 3:
        if(sayac==0){   // Eger sefer bilgisi olusturulmamissa sefer koltuk bilgisine erisilemiyor
            printf("\nSefer mevcut degildir. Once sefer bilgisi ekleyiniz..");
            firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
        else
            sefer_koltuk_bigisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

        break;
    case 4:
        ana_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    default:
        printf("\nHatali giris!! Tekrar deneyiniz...\n");
        firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }
}

void otobus_ekleme(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    printf("\n** OTOBUS EKLEME **\n");
    printf("\nOtobusun kapasitesi: ");
    scanf("%d",&kapasite[otobus_numarasi]);

    if(kapasite[otobus_numarasi]%4!=0){
        printf("Gecersiz Giris, Tekrar Deneyiniz...");
        otobus_ekleme(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }
    else if(kapasite[otobus_numarasi]>56){  // Kapasite degiskenine aralik belirleme
        printf("Gecersiz Giris, Tekrar Deneyiniz...");
        otobus_ekleme(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
   }
    else if(kapasite[otobus_numarasi]<16){  // Kapasite degiskenine aralik belirleme
        printf("Gecersiz Giris, Tekrar Deneyiniz...");
        otobus_ekleme(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
   }

    printf("Otobusun modeli: ");
    scanf("%s",&otobus_model[otobus_numarasi]);

    printf("Otobus numarasi: %d\n",otobus_numarasi+1);
    otobus_no[otobus_numarasi]=otobus_numarasi+1;

    printf("Personel sayisi: ");
    scanf("%d",&personel_sayisi[otobus_numarasi]);

    if(kapasite[otobus_numarasi]>29&&personel_sayisi[otobus_numarasi]!=3){  //Kapasite bilgisi icin uzun-kisa yol ayrimina gore personel sayisi secenegi
        printf("Uzun yol otobuslerinde 3 personel calisabilir..\n");
        otobus_ekleme(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }
    else if(kapasite[otobus_numarasi]<30 && personel_sayisi[otobus_numarasi]!=2){   //Kapasite bilgisi icin uzun-kisa yol ayrimina gore personel sayisi secenegi
        printf("Kisa yol otobuslerinde 2 personel calisabilir..\n");
        otobus_ekleme(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
   }

    printf("\n%d numarali otobus basarili sekilde eklenmistir..\n",otobus_numarasi+1);
    otobus_numarasi+=1;
    firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
}

void sefer_bilgisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int otbs_no;
    printf("\n** SEFER BILGISI **\n");
    printf("\nOtobus Numarasini Giriniz : ");
    scanf("%d",&otbs_no);

    if(otbs_no>otobus_numarasi){  // Eger Eklenmemis bir otobus icin sefer eklenmeye calisiliyorsa bunu engelliyoruz
        printf("%d Numarali otobus mevcut degildir. Tekrar deneyiniiz..",otbs_no);
        sefer_bilgisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }


    printf("Sefer Numarasi : ");
            for( int j=0;j<6;j++){
                 printf("%c",sefer_no[otbs_no-1][j]);
                 }


    printf("\n\nSefer Baslangic Saatini Giriniz (Sa): ");
    scanf("%d",&saat_baslangic[otbs_no-1][0]);

    printf("Sefer Baslangic Dakikasini Girin (Dk) : ");
    scanf("%d",&saat_baslangic[otbs_no-1][1]);

    if(saat_baslangic[otbs_no-1][1]!=18 ){
        saat_baslangic[otbs_no-1][1]=18;
        printf("\nSefer bu saatte gerceklesemez. Sefer Baslanic Saati: %d:%d",saat_baslangic[otbs_no-1][0],saat_baslangic[otbs_no-1][1]);
    }
    else
        printf("Sefer Baslangic Saati: %d:%d ",saat_baslangic[otbs_no-1][0],saat_baslangic[otbs_no-1][1]);

    printf("\n\nTahmini Varis Saatini Giriniz (Sa):");
    scanf("%d",&saat_varis[otbs_no-1][0]);

    printf("Tahmini Varis Dakikasini Girin (Dk) :");
    scanf("%d",&saat_varis[otbs_no-1][1]);

    if(abs(saat_varis[otbs_no-1][0]-saat_baslangic[otbs_no-1][0])>=4 && saat_varis[otbs_no-1][1]-saat_baslangic[otbs_no-1][1]>=0)
    {                                   // Uzun-Kisa yol ayrimi icin saat farki hesaplamasi yapiyoruz.
        if(kapasite[otbs_no-1]>29)
            printf("Bu otobus 4 saatten fazla yolculuklar icin uygundur.");
        else if(kapasite[otbs_no-1]<30)
        {
            printf("Bu otobus 4 saatten fazla yolculuklar icin uygun degildir. Tekrar secim yapiniz.");
            printf("\nUzun yol otobusleri:");
            for(int i=0;i<otobus_numarasi;i++)
            {
                if(kapasite[i]>29)
                    printf("\n%d. Numarali otobus. Kapasite: %d",otobus_no[i],kapasite[i]);
            }
            sefer_bilgisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
       }
    }

    printf("\nSefer Kalkis Sehri: ");
    scanf("%s",&sehir_baslangic[otbs_no-1]);
    printf("Sefer Varis Sehri: ");
    scanf("%s",&sehir_varis[otbs_no-1]);

    printf("\nIstenen Toplam Hasilat: ");
    scanf("%d",&top_hasilat[otbs_no-1]);
    printf("Kisi Basi Ucret: %d",(top_hasilat[otbs_no-1]/kapasite[otbs_no-1]));
    kisi_ucret[otbs_no-1]=(top_hasilat[otbs_no-1]/kapasite[otbs_no-1]);

    sefer_dizi[sayac]=otbs_no;  // Bu diziye sirasiyla sefer bilgisi eklenen otobuslerin numaralarini aktariyoruz. Daha sonra Kullanacagiz bu dizimizi
    sayac++;    // Sefer bilgisi girildiginde sayacimiz 1 artiyor

    firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);


}

void rez_no_olusturma(char rez_no[][34]){

    int i,j;
    char h[8];  // Random secilen harflerin tutuldugu gecici dizi
    int s[8];   // Random secim yapabilmek icin dizideki indislerin tutuldugu dizi

    char gecici[8]; // Olusturulan rez. no'nun atildigi gecici dizi
    char harf_dizi[34]; // Harf ve rakam dizimiz

    strcpy(harf_dizi,"ABCDEFGHIJKLMNOPQRXVYZW1234567890");  // Rez. No'su olusturulurken burdaki dizinin icinden secim yapilacak

    for( i=0;i<1000;i++)
        {
            strcpy(h,"\0"); //Her dongude harflerin atildigi diziyi sifirliyoruz

            for(int k=0;k<8;k++)
            {
                s[k]=rand()%32; // Harf dizisi uzunlugunca random atama yapilip bir indis degeri seciliyor
                strncat(h,&harf_dizi[s[k]],1);     // Secilen indisteki karakter h dizimize atiliyor
            }
            strcpy(gecici,h);   // h dizisini karsilastirma yapabilmek icin gecici dizisine aktariyoruz

            for(j=0;j<=i-1;j++)
            {
                if(strcmp(gecici,rez_no[j])==0) // Olusturulan dizi daha onceden olusturulmusmu diye kontrol ediyoruz
                    break;
            }
            if(i==j)
            strcpy(rez_no[i],gecici);   // OLusturulmamissa asil dizimize aktariyoruz

            else
                i--;    // Olusturulmamissa i'yi 1 azaltip tekrar deniyoruz
        }

}

void sefer_no_olusturma(char sefer_no[][7]){

    int i,j;
    char h[4];  // Random secilen harflerin tutuldugu gecici dizi
    int s[4];   // Random secim yapabilmek icin dizideki indislerin tutuldugu dizi

    char gecici[7];     // Olusturulan sefer no'nun atildigi gecici dizi
    char harf_dizi[17]; // Hexadecimal degerlerin tutuldugu dizi

    strcpy(harf_dizi,"ABCDEF1234567890");   // Sefer No'su olusturulurken burdaki dizinin icinden secim yapilacak


    for( i=0;i<100;i++)
        {
            strcpy(h,"\0");     //Her dongude harflerin atildigi diziyi sifirliyoruz
            strcpy(gecici,"\0");    //Her dongude gecici dizimizi sifirliyoruz

            for(int k=0;k<4;k++)
            {
                s[k]=rand()%15;     // Harf dizisi uzunlugunca random atama yapilip bir indis degeri seciliyor
                strncat(h,&harf_dizi[s[k]],1);      // Secilen indisteki karakter h dizimize atiliyor
            }
            strcpy(gecici,"18");    // gecici dizimizn basina 18 ifadesini ekliyoruz
            strcat(gecici,h);   // h dizisini karsilastirma yapabilmek icin gecici dizimizin üstüne ekliyoruz

            for(j=0;j<=i-1;j++)
            {
                if(strcmp(gecici,sefer_no[j])==0)   // Karsilastirma yapiyoruz
                    break;
            }
            if(i==j)
            strcpy(sefer_no[i],gecici);  // Onceden okusturulmamissa asil dizimize aktariyoruz


            else
                i--;    // Olusturulmussa i'yi 1 azaltip tekrar deniyoruz
        }

}

void sefer_koltuk_bigisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

	int i;


    printf("\n** SEFER KOLTUK BILGISI **\n\n");

    for( i=0;i<100 ;i++){
            if(sefer_dizi[i]==0){
                break;
            }
                printf("%d. Sefer No:",i+1);
            for(int j=0;j<6;j++)
                {
                    printf("%c",sefer_no[sefer_dizi[i]-1][j]);
                }
            printf("\n");
        }
        // Sirasiyla sefer bilgisi eklenmis otobuslere dair sefer no'lar yazdirildi

        printf("Lutfen secim yapiniz.");

        scanf("%d",&secim);    // Sefer bilgisi eklenen otobusler arasinda secim yapiyoruz. Secim sefer_dizi dizisi icerisindeki
                               // otobus numaralarina gore yapilmakta.
        if(secim>i){
            printf("Gecersiz Secim, Tekrar Deneyiniz...");
            sefer_koltuk_bigisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
      }

    printf("%d",sefer_dizi[secim-1]);           // Bu secime gore sefer bilgisi eklenen otobuslerin numaralarini
    printf("\nSecilen Sefer Numarasi: ");   // tuttugumuz diziden yardim alarak sefer no'lara erisiyoruz
    for(int j=0;j<6;j++)
                {
                    printf("%c",sefer_no[sefer_dizi[secim-1]-1][j]);
                }

    // sefer_no[sefer_dizi[secim-1]-1] Buradaki sefer_dizi[secim-1] , secilen siradaki otobuse ulasmak icin bir eksigini alarak indisine ulasiyoruz.
    //  sefer_dizi icerisindeki otobus numarasina ulasmis olduk. Simdide o otobus numarasinin asil indisine ulasmak icin bir eksigini aliyoruz.
    // boylelikle sefer_no icindeki asil indise ulasmis oluyoruz. Programin her yerinde asil indise bu yontemle ulasilmakta.

    s = kapasite[sefer_dizi[secim-1]-1]/4; // Yazdirilacak koltuk satiri icin kapasiteyi 4'e boluyoruz
    bilgi_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

}

void koltuk_olustur(char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4]){


     for(int i=0;i<100;i++){
        for(int j=0;j<20;j++){
            strcpy(stn1[i][j],"[ ]");
            strcpy(stn2[i][j],"[ ]");
            strcpy(stn3[i][j],"[ ]");
            strcpy(stn4[i][j],"[ ]");
        }
     }
}

void bilgi_menu(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s, int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){


    int secim_rezervasyon;
    printf("\n\n** BILGILENDIRME MENUSU **\n");
    printf("\n1. Bos Yerleri Goster");
    printf("\n2. Rezervasyon Yap");
    printf("\n3. Rezervasyon Bilgilerini Goster");
    printf("\n4. Ust Menuye Don");
    printf("\nLutfen secim yapiniz: ");
    scanf("%d",&secim_rezervasyon);



    switch(secim_rezervasyon){
    case 1:
        bos_yer_goster(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 2:
        rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 3:
        rezervasyon_bilgi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 4:
        firma_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    default:
        printf("\nHatali giris!! Tekrar deneyiniz...\n");
        bilgi_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }


 }

void bos_yer_goster(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int sutun[20],satir[20];

    for(int i=0;i<s;i++){
        sutun[i]=i+1;   // Satir ve sutun baslarina numara yazdirdigimiz diziler
        satir[i]=i+1;
    }
    printf("\n\n %d \n\n",s);
    printf("\n\n    1   2      3   4\n");
    for(int i=0;i<s;i++)
    printf("%2.d %s %s    %s %s\n",sutun[i],stn1[sefer_dizi[secim-1]-1][i],stn2[sefer_dizi[secim-1]-1][i],stn3[sefer_dizi[secim-1]-1][i],stn4[sefer_dizi[secim-1]-1][i]);

    bilgi_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

}

void rezervasyon_yap(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int k_satir,k_sutun;


    printf("\n\n\Rezervasyon yapmak istediginiz koltuk numarasini sutun ve satir olarak belirtiniz..");
    printf("\n\nRezervasyon yapmak istediginiz koltugun sutun numarasi: ");
    scanf("%d",&k_sutun); // Koltuk bilgisini satir ve sutun olarak tuttuk. 4'den fazla girilmesini engelledik

    if(k_sutun>4){
        printf("\nGecersiz deger. Tekrar deneyiniz..\n");
        rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }

    printf("\nRezervasyon yapmak istediginiz koltugun satir numarasi: ");
    scanf("%d",&k_satir);

    if(k_satir>s){  // Satir ise kapasitemizi 4'e bolerek s degiskenin atmistik. Boylece s degerinden fazla bir deger girisini engelledik.
        printf("\nGecersiz deger. Tekrar deneyiniz..\n");
        rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }
    printf("\nSectiginiz kolutugun numarasi: %d%d",k_sutun,k_satir);



    if(k_sutun==1){     // Secilen sutuna gore satir icerisindeki degere erisildi. Karsilastirma yapildi.
        if(strcmp(stn1[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn1[sefer_dizi[secim-1]-1][k_satir-1],"[X]");   // Bos ise  isaretlendi rez. yapildi
        }
        else{   //Eger Daha onceden X koyulmussa tekrar denettirildi.
            printf("\nSectiginiz koltuk doludur. Farkli bir secim yapiniz..");
        rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }

    }

    if(k_sutun==2){
        if(strcmp(stn2[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn2[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
        }
        else{
            printf("\nSectiginiz koltuk doludur. Farklý bir secim yapiniz..");
        rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
    }

    if(k_sutun==3){
        if(strcmp(stn3[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn3[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
        }
        else{
            printf("\nSectiginiz koltuk doludur. Farkli bir secim yapiniz..");
            rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
    }

    if(k_sutun==4){
        if(strcmp(stn4[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn4[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
        }
        else{
            printf("\nSectiginiz koltuk doludur. Farklý bir secim yapiniz..");
            rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
    }

    printf("\n\nSectiginiz %d%d numarali kolutuga rezervasyonunuz yapilmistir.",k_sutun,k_satir);

    dolan_koltuk[sefer_dizi[secim-1]-1]+=1; // Her rezervasyonda dolan koltluk sayisi arttirildi.

    bilgi_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

}

void rezervasyon_bilgi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    printf("\n\n** Rezervasyon Bilgileri **\n\n");

    int toplanan_para=dolan_koltuk[sefer_dizi[secim-1]-1]*kisi_ucret[sefer_dizi[secim-1]-1]; // Toplanan para = (koltuk sayisi) x (kisi basi ucret)
    int bos_koltuk=kapasite[sefer_dizi[secim-1]-1]-dolan_koltuk[sefer_dizi[secim-1]-1]; // Bos koltuk = (kapasite) - (dolan koltuk)

    printf("Sefer Numarasi : ");    // rezervasyona ait bilgiler sirasiyla yazdirildi
            for( int j=0;j<6;j++){
                 printf("%c",sefer_no[sefer_dizi[secim-1]-1][j]);
                 }
    printf("\n %s > %s",sehir_baslangic[sefer_dizi[secim-1]-1],sehir_varis[sefer_dizi[secim-1]-1]);
    printf("\n%d:%d - %d:%d",saat_baslangic[sefer_dizi[secim-1]-1][0],saat_baslangic[sefer_dizi[secim-1]-1][1],saat_varis[sefer_dizi[secim-1]-1][0],saat_varis[sefer_dizi[secim-1]-1][1]);
    printf("\nOtobus Numarasi: %d",otobus_no[sefer_dizi[secim-1]-1]);
    printf("\nToplam Hasilat: %d",toplanan_para);
    printf("\nBos Koltuk Sayisi: %d",bos_koltuk);

    bilgi_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);


}

void musteri_girisi(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int secim_musteri;

    printf("\n\n** MUSTERI GIRISI **\n\n");
    printf("1. SEFERLERI LISTELE\n");
    printf("2. SEFER REZERVASYON YAP\n");
    printf("3. BIR UST MENUYE DON\n");
    printf("4. REZERVASYON GOSTER\n");
    printf("\nLutfen bir giris yapiniz: ");

    scanf("%d",&secim_musteri);

    switch(secim_musteri){
    case 1:
        seferleri_listele(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 2:
        sefer_rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 3:
        ana_menu(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        break;
    case 4:
        rezervasyon_goster(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi,sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
       break;
    default:
        printf("\nHatali giris!! Tekrar deneyiniz...\n");
        musteri_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }

}

void seferleri_listele(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int i;      // Eklenen seferler ve seferlere ait bilgiler sirasiyla yazdirildi

    int bos_koltuk;

    printf("\n\n** SEFER LISTESI **\n\n");

    printf("  SEFER NO          HAT             SAAT        OTOBUS NO      UCRET    BOS KOLTUK\n\n");

    for( i=0;i<100 ;i++){
        if(sefer_dizi[i]==0){
            break;
        }

    printf("   ");
    for(int j=0;j<6;j++)
        {
            printf("%c",sefer_no[sefer_dizi[i]-1][j]);
        }
    bos_koltuk=kapasite[sefer_dizi[i]-1]-dolan_koltuk[sefer_dizi[i]-1];

    printf("    %s > %s    "   ,sehir_baslangic[sefer_dizi[i]-1],sehir_varis[sefer_dizi[i]-1]);
    printf("    %d:%d - %d:%d   ",saat_baslangic[sefer_dizi[i]-1][0],saat_baslangic[sefer_dizi[i]-1][1],saat_varis[sefer_dizi[i]-1][0],saat_varis[sefer_dizi[i]-1][1]);
    printf("   %d       ",otobus_no[sefer_dizi[i]-1]);
    printf("      %d  ",kisi_ucret[sefer_dizi[i]-1]);
    printf("      %d  ",bos_koltuk);
    printf("\n");
    }



    musteri_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

}

void sefer_rezervasyon_yap(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int i=0;
    char dizi[7];

    printf("\n\n** SEFER REZERVASYON **\n\n");
    printf("Sefer numaranizi giriniz --> ");

    scanf("%s",&dizi);
    for(i=0;i<sayac ;i++){
        if(strcmp(dizi,sefer_no[i])){   // Alinan sefer no'suna gore karsilastirma yapildi.
            secim=i+1;              // Eslestigi andaki i degeri secim+1 e esitlendi. secim-1 yaparken indise ulasiyorduk.
            s = kapasite[i]/4;      // O yuzden i bizim indis degerimiz. Secim i+1'ki, secim-1 indise esit olsun.

            musteri_bos_yer(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
            musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

        }
    }
        // Eger esleme saglanmazsa tekrar denettiriliyor

        printf("\nTekrar deneyiniz...");
        sefer_rezervasyon_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
}

void musteri_rez_yap(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int i;
    char onay;

    printf("\nAd: ");
    scanf("%s",&ad[sayac_musteri]);
    printf("Soyad: ");
    scanf("%s",&soyad[sayac_musteri]);

     int k_satir,k_sutun;


    printf("\nRezervasyon yapmak istediginiz koltuk numarasini sutun ve satir olarak belirtiniz..");
    printf("\n\nRezervasyon yapmak istediginiz koltugun sutun numarasi: ");
    scanf("%d",&k_sutun);
     if(k_sutun>4){
        printf("\nGecersiz deger. Tekrar deneyiniz..\n");
        musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }
    printf("\nRezervasyon yapmak istediginiz koltugun satir numarasi: ");
    scanf("%d",&k_satir);
     if(k_satir>s){  // Satir ise kapasitemizi 4'e bolerek s degiskenin atmistik. Boylece s degerinden fazla bir deger girisini engelledik.
        printf("\nGecersiz deger. Tekrar deneyiniz..\n");
        musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
    }
    printf("\nSectiginiz kolutugun numarasi: %d%d",k_sutun,k_satir);

    if(k_sutun==1){
        if(strcmp(stn1[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn1[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
        }
        else{
            printf("\nSectiginiz koltuk doludur. Farkli bir secim yapiniz..");
        musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }

    }

    if(k_sutun==2){
        if(strcmp(stn2[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn2[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
        }
        else{
            printf("\nSectiginiz koltuk doludur. Farklý bir secim yapiniz..");
        musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
    }

    if(k_sutun==3){
        if(strcmp(stn3[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn3[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
        }
        else{
            printf("\nSectiginiz koltuk doludur. Farkli bir secim yapiniz..");
            musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
    }

    if(k_sutun==4){
        if(strcmp(stn4[sefer_dizi[secim-1]-1][k_satir-1],"[ ]")==0){
            strcpy(stn4[sefer_dizi[secim-1]-1][k_satir-1],"[X]");
                    }
        else{
            printf("\nSectiginiz koltuk doludur. Farklý bir secim yapiniz..");
            musteri_rez_yap(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);
        }
    }

    musteri_bos_yer(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);

    printf("\n\nRezervasyonu onayliyor musunuz? (E/H) ");

    scanf("%s",&onay);      // Kullanicidan onay aliyoruz

    if(onay=='e' || onay == 'E'){   // Onaylarsa rez. no'sunu veriyoruz. Musteri sayacimizi arttiriyoruz.
        printf("\nSectiginiz %d%d numarali kolutuga rezervasyonunuz yapilmistir.",k_sutun,k_satir);
        dolan_koltuk[sefer_dizi[secim-1]-1]+=1;
        sayac_musteri++;
        printf("\nRezervasyon numaraniz: ");
        for(int j=0;j<8;j++){
            printf("%c",rez_no[sayac_musteri][j]);
        }

    }

    else if(onay=='h' || onay == 'H'){ // Onaylanmazsa isaret konulan indis degistiriliyor eski halini aliyor. Ad ve Soyad dizimiz de sifirlaniyor
        printf("\nRezervasyon islemi iptal edilmistir.");
        strcpy(ad[sefer_dizi[secim-1]-1],"\0");
        strcpy(soyad[sefer_dizi[secim-1]-1],"\0");
        if(k_sutun==1){
                strcpy(stn1[sefer_dizi[secim-1]-1][k_satir-1],"[ ]");
            }
        if(k_sutun==2){
                strcpy(stn2[sefer_dizi[secim-1]-1][k_satir-1],"[ ]");
        }
        if(k_sutun==3){
                strcpy(stn3[sefer_dizi[secim-1]-1][k_satir-1],"[ ]");
            }
        if(k_sutun==4){
                strcpy(stn4[sefer_dizi[secim-1]-1][k_satir-1],"[ ]");
            }
    }

     musteri_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);


}

void musteri_bos_yer(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    int sutun[20],satir[20];


    for(int i=0;i<s;i++){
        sutun[i]=i+1;
        satir[i]=i+1;
    }
    printf("\n\n    1   2      3   4\n");
    for(int i=0;i<s;i++)
    printf("%2.d %s %s    %s %s\n",sutun[i],stn1[sefer_dizi[secim-1]-1][i],stn2[sefer_dizi[secim-1]-1][i],stn3[sefer_dizi[secim-1]-1][i],stn4[sefer_dizi[secim-1]-1][i]);


}

void rezervasyon_goster(int otobus_numarasi,int kapasite[],int otobus_no[],int personel_sayisi[],char otobus_model[][5],char sefer_no[][7],int sefer_dizi[],char sehir_baslangic[][15],char sehir_varis[][15],int saat_baslangic[][2],int saat_varis[][2],int top_hasilat[],int kisi_ucret[],int sayac,int secim,char stn1[100][20][4],char stn2[100][20][4],char stn3[100][20][4],char stn4[100][20][4],int s,int dolan_koltuk[],char rez_no[][34],char ad[][20],char soyad[][20],int sayac_musteri){

    char dizi[9];
    int i;

    printf("\n\n** REZERVASYON BILGISI **\n\n");
    printf("Rezervasyon numaranizi giriniz --> ");  // Kullanicidan rez. no'sunu aldik
    scanf("%s",&dizi);

    for(i=0;i<sayac_musteri ;i++){
        if(strcmp(dizi,rez_no[i])){ // eslesirse donguden ciktik ve i degerini tuttuk.
            break;                  // i bizim indis degerimizdi. Yani secim-1 'di.
        }                           // Bilgielri yazdirirken secim-1 yerine i kullandik
    }
 printf("\n\n  SEFER NO         HAT           SAAT       OTOBUS NO      UCRET    \n\n");
 printf("   ");
     for(int j=0;j<6;j++)
        {
            printf("%c",sefer_no[sefer_dizi[i]-1][j]);
        }

    printf("    %s > %s    "   ,sehir_baslangic[sefer_dizi[i]-1],sehir_varis[sefer_dizi[i]-1]);
    printf("    %d:%d - %d:%d   ",saat_baslangic[sefer_dizi[i]-1][0],saat_baslangic[sefer_dizi[i]-1][1],saat_varis[sefer_dizi[i]-1][0],saat_varis[sefer_dizi[i]-1][1]);
    printf("   %d       ",otobus_no[sefer_dizi[i]-1]);
    printf("      %d  ",kisi_ucret[sefer_dizi[i]-1]);

    musteri_girisi(otobus_numarasi,kapasite,otobus_no,personel_sayisi,otobus_model,sefer_no,sefer_dizi, sehir_baslangic, sehir_varis,saat_baslangic, saat_varis, top_hasilat, kisi_ucret,sayac,secim,stn1,stn2,stn3,stn4,s,dolan_koltuk,rez_no,ad,soyad,sayac_musteri);


}


