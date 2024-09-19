// c++23_2.cpp  01.09.2024  @alicemilozdemir
// syf 286 "7.4.5 Dizi veri grafiğini görüntülemek için Bar grafiği kullanma" konusundan
// syf 289 "7.4.7 Tarama Sonuçlarını Özetlemek için Dizilerin Kullanımı" konusuna kadar gelir.

// Dizi veri grafiğini görüntülemek için Bar grafiği kullanma

#include<iostream>
#include<iomanip>
#include<array>
#include<random>
#include<ctime>
#include<cstddef> // size_t std isim uzayındadır ve cstddef kütüphanesinde tanımlıdır..
using namespace std;

int main()
{
    const size_t arraySize_0 = 11;
    array<int,arraySize_0> n = {0,0,0,0,0,0,1,2,4,2,1};

    cout<<"Grade distrubition  :"<<endl;

    for (size_t i = 0; i < n.size(); i++)
    {
        if(i == 0)
            cout<<setw(8)<<"  0-9:";
        
        else if(i == n.size()-1)
            cout<<setw(8)<<"  100:";
        
        else
            cout<<setw(4)<< i*10 <<"-"<<i*10 + 9<<":";
        
        cout<<" ";
        for (size_t j = 0; j < n[i]; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    } // for sonu

    cout<<endl;
    // varsayılan rastgele sayı üretici motorunu kullanarak 1 ile 6 arasında düzensiz tamsayı değer
    // üreten default_random_engine(static_cast<unsigned int>(time(0)))
    default_random_engine engine(static_cast<unsigned int>(time(0))); // seed değeri vererek motoru oluştur.
    uniform_int_distribution<unsigned int> randInt(1,6);

    // 6 tane 0 dan oluşan frequency dizisini oluşturduk.
    const size_t arraySize_1= 7;
    array<int,arraySize_1> frequency = {};

    for (size_t roll = 1; roll <= 6000000; roll++)
    {
        frequency[randInt(engine)]++;
    } // for sonu

    cout<<"Face"<<setw(13)<<"Frequency"<<endl;

    for (size_t i = 1; i < frequency.size(); i++)
    {
        cout<<setw(4)<<i<<setw(13)<<frequency[i]<<endl;
    } // for sonu
    
    


} // main sonu