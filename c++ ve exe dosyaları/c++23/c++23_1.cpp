// c++23_1.cpp  01.09.2024  @alicemilozdemir
// syf 281 "7.4 Diziler Kullanan örnekler" konusundan
// syf 286 "7.4.5 Dizi veri grafiğini görüntülemek için Bar grafiği kullanma" konusuna kadar gelir.

// dizinin elemanlarına 0 atama ve değerlerini yazdırma
#include<iostream>
#include<iomanip>
#include<array>
#include<cstddef> // size_t std isim uzayındadır ve cstddef kütüphanesinde tanımlıdır..
using namespace std;

int main()
{
    array<int,5> n; // n 5 elemanlı bir dizi.

    // n dizisinin elemanlarına sıfır değeri atama.
    for (size_t i = 0; i < n.size(); i++)
    {
        n[i] = 0; // i.elemana 0 ata
    } // for sonu

    cout<<"Element"<<setw(13)<<"Value"<<endl;

    //her bir dizi eleman değerini yazdır
    for (size_t i = 0; i < n.size(); i++)
    {
        cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    } // for sonu



    // bildirim sırasında dizilere ilk değer atama
    array<int,5> m = {5,8,14,72,95};
    // eğer dizinin eleman sayısından daha az ilk değer var ise geri kalanlar 0 atanır.
    // array<int,5> m = {}; yapsaydık m dizisinin her elemanı 0 olarak atanacaktı.
    cout<<endl;
    cout<<"Element"<<setw(13)<<"Value"<<endl;

    //her bir dizi eleman değerini yazdır
    for (size_t i = 0; i < m.size(); i++)
    {
        cout<<setw(7)<<i<<setw(13)<<m[i]<<endl;
    } // for sonu



    // sabit değişkenler dizi boyutunu belirlemede kullanılabilir.
    const size_t arraySize_0 = 5; //const lara tanımlama sırasında değer atanmalıdır. Tersi hata.
    
    array<int,arraySize_0> s; // s arraySize elemanlı bir dizi.

    // s dizisinin elemanlarına çift sayı değeri atama.
    for (size_t i = 0; i < s.size(); i++)
    {
        s[i] = 2+2*i; // i.elemana 0 ata
    } // for sonu

    cout<<endl;
    cout<<"Element"<<setw(13)<<"Value"<<endl;

    //her bir dizi eleman değerini yazdır
    for (size_t i = 0; i < s.size(); i++)
    {
        cout<<setw(7)<<i<<setw(13)<<s[i]<<endl;
    } // for sonu

    
    
    const size_t arraySize_1 = 4;
    array<int,arraySize_0> a = {10,20,30,40}; // s arraySize elemanlı bir dizi.
    int total = 0;

    // a dizisi elemanlarının toplamı
    for (size_t i = 0; i < a.size(); i++)
    {
        total += a[i];
    } // for sonu

    cout<<endl;
    cout<<"a = {10,20,30,40}\nTotal of array a's elements  :"<<total<<endl;


} // main sonu.