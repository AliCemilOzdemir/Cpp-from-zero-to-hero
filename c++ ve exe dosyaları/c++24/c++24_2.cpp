// c++24_2.cpp  01.09.2024  @alicemilozdemir
// syf 291 "7.4.8 Statik yerel diziler ve otomatik yerel diziler" konusundan
// syf x "y" konusuna kadar gelir.

#include<iostream>
#include<array>
using namespace std;

int main()
{
    // static array ilklendirilmemişse her değeri 0'dır. static int değişkende 0.
    // auto(normal) array ise ilklendirilmezse rastgele değerler alır.
    static int x;
    static array<int,5> n;

    for (size_t i = 0; i < 5; i++)
    {
        cout<<n[i]<<endl;
    }
    cout<<x<<endl;

    
    
} // main sonu