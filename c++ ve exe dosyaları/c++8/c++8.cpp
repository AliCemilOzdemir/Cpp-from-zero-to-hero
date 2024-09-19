// c++8.cpp  19.08.2024  @alicemilozdemir
// syf 83 "3.6 Yeniden kullanılması için sınıfı ayrı bir dosyaya yerleştirme" konusundan
// syf 87 "3.7 Arayüzü Gerçekleştirmeden Ayırma" konusuna kadar gelir.

// Derleyici GradeBook'un ne olduğunu bilmemektedir .Çünkü GradeBook kullanıcı tanımlı bir tiptir.
// Gerçekte ,derleyici c++ standart kütüphanesindeki fonksiyonları bile bilmemektedir.
// Derleyicinin bir sınıf kullanımını anlayabilmesi için bunu derleyiciye sınıf tanımlaması ile 
// açık olarak belirtmemiz gerekir .Örneğin string tipini kullanabilmek için string başlığını
// eklememiz gerekmektedir .Bu derleyiciye herbir string nesnesi kullanımı için hafızada ne kadar yer 
// ayırması gerektiğini söyler ve programa string üye fonksiyonlarının doğru bir şekilde çağrılmasını
// garanti eder.

#include<iostream> // bunu eklemeseydik de olurdu
#include "GradeBook.h"
/*
Normal olarak bir programın kaynak kodu(kullanıcı tanımlı) ve program dosyaları
aynı klasör içerisinde bulundurulur .önişlemci çift tırnak içerisinde bir başlık gördüğünde başlığı
#include direktifinin bulunduğu dosya ile aynı klasörde belirlemeye teşebbüs eder.Eğer önişlemci,
başlığı bu klasörde bulamaz ise c++ standart kütüphanesi başlığı gibi aynı klasörde arar.
Önişlemci açı parantezleri arasında görürse bunun c++ standart kütüphanesinin bir parçası olduğunu
farz eder ve programın bulunduğu klasöre bakmaz .Sonuçta şu hatayı alırız :

c++8.cpp:14:23: fatal error: GradeBook.h: No such file or directory
 #include <GradeBook.h>
                       ^
compilation terminated.

*/

// string GradeBook içinde dahil edildiği ve orada kullanıldığı ,ancak burada kullanılmadığı için
// eklenmedi
using namespace std;

int main()
{
    // iki GradeBook nesnesi oluşturma
    GradeBook gradeBook1("CS101 introduction to C++ programming");
    GradeBook gradeBook2("CS102 data structures in C++");
    // c++ nesneleri sadece veri içerirler ve
    // bu nesneleri yaratmak için derleyici bu nesnelerin bellekte kapladıkları alanı bilmelidir.
    // bunu da include direktifi ile sağlarız.
    // Derleyici sınıfın üye fonksiyonlarından sadece bir kopya yaratır ve tüm nesneler bu kodu paylaşırlar
    // Üye fonksiyon kodu değiştirilemez olduğundan(bütün nesneler bir fonksiyon için aynı kodu kullanıyor)
    // hepsi için aynı fonksiyonun 1 kerelik oluşturulması oldukça verimlidir.
    // Her bir nesne farklı verileri saklarlar bundan dolayı 
    // nesnenin boyutu sınıfın üye değişkenlerinin saklanması için gerekli hafıza miktarına bağlıdır.
    /*
    GradeBook.h'ı ekleyerek derleyiciye bir GradeBook nesnesinin boyutunu belirleme imkanı ver-
    miş oluyoruz ,derleyiciye nesnenin ihtiyaç duyacağı bilgilere erişme imkanı vermiş oluyoruz ve
    ayrıca sınıf nesnelerinin doğru kullanıldığını belirlememize de imkan sağlıyoruz.
    */
    cout<<"GradeBook1 is created for course :"<<gradeBook1.getCourseName()
        <<"\nGradeBook2 is created for course :"<<gradeBook2.getCourseName()
        << endl;

} // main sonu.