// c++21_1.cpp  31.08.2024  @alicemilozdemir
// syf 244 "Derleyici Aşırı Yüklenmiş Fonksiyonları nasıl ayırt eder" konusundan
// syf 246 "6.19 Fonksiyon Şablonları" konusuna kadar gelir.

#include<iostream>

using namespace std;

int square(int x)
{
    return x*x;
}
double square(double x)
{
    return x*x;
}

void nothing1(int a, float b, char c, int &d)
{
    // boş fonk
}

int nothing2(char a, int b, float &c, double &d)
{
    return 0;
}


int main()
{
    // Aşırı yüklenmiş fonksiyonlar imzalarına göre ayırt edilirler.
    // İmza bir fonksiyonun fonk. isim ve parametre tiplerinden oluşan kombinasyonuna denir.
    // Derleyici Tip Güvenlik Bağlantısı(type-safe linking) için fonksiyonları parametre tiplerine göre kodlar
    // bu işleme İsim Ayrıştırma(type mangling)/ İsim Süsleme(type decorating) denir.
    // Tip Güvenlik Bağlantısı aşırı yüklenmiş fonksiyonun doğru versiyonunun seçilmesini sağlar.

} // main sonu.

/*
GNU C++ derlemesi sonucu assembly dilinde oluşturulmuş Ayrıştırılmış İsimler(imza)

__Z6squarei		        	__Z 6 square i
__Z6squared			        __Z 6 square d
__Z8nothing1ifcRd		    __Z 8 nothing1 ifcRd
__Z8nothing2ciRfRd			__Z 8 nothing2 ciRfRd
main

__Z ortak
sayı ,fonksiyon isminin kaç karakterden oluştuğunu gösterir(square 6)
fonk ismi
parametre tipleri(int : i, double : d, char:c, float:f, (referans ise başına R), Rf,Rd ... )

*/
// fonksiyonlar aynı imzaya sahip olmamalıdır(yalnızca isim ve parametrelere bağlı) ,dönüş tipine bağlı değil
// main fonksiyonuna isim ayrıştırılması yapılmaz çünkü main'e aşırı yükleme yapılamaz.
// varsayılan değere sahip parametreler içeren fonksiyonların aşırı yüklenmesine dikkat edilmelidir.
// Aşırı yüklenmiş fonksiyonları ayırt etmek için yalnızca parametre listesi kullanılır.