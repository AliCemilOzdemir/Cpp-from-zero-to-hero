// c++24_1.cpp  01.09.2024  @alicemilozdemir
// syf 289 "7.4.7 Tarama Sonuçlarını Özetlemek için Dizilerin Kullanımı" konusundan
// syf 291 "7.4.8 Statik yerel diziler ve otomatik yerel diziler" konusuna kadar gelir.

#include<iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    const size_t responseSize = 20;
    const size_t frequencySize = 6;

    // anket cevapları
    const array<int,responseSize> responses = {1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5};
    
    // anket frekansı
    array<int,frequencySize> frequency = {0};

    for (size_t i = 0; i < responses.size(); i++)
    {
        frequency[responses[i]]++;
    }

    cout<<"Rating"<<setw(14)<<"Frequency"<<endl;

    for (size_t i = 1; i < frequency.size(); i++)
    {
        cout<<setw(6)<<i<<setw(14)<<frequency[i]<<endl;
    }
    
} // main sonu