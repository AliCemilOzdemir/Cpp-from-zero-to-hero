// c++19_1.cpp  29.08.2024  @alicemilozdemir
// syf 224 "6.9 C++11 Rastgele Sayıları" konusundan
// syf 228 "6.11 Faaliyet Alanı Kapsam Kuralları" konusuna kadar gelir.

// C++11 Rastgele sayı üreteç motoru ve dağıtıcısı kullanımı

#include<iostream> // standart giriş/çıkış.
#include<random> // C++11'e ait rastgele sayı üretme özelliklerini içerir
#include<iomanip> // argümanlı akış manipülatörlerini içerir.
#include<ctime> // time fonk. prototipi içerir.

using namespace std;

int main()
{
    // Varsayılan rastgele sayı üreteç motorunu kullan ve güncel zamanı çekirdek(seed) olarak ver.
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> taskala(1,6);

    for (unsigned int i = 1; i < 11; i++)
    {
        cout<<setw(3)<<taskala( engine);

        if(i%5 == 0)
            cout<<endl;
    
    } // for sonu
    
} // main sonu

/*
Tanımlayıcıların özellikleri :
    isim ,tip ,boyut ,değer ,ömür ,faaliyet alanı ,bağlantı

C++ 5 adet DEPOLAMA SINIF BELIRLEYICISI içerir - bunlar ÖMÜR'e karar verirler.
    register ,static ,extern ,mutable ,thread_local

bağlantı : değğişkenin birkaç dosyada mı kullanıldığında yoksa ,tek dosyada mı kullanıldığına karar verir.

automatic ,,dynamic

dynamic ömür süresi : Program çalışırken ek bellek ayırma işlemine dinamik bellek ayırma denir.Dinamik
                      olarak ayrılan değişkenler dynamic ömür süresine sahiptirler

automatic ömür süresi :
        1) Fonksiyon içinde deklare edilen yerel değişkenler
        2) Fonksiyon parametreleri
        3) register ile deklare edilen yerel değişkenler ve fonksiyon parametreleri

    tanımlandıkları blok içerisinde oluşturulurlar ve blok dışına çıkıldığında yok edilirler.
    fonksiyon tanımının olduğu küme parantezleri içinde var olurlar .Yerel değişkenler
    varsayılan olarak automatic ömüre sahiptirler.

! değişkenleri mümkün olduğunca ilk kullanılacakları yere yakın tanımlayın.
automatic ömür İYİ YAZILIM MÜHENDİSLİĞİNİN EN DÜŞÜK SEVİYEDE ERİŞİM HAKKI ilkesine uygun!
hafızayı verimli kullanır !

register değişkenleri :
    makine dili verileri hesaplama ve diğer işlemler için register'lara yazılırlar.
    register değişkenler hafıza yerine yüksek hızlı register'lara yazılırlar ,işlemleri de registerde yapılır
    boylece hafızaya yazmak yerine register'a yazmak performans artışı sağlar!

    ancak çoğu derleyici sık kullanılan değişkenleri günümüzde register'lara yazmakta 
    ve zaman tasarrufu sağlamaktadır

    register unsigned int x = 7;   derleyici register tanımlamalarını görmezden gelebilir!

extern ve static :
    fonksiyonları ve statik ömre sahip değişkenleri tanımlamak için kullanılır.
    programın başlamasından sonlanmasına kadar hafızada tutulurlar.

yerel(local) ve extern(global) ömre sahip 2 çeşit static ömüre sahip değişken tipi bulunmaktadır.
    iki çeşit değişken de program boyunca değerini korur ancak yerel static değişkene başka bir 
    sınıf ve fonksiyondan erişemezsiniz.

static ömüre sahip tüm değişkenler başlangıçta 0 değerini alırlar.
*/