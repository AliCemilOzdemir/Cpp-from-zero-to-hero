// c++14_1.cpp  26.08.2024  @alicemilozdemir
// syf 158 "KONTROL İFADELERİ :KISIM2 MANTIK OPERATÖRLERİ" konusundan
// syf 165 "Uygulama: bileşik faiz hesaplama" konusuna kadar gelir.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    // for ifadesi içinde for(int x = 5 ...) şeklinde tanımlanan x değişkeni yalnızca for içinde kullanılır
    // bu x'in etki alanının yalnızca for içi olmasından dolayıdır.
    for(unsigned int x = 1; x<=10; ++x)
    {
        cout<<x<<endl;
    }
    int total = 0;
    for(unsigned int number = 3; number<20; total+=number,number+=2); // boş gövde - kod blogu konulursa hata!

    cout<<"sum of 3 + 5 + 7 ,...19     ="<<total<<endl;

    // integer'lar string yapılamaz !
}
/*
for için :
    önce atama(unsigned int x = 1)
    sonra devam koşulunun kontrolü(x<=10)

    devam koşulu doğruysa :
        for blogunu({} arası) yürüt ve
        for gövdesindeki artırma işlemini yap(++x)
        
    devam koşulu yanlışsa :
        döngüden sonraki ifade ile devam et.
*/