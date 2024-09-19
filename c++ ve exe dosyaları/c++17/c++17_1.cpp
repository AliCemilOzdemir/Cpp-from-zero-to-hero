// c++17_1.cpp  28.08.2024  @alicemilozdemir
// syf 214 "6.7 Örnek Olay Çalışması :Rastgele Sayı Üretimi" konusundan
// syf 215 "6 milyon defa atılan zar oyunu" konusuna kadar gelir.

#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
    // cout<<RAND_MAX<<endl;
    
    for(unsigned int i = 1; i<=20; ++i)
    {
        cout<<setw(5)<<(rand()%6+1);

        if (i%5 == 0)
        {
            cout<<endl;
        }
    }

} // main fonksiyonu sonu.