// c++7.cpp  19.08.2024  @alicemilozdemir
// syf 79 "3.5 Kurucu fonksiyonlar ile Nesnelere ilk değer atama" konusundan
// syf 83 "3.6 Yeniden kullanılması için sınıfı ayrı bir dosyaya yerleştirme" konusuna kadar gelir.

#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
    public:
    // kurucu ,sınıfın ismi ile aynı isme sahiptir.
    // kurucu parametre listesi kurucu fonksiyonun parametre listesidir(bu örnekte(string name) listesi)
    // bu kurucu açık(public) tanımlanmıştır çünkü bir parametre alır(name)
    // kurucu ,üye değişken courseName'e kurucu fonksiyon parametresi name ile "ilk değer atama listesini" verir.
    // üye ilklendirme listesi parametre listesinden iki nokta(:) ile ayrılır.
    // bir üye ilklendirme üye ismini ve ilklendirilme değeri olan değişkeni parantezler içinde içerir(:courseName(name))
    // eğer ilklendirilecek birden fazla üye değişken varsa her bir ilklendirme ifadesi(:courseName(name) gibi)
    // virgül ile birbirlerinden ayrılırlar.
    // üye ilklendirme listesi kuruc fonk gövdesinden önce yürütülür.
    // ilklendirmeyi gövdeden önce yapmak hem performans açısından hem de başka bazı sebeplerden dolayı daha iyidir.
    // dikkat edilirse hem setCourseName fonksiyonu hem de kurucu fonksiyon parametre olarak aynı isimli name değişkenini alırlar.
    // Aynı değişken ismini(sınıf üye değişkeni olmamak kaydıyla) farklı fonksiyonlarda kullanabilirsiniz çünkü 
    // her birisi yalnızca kendi yerel alanlardında geçerlidirler.

    explicit GradeBook(string name)
    :courseName(name)
    {
        // boş gövde
    } //GradeBook kurucu fonksiyonu sonu

    void setCourseName(string name)
    {
        courseName = name;
    }
    string getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
    }
    

    private:
    string courseName;

}; // end of class GradeBook.

int main()
{
    // iki GradeBook nesnesi oluşturma
    GradeBook gradeBook1("CS101 introduction to C++ programming");
    GradeBook gradeBook2("CS102 data structures in C++");

    cout<<"GradeBook1 is created for course :"<<gradeBook1.getCourseName()
        <<"\nGradeBook2 is created for course :"<<gradeBook2.getCourseName()
        << endl;

} // main sonu.

// Bir sınıf için Kurucular sağlamanın yolları :

// 1) Derleyici tarafından otomatik olarak oluşturulan dolaylı kurucu fonksiyon
// Derleyici ,kullanıcı tarafından kurucu fonksiyon oluşturulmamış her sınıf için varsayılan bir kurucu fonksiyon oluşturur.
// dolaylı kurucular sınıfın üye değişkenlerine ilk değer atamazlar ,fakat başka bir sınıf nesnesinin herbir üye değişkeni için
// varsayılan bir kurucu çağırırlar(string değerlerine boş string "" atanması.) .
// Bir ilklendirilmemiş değişken tanımlanmamış(çöp) değer içerir.

// 2) Kullanıcının tanımladığı açık olarak argüman almayan kurucu fonksiyon
// Varsayılan kurucu gibi başka bir sınıf nesnesinin herbir üye değişkeni için varsayılan kurucuyu çağırır ve kullanıcı
// tarafından belirlenmiş ilave ilk değer atamaları gerçekleşir.

// 3) Argümanlı kurucu fonksiyon
// Argümanlı kurucu fonksiyon kullanımında C++ sınıfı için dolaylı bir kurucu yaratılmayacaktır.
