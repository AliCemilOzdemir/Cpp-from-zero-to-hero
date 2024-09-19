// c++21_2.cpp  31.08.2024  @alicemilozdemir
// syf 246 "6.19 Fonksiyon Şablonları" konusundan
// syf 248 "6.20 Özyineleme" konusuna kadar gelir.

#include<iostream>
#include "maximum.h"

using namespace std;

int main()
{
    // integer max finder
    int i1,i2,i3;

    cout<<"Enter three integer values :";
    cin>>i1>>i2>>i3;

    cout<<"The maximum integer value is "<<maximum(i1,i2,i3)<<endl;

    // double max finder    
    double d1,d2,d3;

    cout<<"Enter three double values :";
    cin>>d1>>d2>>d3;

    cout<<"The maximum double value is "<<maximum(d1,d2,d3)<<endl;

    // char max finder
    char c1,c2,c3;

    cout<<"Enter three characters :";
    cin>>c1>>c2>>c3;

    cout<<"The maximum character value is "<<maximum(c1,c2,c3)<<endl;
}