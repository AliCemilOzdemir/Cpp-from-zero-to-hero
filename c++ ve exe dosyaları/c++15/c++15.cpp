// c++15.cpp  26.08.2024  @alicemilozdemir
// syf 169 "Switch Çoklu Seçim ifadesi" konusundan
// syf 202 "Ünite 6 Fonksiyonlar ve Özyinelemeye Giriş" konusuna kadar gelir.


#include<iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
    // iki GradeBook nesnesi oluşturma
    GradeBook myGradeBook("CS101 C++ programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();


}
