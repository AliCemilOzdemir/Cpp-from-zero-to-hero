// c++13.cpp  25.08.2024  @alicemilozdemir
// syf 134 "4.10 Algoritma Hazırlama: İç içe Kontrol ifadeleri" konusundan
// syf 158 "KONTROL İFADELERİ :KISIM2 MANTIK OPERATÖRLERİ" konusuna kadar gelir.

#include<iostream>
#include<string>
#include "Teacher.h"

using namespace std;


int main()
{
    Teacher DrMuratAltun("Dr. Murat Altun","Programming and Generative AI");
    DrMuratAltun.bonusCheck(5);
}

/* 
liste değer atama
    unsigned int x = {1};
    ve ya
    unsigned int x{1};

    şeklinde değer atamanıza müsaade eder ,ayrıca
    unsigned int x = 1.5 yazsaydınız
    KIRPMA ile x = 1 değerine sahip olacaktı

    ANCAK
    unsigned int x = {1.5};
    ve ya
    unsigned int x{1.5};

    ifadeleri derleyicinin hata vermesine neden olur bu da
    veri kaybını engeller.

Aynı zamanda nesnelere de bu şekilde değer atama yapılabilir örneğin :
    Teacher DrMuratAltun("Dr. Murat Altun","Programming and Generative AI");
ifadesi
    Teacher DrMuratAltun{"Dr. Murat Altun","Programming and Generative AI"};
    ile
    Teacher DrMuratAltun = {"Dr. Murat Altun","Programming and Generative AI"};

ifadeleri tamamen aynı anlama gelirler!
*/