// c++10.cpp  23.08.2024  @alicemilozdemir
// syf 92 "Set fonksiyonu ile verinin doğruluğunun belirlenmesi" konusundan
// syf 105 "4:Kontrol Ifadeleri Kısım 1:Atamalar ,++ ve -- operatörleri" konusuna kadar gelir.

// bir sınıfın arayüzü sınıfın public fonksiyonlarıdır(kurucular dahil).

// iyi yazılım mühendisliği için kaynak kod (GradeBook.h) dosyasını dosyanın fonksiyonlarının tanım-
// lamasını içeren arayüz haline çeviririz :
// Bu arayüzde yalnızca üye fonksiyonların isimleri ,dönüş değer tipleri ve parametre listeleri bulunur.

// Ancak nesnenin işlemleri nasıl yaptığını içeren komutlar BULUNMAZ!
// bunun için nesnenin adını taşıyan(GradeBook.cpp) dosyasını oluştururuz ve tanımlamaları orada yaparız.
// Ardından programın yürütme fonksiyonu olan istemci programda nesneyi çağırır ve işlemlerimizi yaparız.

#include<iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    // iki GradeBook nesnesi oluşturma
    GradeBook gradeBook1("CS101 introduction to programming in C++");
    GradeBook gradeBook2("CS102 C++ data structures");

    // her bir GradeBook nesnesi courseName özelliğini yazdır
    cout<<"\nGradeBook1's initial course name is :"<<gradeBook1.getCourseName()
        <<"\nGradeBook2's initial course name is :"<<gradeBook2.getCourseName()
        << endl;

    gradeBook1.setCourseName("CS101 C++ programming");

    cout<<"\nGradeBook1's recent course name is :"<<gradeBook1.getCourseName()
        <<"\nGradeBook2's recent course name is :"<<gradeBook2.getCourseName()
        << endl;
}