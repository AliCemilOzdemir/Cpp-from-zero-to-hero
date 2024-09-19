// c++9.cpp  22.08.2024  @alicemilozdemir
// syf 87 "3.7 Arayüzü Gerçekleştirmeden Ayırma" konusundan
// syf 92 "Set fonksiyonu ile verinin doğruluğunun belirlenmesi" konusuna kadar gelir.

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
    GradeBook gradeBook1("CS101 introduction to C++ programming");
    GradeBook gradeBook2("CS102 data structures in C++");

    // her bir GradeBook nesnesi courseName özelliğini yazdır
    cout<<"GradeBook1 is created for course :"<<gradeBook1.getCourseName()
        <<"\nGradeBook2 is created for course :"<<gradeBook2.getCourseName()
        << endl;

}