// c++12.cpp  24.08.2024  @alicemilozdemir
// syf 124 "4.9 Algoritma Hazırlama: Sentinel Kontrollü Tekrar" konusundan
// syf 134 "4.10 Algoritma Hazırlama: İç içe Kontrol ifadeleri" konusuna kadar gelir.

#include<iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
    // iki GradeBook nesnesi oluşturma
    GradeBook myGradeBook("CS101 C++ programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();


}

/*
bir integer'ın max ve min değerleri şu şekilde alınabilir

climits , cfloat

#include<climits>
cout<<INT_MAX<<endl;       2147483647
cout<<INT_MIN<<endl;       -2147483648
*/