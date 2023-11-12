#include <iostream>
#include <cmath>
#include <cstring>
#include <string>


using namespace std;
 //Numara 18 Fonksiyonları satır 627
/*
int fonksiyon1();
int fonksiyon2();
int fonksiyon3(int a, int b);
*/


int main()
{
  
 //DEĞİŞKENLERİN  İŞLEMLERİ KISACA
 /*
        //KÜTÜPHANELER
        KOD YAZMAYA BAŞLAYINCA DİREKT İNCLUDE DİYE BİR KOD YAZIYORUZ İNCLUDE içine al, katmak ve kapsamak GİBİ ANLAMLARA GELİR KÜÇÜKTÜR VE BÜYÜKTÜR İŞARETLERİNİN ARASINA YAZDIKLARIMIZ İSE KÜTÜPHANE İSİMLERİ
        MESELA  C-MATH C++ DA BAŞINDAKİ C , C++ GELMEKTEDİR. BAZI YERLERDE MATH.H DİYEDE YAZILIR BU YAZILIŞ C DİLİNDE GEÇERLİ PEK BİR FARK OLMAZ ikiside c++ ka kütüphane olarak kullanılır.

       //DEĞİŞKENLERİMİZ
       int VE long DEĞİŞKENİ SADECE TAM SAYILARI ALIR VE BELLEKTE 4 BAYTLIK YER TUTAR short DEĞİŞKENİ İSE YİNE TAM SAYILARI ALIRKEN BELLEKTE SADECE 2 BAYTLIK YER TUTAR.
       char DEĞİŞKENİ SADECE TEK KARAKTER TUTAR BU DA BELLEKTE 1 BAYTLIK YER  KAPLAR.
       string DEĞERİ TEK KARAKTERDE ZİYADE YAZI VE SÖZCÜK TUTAR HER BİR HARF 1 BAYTLIK YER KAPLAR.
       float, double VE long double BU 3 DEĞİŞKENİMİZDE KESİRLİ SAYILARI TUTMAK İÇİN KULLANILIR float 4, double VE long double 8 BAYTLIK YER KAPLAR.
       bool DEĞİŞKENİ DOĞRU VE YANLIŞ BAŞKA BİR ŞEY YAZILMAZ ÖRNEK;
       cout << " "; TIRNAK İÇİNE YAZILAN HERŞEYİ EKRANA BASAR VE İŞLEME AYNI SATIRDAN DEVAM EDER. cout <<"  \n";  veya cout <<"  "<< endl; şeklinde yazılırsa tırnak içerisindeki yazıyı ekrana basıp bir satır alta geçer.
       // % = bölme işleminden kalanı bulur
       //++ = bir arttırma
       //-- = bir azaltma
       // && = ve 
       // || = veya 

       cin >> ...; //cin KODU DEĞİŞKENİN İÇİNE DEĞERİ TERMİNALDEN GİRMEMİZİ SAĞLAR ÖRNEĞİN;
       int rakam;    //BİZ ŞİMDİ int DEĞİŞKENİNE BİR DEĞER VERMEDİK ÇÜNKİ DEĞERİ BİZ KENDİMİZ TERMİNALDEN GİRMEK İSTİYORUZ ONUN İÇİN cin KODUNU KULLANICAZ.
       cin >> rakam;   //ARTIK RAKAM ADLI AÇTIĞIMIZ DEĞİŞKENE KENDİMİZ TERMİNALDEN İSTEDİĞİMİZ RAKAMI VEYA DEĞERİ GİREBİLİR YAZI VEYA KESİRLİ SAYI YAZAMAYIZ ÇÜNKÜ DEĞİŞKENİMİZ int DEĞİŞKENİDİR.



        bool deneme = true;
        //while DÖNGÜSÜ KOŞUL DOĞRU OLDUĞU SÜRE BOYUNCA İÇİNE YAZILAN KODU TEKRARLAR ÖRNEK;
        while(deneme) // deneme değişkeni şuan true while döngüsü deneme koşulu false olana kadar içerisindeki kodu baştan döndürüp çalıştırmaya devam edecek. while DÖNGÜSÜNÜ break; KODUNU VEYA koşulu false yaparak BİTİREBİLİRSİNİZ.
       {
            cou<<"Merhaba Dünya"<< endl;
            break;
            //veya şuan true olan deneme boolenı false yapıcaz
            deneme = false;
       };

       if DEĞİŞKENİ KULLANIMI ŞU ŞEKİLDEDİR;
       int sayi= 1;
       if(sayi==1) // Parantez içine bir koşun yazılır (==, EŞİTTİR DEMEKTİR), (!=, EŞİT DEĞİLDİR DEMEKTİR)
       {
            cout <<"sayi 1 rakamina eşittir. \n";
           //YAZILAN KOŞUL EĞER DOĞRU İSE BU KISIM ÇALIŞACAKTIR
       }
       else
       {
            cout <<"sayi 1' e eşit değil. \n";
           //else DEĞİLSE MANASINA GELİR EĞER YAZILAN KOŞUL DOĞRU DEĞİLSE else KISMI ÇALIŞIR
       }



    */

 //ilk kodlar
 /*
   int sayi;
	sayi = 1903;
	cout << "MERHABA TURKIYE CUMHURIYETI \n";
	cout << "\n";
	cout << "MERHABA GELISIM UNIVERSITESI \n";
	//cout << "sayi = " << sayi << "\n";
	//cout << "SON = " << SON;
	cout << "sayi = " << sayi << "\n" << "SON = " << SON;
	// KONSOLDAN GİRİLEN SAYININ YAZDIRILMASI
	cout << "\n";
	int konsoldangirilen_sayi;
	cout << "BIR SAYI GIRINIZ : ";
	cin >> konsoldangirilen_sayi;
	cout << "\n";
	cout << "KONSOLDAN GIRDIGIMIZ SAYI = " << konsoldangirilen_sayi;
	cout << "\n";
	// 5 İLE 13 ARASINDAKİ TAM SAYILARI YAZDIRMA
	int i;
	for (i = 5; i <= 13; i++)
	{
		cout << i << "  ";
	}
	cout << "\n";
	// 6 İLE 18 ARASINDAKİ ÇİFT SAYILARI YAZDIRMA
	int j,k;
	for (j = 6; j <= 18; j=j+1)
	{
		k = j % 2; //j yi 2 ye böl kalanı k ya ata/gönder
		if (k == 0) {
			cout << " j = " << " " << j << " " << "cift sayidir \n";
		}
		else
		{
			cout << " j = " << " " << j << " " << "tek sayidir \n";
		}
	}
   */
   
 // BAZI ARİTMETİK OPERATÖRLER İLE İLGİLİ İŞLEMLER
 /*int a = 50;
   int b = 30;
   int c, d;
   c = a++;
   d = ++b;
   cout << "a = " << a << " c = " << c << "\n";
   cout << "b = " << b << " d = " << d << "\n";
   */

 // GİRİLEN SAYILARIN EŞİTLİK KONTROLÜ
 /*int a1 = 10;
   int b1 = 20;
   if (a1 != b1)
       cout << "iki sayi birbirine esit degildir. \n";
   else
       cout << "iki sayi birbirine esitttir. \n";
   */

 // GİRİLEN SAYININ POZİTİFLİK DURUMU
 /*cout << "herhangi bir tam sayi giriniz : ";
   int girilen_sayi;
   cin >> girilen_sayi;
   if (girilen_sayi > 0)
       cout << "pozitif sayi girdiniz \n";
   else
       if (girilen_sayi < 0)
           cout << "negatif sayi girdiniz \n";
       else
           cout << "girdiginiz sayi sifirdir \n";
   */

 //TOPLAMA ÇIKARMA BÖLME ÇARPMA İŞLMELERİ YAPMA-- BASİT HESAP MAKİNESİ
 /*

    int s1,s2,sonuc;

    char islem;

    cout << "Birinci sayiyi giriniz: ";
    cin >> s1;
    cout << "\n";

    cout << "Ikinci sayiyi giriniz: ";
    cin >> s2;
    cout << "\n";

    cout << "Islem turunu giriniz: ";
    cin >> islem;
    cout << "\n";

    if(islem=='+')
    {
        sonuc = s1 +s2;
        cout << "Sonuc : "<< sonuc << endl;
    }
    else if (islem=='*')
    {
        sonuc = s1 * s2 ;
        cout << "Sonuc : "<< sonuc << endl;
    }
    else if (islem=='/')
    {
        sonuc = s1 / s2 ;
        cout << "Sonuc : "<< sonuc << endl;
    }
    else
    {
        cout << "Islem turu gecersiz tekrar deneyiniz."<< endl;
    }

    */
    
 //MESLEK SEÇİMİ
 /* 
   while(true)
   {
    char meslek;
    cout<<"Meslek Giriniz d:doktor m:muhendis t:tegmen \n";
    cin >> meslek;


    if (meslek=='d')
    {
        cout<<"Girdiginiz Meslek Doktor \n" << endl;


    }
    else if (meslek=='m')
    {
        cout<<"Girdiginiz Meslek Muhendislik \n"  << endl;

    }
    else if (meslek=='t')
    {
        cout<<"Girdiginiz Meslek Tegmenlik " << endl;


    }
    else
    {
        cout<<"Girdigiz harfin karsiligi yoktur."<< endl;

    }
   }
  */

 //2 BİLİNMEYENLİ DENKLEM
 
 /*
 float x1, x2, x3;

  int a, b, c;
  int delta;
  cout<< "a icin bir deger giriniz."<< endl;
  cin>>a;
  cout<< "b icin bir deger giriniz."<< endl;
  cin>>b;
  cout<< "c icin bir deger giriniz."<< endl;
  cin>>c;
  delta= b * b - 4 * a * c;

  if (delta>0)
  {
     x1 = (-b - sqrt(delta))/( 2 * a );
     cout<<"x1 kok : "<< x1 <<endl;
     x2 = (-b +sqrt(delta))/(2*a);
     cout<<"x2 kok : "<< x1 <<endl;

  }
  else if (delta==0)
  {
      x3=(-b)/ (2*a);
      cout<<"Denklemin Koku: "<< x3 << endl;
  }
  else
  {
      cout<<"Denklemin Gercek bir koku yoktur. \n";
  }
 */ 
  
 
 //YAZILAN İKİ SAYI ARASINDAKİ SAYILARIN TEK VEYA ÇİFT OLDUĞUNU ÖĞRENME
 /*
  int b, s;
  float kontrol;
  cout << "baslangic sayisini giriniz : ";
  cin >> b;
  cout << "\n";
  cout << "bitis ya da son sayiyi giriniz : ";
  cin >> s;
  cout << "\n";
  for (int i = b; i <= s; i++)
  {
      kontrol = i % 2;
      cout << i << "'nin 2 bolumunden kalan = " << kontrol << "\n";
      if (kontrol == 0)
      {
          cout << i << " sayisi cift sayidir\n";
      }
      else
      {
          cout << i << " tek sayidir\n";
      }

  }
  */

 //BİR SAYININ FAKTORİYELİNİ BULMA
 /*
 int fonk, i, n;
 fonk=1;
 cout<<"Faktoriyelini  bulmak istedigin bir sayi gir \n";
 cin >> n;
 for (i = 1; i <=n; i++)
 {
  fonk= fonk*i;
  cout<<"sonuc: "<< fonk << endl;
 }
 */

 //İKİ SAYININ ORTALAMASINI BULMA
 /* 
 float a,b;
 int ort;
 cout << "Ilk sayiyi giriniz: "<< endl;
 cin>> a;
 cout << "Ikinci sayiyi giriniz: "<< endl;
 cin>> b;
 cout << "\n";

 ort= (a+b)/ 2;
 cout << "Ortalama: "<< ort << endl;
 */

 // VERİLEN SAYININ KARESİNİ BULMA
 /*int i, k;
 for (i = 1; i <= 9; i++)
 {
     k = i * i;
     cout << i << " nin karesi = " << k << "\n";
 }*/

 //DEVAMLI SAYI YAZDIRMA
 /*
 int i;
int n=0;
do
{
 cout << i++ << endl;
} while (n!=i);
return 0;
 */

 // WHILE DO-WHILE BREAK CONTİNUE KULLANIMI
 /*
 // WHILE KULLANIMI
 while (i < N)
 {
     cout << i++ << "\n";
 }

 // DO -- WHILE KULLANIMI
 do
 {
     cout << i++ << "\n";
 } while (i <= 6);

 // FOR/DÖNGÜ BREAK KULLANIMI
 cout << "break kullanimi \n";
 for (i = 0; i <= 15; i++)
 {
     if (i == 3)
         break;
     cout << i << "\n";
 }
 cout << "dongunun sonuna ulasildi \n";

 //  FOR/DÖNGÜ CONTİNUE KULLANIMI
 cout << "continue kullanimi \n";
 for (i = 0; i <= 15; i++)
 {
     if (i == 10)
         continue;
     cout << i << "\n";
 }

 // 15 İLE 20 ARASINDAKİ SAYILARI KONSOLA YAZDIRMAMA
 cout << "araliktaki degerleri yazdirmama \n";
 for (i = 0; i <= 25; i++)
 {
     if (i >= 15 || i <= 20)
         continue;
     cout << i << "\n";
 }

 // AZALTARAK ÇALIŞTIRMA
 cout << "azaltarak calistirma \n";
 int kalan;
 for (i = 30; i >= 0; i--)
 {
     if (i <= 25 && i >= 20)
           continue;
     kalan = i % (-2);
        if (kalan == 0)
     {
         cout << " sayi cift sayidir " << i << "\n";
     }
         else
     {
         cout << " sayi tek sayidir " << i << "\n";
     }
     cout << i << "\n";
 }
 fonksiyon1();
 // 1 İLE 30 ARASINDAKİ ASAL SAYILARI BULMA
 int k, l, kontrol, kalansayi;
 for (k = 3; k <= 30; k++)
 {
     kontrol = 2;
     for (l = 2; l < k; l++)
     {
         kalansayi = k % l;
         if (kalansayi == 0)
             kontrol = 1;
     }
     if (kontrol == 1)
     {
         cout << k << " asal sayi degildir \n";
     }
     else
     {
         cout << k << " asal sayidir \n";
     }

 }
 */

 //YAZILAN SAYIYI SINIRLAMA ORNEK GİRİLEN SAYI 100 SAYI 80 E GELDİĞİNDE KOD OTOMATİK DURACAK
 /*
 int i;
for(i=1; i<100; i++)
{
     cout << i << endl;
     if(i==80)
     {
         break;
     }
}
 */

 //KODDAKİ ÖRNEK 50 SAYISININ 15 İLE 30 ARASINDAKİ SAYILARI ATLAYIP SONRASINDA DEVAM ETMESİ
 /*
 int i;
for(i=0; i<50; i++)
{
     if(i>15 && i<30)
     {
         continue;
     }
     cout << i << endl;
}
 */

 //switch VE case KULLANIMI
 /*
 int sayi;
 cout << "Lutfen bir sayi giriniz: ";
 cin >> sayi;
 switch (sayi) // switch kodu bizi girdigimiz sayının kasasına(case) gönderir ve her bir kasada ayrı işlem yapa bilirsiniz.
 {
  case 1:
     cout<< "girdiginiz sayi 1"<< endl;
     break;
  case 2:
     cout<< "girdiginiz sayi 2"<< endl;
     break;
  case 3:
     cout<< "girdiginiz sayi 3"<< endl;
     break;
  case 4:
     cout<< "girdiginiz sayi 4"<< endl;
     break;
  case 5:
     cout<< "girdiginiz sayi 5"<< endl;
     break;
  default:
     cout<< "Bir ile 5 arasinda sayi girmediniz" << endl;
     break;
 }
 */

 //MATRİS TOPLAMI
 /*
 int i, j;
 int a[5][4], b[5][4], c[5][4];
 //Her iki Matrisin KOnsoldan girilmesi

 for(i=0; i<=5; i++)
 {
     for(j=0; j<=4; j++)
     {
         cout << "a[" << i << "][" << j << "]";
         cin >> a[i][j];
         cout << "\n";
         cout << "b[" << i << "][" << j << "]";
         cin >> b[i][j];
         cout << "\n";
         c[i][j] = a[i][j] + b[i][j];

     }
     cout << "\n";

 }
 // C Matrisin konsola yazdırılması
 for(i= 0; i<=4; i++)
 {
     for (j = 0; j <= 3; j++)
     {
         cout << "a[" << i << "][" << j << "]" << a[i][j] << " ";
         cout << "b[" << i << "][" << j << "]" << b[i][j] << " ";
         cout << "c[" << i << "][" << j << "]" << c[i][j] << " ";
     }
     cout << "\n";


 }
 */

 //CHAR DEĞİŞKENİ KULLANIMI
 /*
 char a, b;
 a = 'T';
 b = 'C';

 cout << "Turkiye Cumhuriyeti = " << a << b << "\n";
 */

 //CHAR DEĞİŞKENİNİN KARAKTER UZUNLUĞUNU BİRDEN DAHA FAZLA YAPMAK
 /*
 char bilgi[30]; //char DEĞİŞKENİ NORMALDE TEK KARAKTER TUTABİLİR FAKAT BUNU KÖŞELİ PARANTEZİN İÇİNE YAZILAN SAYI İLE TUTABİLECEĞİ KARATER SAYISINI ARTIRABİLİRİZ. ŞUAN MAX 30 KARAKTER TUTAR.
 cout << "Bilgi degisken giriniz: ";
 cin >> bilgi;
 for (int i = 0; bilgi[i]; i++)
 {
     cout << bilgi[i];

 }
 cout << "\n";
 */

 //Strcpy Ve strcat
 
 char deneme[50];
 int i;

 strcpy_s(deneme, "Turkey");
 strcat_s(deneme, " and Turan");

 for(i=0; deneme[i]; i++)
 {
  cout << deneme[i];

 }
 

 //strcpy VE strcmp KODLARININ KULLANIM AMACI
 /* 
 char a2[15], b2[15];
 strcpy_s(a2, "Ankara"); //strcpy kodu Bir katarı, bir başka katara kopyalamak için kullanılır. SAĞ TARAFTAKİ YAZI SOLDAKİ DEĞİŞKENE KOPYALANIR.
 strcpy_s(b2, "Ankara");
 if (strcmp(a2, b2) == 1) //strmp kodu Str1 parametresi ile gösterilen karakter dizisini str2 parametresi ile gösterilen karakter dizisi ile karşılaştırır ve fark bulursa 1 rakamını fark bulamaz ise 0 rakamını oluşturur
 {
     cout << "Farkli Iller \n";

 }
 else
 {
     cout << "Ayni Iller \n";

 }
 */

 //strcpy, strcmp VE strcat KULLANIMI
 /*
     char bilgi[30];
     strcpy_s(bilgi, "Turkiye Cumhuriyeti");  // YUKARDA YAZDIĞIM GİBİ SAĞDAKİ YAZI SOLDAKİ DEĞİŞKENE KOPYALANIR.
     cout << "bilgi: " << bilgi << "\n";
     char bir[90], iki[30];
     strcpy_s(bir, "Gelisim "); // BURADA bir DEĞİŞKENİNE Gelisim YAZISI KOPYALANMIŞ ALTTA İSE iki DEĞİŞKENİNE Universtesi KOPYALANMIŞ "STRCPY" KODU BU İŞE YARAR.
     strcpy_s(iki, "Universitesi ");
     cout << "Bir ve iki : " << bir << " " << iki << "\n"; // BURDA İSE BİR VE İKİ DEĞİŞKENİNİ COUT KODU İLE EKRANA YAZDIRILMIŞ.

     //iki char değişkenin belirtme
     strcat(bir, iki); // BURDA KULLANILAN strcat KODUNUN strcpy DEN FARKI iki DEĞİŞKENİNİ bir DEĞİŞKENİNE KOPYALAMIYOR SADECE SONUNA EKLİYOR MESELA YUKARDA bir DEĞİŞKENİ Gelisim, iki DEĞİŞKENİ İSE Universitesi
                       // strcat iki DEĞİŞKENİNİ bir DEĞİŞKENİN SONUNA EKLİYOR. BÖYLECE YAZDIRILDIĞINDA Gelisim Universitesi OLARAK YAZAR.
     cout << "bir : " << bir << "\n";
     char a1, b1, c1, d1;  //SIRAYLA 4 ADET BOŞ CHAR DEĞİŞKENİ YAZILMIŞ VE ALTTA HER BİRİNE BİR KARAKTER YAZILMIŞ.
     a1 = '1';
     b1 = '+';
     c1 = '2';
     d1 = '=';
     cout << a1 << b1 << c1 << d1 << "3" << "\n"; // BURADA TEKRAR4 DEĞİŞKENİ SIRAYLA COUT KODU İLE EKRANA YAZDIRMIŞ.
     char e1[30];  // EĞER e1'in yanında [30] YAZMASAYDI e1 DEĞİŞKENİ TEK KARAKTERLİK OLACAKTI AMA [30] YAZDIĞI İÇİN e1 DEĞİŞKENİ 30 KARAKTERLİK OLUYOR.
     strcpy_s(e1, "AVCILAR/Istanbul"); // BURADA TEKRAR e1 DEĞİŞKENİN İÇİNE AVCILAR/Istanbul YAZISI KOPYALANIYOR.
     strcat_s(bir, e1); // VE YUKARDA strcat İLE BİRLEŞTİRİLEN bir DEĞİŞKENİNİ ŞİMDİ e1 DEĞİŞKENİ İLE BİRLEŞTİRİYORUZ. ŞİMDİ TÜM BİLGİLER bir DEĞİŞKENİNDE TUTULUYOR.
     cout << "bir: " << bir << "\n"; // VE SADECE bir DEĞİŞKENİNİ cout İLE YAZDIRILDIĞINDA ORTAYA Gelisim Universitesi AVCILAR/Istanbul OLARAK YAZAR
 */
 
 //Char değişkeninin uzunluğu  (Kaç karakter) bulma ve //Char değişkenine değer atama
 /*
 char bir[55] = "deneme";
 int uzunluk;
 uzunluk = strlen(bir); //strlen KODU BİR DEĞİŞKENİN İÇİNDEKİ KARAKTER UZUNLUĞU SAYIP TAM SAYI OLARAK ÇIKTI VERİR. BU NEDEN int uzunluk DEĞİŞKENİ KULLANARAK SAYDIĞI KARAKTERİ uzunluk DEĞİŞKENİNE EŞİTLİYORUZ
 cout << "bir ";
 cout << "uzunlugu: " << uzunluk << "\n";

 //Char deðiþkenine deðer atama
 char eleman[] = {'K','O','D','L','A','M','A','Y','A','D','E','W','A','M','K','E','\0'}; // \0 kodu satırın bittiğini göstermek ve bir alt satıra geçmek için kullanırız.
 for (int i = 0; eleman[i]; i++)
     cout << eleman[i]; // burası karışık isteyene anlatrım. #Doğukan Özçelik#
     cout << "\n";
     char eleman1[] = "TRAKYA";
     for (int i= 0; eleman1[i]; i++)
         cout << eleman1[i];
 */

 // * ve & kullanım amacları
 /*
     int *b;
     int a;
     a = 100;
     b = &a;
     cout << "a degiskenin bulundugu adres: " << b << endl;
     cout << "a sayisi: " << a << endl;
     cout << "a sayisi: " << *b << endl;
     cout << "adres a+1: " << &a + 1 << endl;
     cout << "adres a-1: " << &a - 1 << endl;
     cout << "a sayisinin 1 fazlasi: " << *b + 1 << endl;
     cout << "a sayisinin 1 eksigi: " << *b - 1 << endl;

     //Double Degiskeni kulanımı
     double x = 5.3;
     double y = 4.6;
     double z = 3.9;
     double *id;
     double *ie;
     double *ig;
     double *ih;
     id = &x;
     ie = &y;
     ig = &z;

     cout << "x'in adresi : " << id << " degeri : " << *id << endl;
     cout << "x'in adresi : " << ie << " degeri : " << *ie << endl;
     cout << "x'in adresi : " << ig << " degeri : " << *ig << endl;
   */

 //Numara 18 Foksiyon kullanımı
 /*
     fonksiyon1();
     fonksiyon2();
     int m = 9;
     int n = 2;
     int cikti = fonksiyon3(m, n);
     cout << "cikti : " << cikti << endl;
     return 0;
 */

 //YAZILARIN HARFLARİNİ ALT ALTA YAZMA
 /*
 char katar[50];
 int i;
 cout << "Yazı yazın" << endl;
 cin>>katar;

 for (i=0; katar[i]; i++)
 {
     cout<< katar[i] << endl;
 }
 */

}


//Satır 627 Numara 18  devamı
/* 
int fonksiyon1()
{
    cout << "fonksiyon 1 calisti " << endl;
    return 0;

}
int fonksiyon2()
{
    cout << "fonksiyon 2 calisti " << endl;
    return 0;
}
int fonksiyon3(int bd, int id)
{
    int sonuc;
    sonuc = bd + id;
    return sonuc;

}
*/