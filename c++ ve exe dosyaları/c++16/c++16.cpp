// c++16.cpp  28.08.2024  @alicemilozdemir
// ssyf 202 "Ünite 6 Fonksiyonlar ve Özyinelemeye Giriş" konusundan
// syf 214 "6.7 Örnek Olay Çalışması :Rastgele Sayı Üretimi" konusuna kadar gelir.

#include<iostream>
#include<cmath>
#include "GradeBook.h"

using namespace std;

int main()
{
    // herhangi bir sınıfın üyesi olmayan fonksiyonlara(örneğin main) global fonksiyonlar denir.
    // cmath başlığında bulunan tüm fonksiyonlar global fonksiyonlardır .Kullanmadan önce nesne oluşturmak
    // gerekmez.

    /*
Fonksiyon       Açıklama         Örnek
-------------------------------------------------------
sqrt(x)         square root             sqrt(900) = 30.000000
cbrt(x)         cube root               cbrt(27) = 3.000000
exp(x)          e^x                     exp(2) = 7.389056
log(x)          ln(x)                   ln(7.389056) = 2.000000
log10(x)        log(x)                  log10(100) = 2.000000
fabs(x)         |x|                     fabs(10) = 10.000000
ceil(x.y)       x+1                     ceil(10.7) = 11.000000
floor(x.z)      x                       floor(10.7) = 10.000000
pow(x,y)        x^y                     pow(2,3) = 8.000000  
fmod(x,y)       ondalık kalan(x/y)      fmod(13.657,2.333) = 1,992 = 2.333*5 + 1,992
sin(x)          sin(x)-radyan           sin(3.141593/6) = 0.500000
cos(x)          cos(x)-radyan           cos(3.141593/3) = 0.500000
tan(x)          tan(x)-radyan           tan(3.141593/4) = 1.000000

    */

    GradeBook myGradeBook("CS101 C++ programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    /*
    Veri Tipleri (Veri Türleri)(Yüksek Tipten düşük tipe)(Tür dönüşümleri)

• long double

• double

• float

• unsigned long long int (unsigned long long ile aynıdır)

• long long int (long long ile aynıdır)

• unsigned long int (unsigned long ile aynıdır)

• unsigned int(unsigned ile aynı)

• int

• unsigned short int (unsigned short ile aynıdır)

• short int (short ile aynıdır)

• unsigned char

• char and signed char

• bool
*/


/*
| Standart Kütüphane Başlığı | Açıklama |
|----------------------------|----------|
 `<iostream>`                2. Ünitede bahsedilen ve 13. Ünitede daha detaylı incelenecek olan C++ standart giriş/çıkış
                               fonksiyonları için gerekli fonksiyon prototiplerini içerir. 13. Ünite: Giriş/Çıkış Akışı 
--------------------------------------------------------------------------------------------------------------------------------
 `<iomanip>`                 Veri akışını biçimlendiren manipülatörler için gerekli fonksiyon prototiplerini içerir.
                             Bu başlık dosyası ilk olarak Bölüm 4.9'da kullanılmıştır ve 13. Ünitede daha detaylı incelenecektir.
                             13. Ünite: Giriş/Çıkış Akışı 
--------------------------------------------------------------------------------------------------------------------------------
 `<cmath>`                   Matematik kütüphane fonksiyonları (Bölüm 6.3) için gerekli prototiplerini içerir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<cstdlib>`                 Sayı-metin ya da metin sayi dönüşümleri, bellek tahsisi, rasgele sayılar ve bazı faydalı fonksiyonlar
                             için gerekli fonksiyon prototiplerini içerir. Bu başlığın kısımlarından Bölüm 6.7'de,
                             11. Ünitede (Operatör Aşırı Yükleme), 17. Ünitede (İstisna Yönetimi),
                             22. Ünitede (Bitler, Karakterler, C Karakter Dizileri ve Struct) ve Ek-F'de bahsedilmiştir.
--------------------------------------------------------------------------------------------------------------------------------
 `<ctime>`                   Tarih ve zaman manipülatörleri için gerekli fonksiyon prototipleri ve sınıfları içerir.
                             Bu başlık Bölüm 6.7'de kullanılmıştır.
--------------------------------------------------------------------------------------------------------------------------------
 `<array>`,`<bitset>` 
 `<vector>`,`<stack>`, `<list>`,       Bu başlıklar C++ Standart Kütüphane kaplarının (Container) işleyen sınıfları içerir.
`<forward_list>`, `<deque>`,           Kaplar programın çalışması esnasında veriyi depolarlar.
 `<queue>`,  `<unordered_map>`,        `<vector>` başlığı ilk olarak 7. Ünitede (Dizi ve Vektör Sınıf Şablonları) tanıtılmıştır.
`<unordered_set>`, `<set>`,            Tüm bu başlıklar 15. Ünitede (Standart Kütüphane Kapları ve Yineleyiciler) incelenecektir.
--------------------------------------------------------------------------------------------------------------------------------
`<cctype>`                          Çeşitli özellikler için karakterleri test eden fonksiyonların prototiplerini içerir 
                                    (karakterin rakam ya da noktalama işareti olup olmaması gibi).
                                    Bu başlık, küçük harfleri büyük harfe çevirmeye ya da
                                    tam tersini yapan fonksiyonların prototiplerini de içermektedir. 
                                    Bu konulardan 22. Ünitede (Bit, Karakter, C Karakter Dizileri ve struct) bahsedilecektir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<cstring>`                | C-tarzı karakter dizini işleme fonksiyonları için gerekli fonksiyon prototiplerini içerir.
                              Bu başlık 10. Ünitede (Operatör Aşırı Yükleme) kullanılmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<typeinfo>`               | Çalışma-zamanı tipi tanımlamaları (çalışma zamanında veri tiplerine karar verme) için kullanılan
                             sınıfları içerir. Bu başlık Bölüm 12.8'de kullanılmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<exception>`, `<stdexcept>` | Bu başlıklar İstisna Yönetimi için kullanılan sınıfları içerir.
                                 İstisna Yönetimi konusundan 17. Ünitede bahsedilmiştir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<memory>`                 | C++ Standart Kütüphane Kapsayıcılarına bellek tahsisi yapan sınıf ve fonksiyonları içerir.
                             Bu başlık 17. Ünitede ele alınmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<fstream>`            | Disk üzerindeki dosyalara giriş/çıkış işlemlerini gerçekleştiren fonksiyonların prototiplerini içerir.
                         14. Ünitede (Dosya İşleme) bahsedilmiştir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<string>`                  C++ Standart Kütüphanesindeki string sınıfının tanımını içerir.
                               21. Ünitede (string Sınıfı ve Karakter Dizini Akış İşlemesi) bahsedilmiştir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<sstream>`                 Bellekte bulunan karakter dizinlerini giriş olarak alan ve yine belleğe karakter dizinlerini çıkış 
                             olarak vermeye yarayan fonksiyon prototiplerini içerir. 
                             21. Ünitede (string Sınıfı ve Karakter Dizini Akış İşlemesi) bahsedilmiştir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<functional>`              C++ Standart Kütüphane algoritmalarını kullanan fonksiyon ve sınıfları içerir.
                              Bu başlık dosyası 15. Ünitede kullanılmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<iterator>`                C++ Standart Kütüphane Kaplarındaki veriye ulaşmak için kullanılacak sınıfları içerir. 
                              Bu başlık dosyası 15. Ünitede kullanılmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<algorithm>`               C++ Standart Kütüphane Kaplarındaki veriyi işlemek için kullanılacak fonksiyonları içerir.
                              Bu başlık dosyası 15. Ünitede kullanılmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<cassert>`                 Hata ayıklamaya yardımcı teşhisleri eklemeye yarayan makroları içerir. 
                              Bu başlık dosyası Ek E'de kullanılmıştır. 
--------------------------------------------------------------------------------------------------------------------------------
 `<cfloat>`                  Sistemin ondalıklı sayı büyüklük limitlerini içerir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<climits>`                 Sistemin integral büyüklük limitlerini içerir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<cstdio>`                  C-tarzı standart giriş/çıkış kütüphane fonksiyon prototiplerini içerir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<locale>`                  Normalde farklı diller için doğal formda veri işleme amacıyla kullanılan fonksiyon ve
                             sınıfları içerir (örneğin, para biçimleri, karakter dizinlerini sıralama, karakter tanıtımı, vb.). 
-------------------------------------------------------------------------------------------------------------------------------- 
 `<limits>`                  Her bilgisayar platformundaki sayısal veri tipi limitlerini tanımlayan sınıfları içerir. 
--------------------------------------------------------------------------------------------------------------------------------
 `<utility>`                 C++ Standart Kütüphane başlıkları tarafından kullanılan sınıf ve fonksiyonları içerir. 
--------------------------------------------------------------------------------------------------------------------------------
*/
}