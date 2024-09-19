// c++22_2.cpp  01.09.2024  @alicemilozdemir
// syf 279 "Bölüm 7: Sınıf şablonları dizi ve vektör ,istisnai durum yakalama" konusundan
// syf 281 "7.4 Diziler Kullanan örnekler" konusuna kadar gelir.

#include<iostream>
#include<array>
using namespace std;

int main()
{
    
    // diziler aynı tür verilerden oluşan sabit büyüklükte hafıza bölgeleridir.
    // vektörler çalışma zamanında dinamik olarak daralabilen listelerdir.
    // diziler lvalue'dur .Atama ifadesi solda. c[0] = 5;
    // dizi.size() = dizinin kaç elemandan oluştuğunu döndürür.

/*
OPERATÖR                         YÖN              TÜR
-----------------------------------------------------------------
::     ()                        soldan sağa      öncelikli


() , [] , ++ , -- , static_cast<type>(operand)  (sonradan)     sağdan sola      son ek - en yüksek
+,-,!,++ , -- (önceden)         sağdan sola      tekil

* , / , %                       soldan sağa      çarpımsal
+ , -                           soldan sağa      toplamsal
<< , >>                         soldan sağa      Ekleme / Çıkarma
< , <= , > , >=                 soldan sağa      ilişkisel
== , !=                         soldan sağa      eşitlik

&&                              soldan sağa      mantıksal VE
||                              soldan sağa      mantıksal VEYA

?:                              sağdan sola      koşullu
= , += , -= ,*= , /= , %=       sağdan sola      atama
,                               soldan sağa      virgül

*/

// Diziler hafızada yer işgal eder. Dizi bildirimi :
// array <Tip,diziBoyutu> Dizi ismi
//örnek : array <int,3> notlar
// <Tip,diziBoyutu> gösterimi dizinin bir sınıf şablonu olduğunu belirtir.
// derleyici dizi eleman tipini ve sayısına göre hafızada yer ayırır. hafızada yer ayrılmasını sağlayan
// bildirim işlemi tanımlama'dır.
// dizi boyutu unsigned int olmalıdır(0 da olabiliyor.)


} // main sonu.