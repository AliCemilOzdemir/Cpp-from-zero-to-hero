// c++20_2.cpp  31.08.2024  @alicemilozdemir
// syf 240 "Varsayılan Argümanlar" konusundan
// syf 244 "Derleyici Aşırı Yüklenmiş Fonksiyonları nasıl ayırt eder" konusuna kadar gelir.

// include direktifleri
#include<iostream>

// using bildirimi
using namespace std;

// fonk prototipleri
unsigned int boxValume(unsigned int length = 1 ,unsigned int width = 1 ,unsigned int height = 1 );
// varsayılan argüman ayarlama işi yalnızca fonk. prototoipinde yapılır ve fonk tanımında yapılmaz.
// fonklara geçirilen değerler argümanlara soldan sağa atanırlar.

// func overloading
int square(int x);
double square(double x);

int number = 0;
int main()
{
    cout<<"\nDEFAULT VALUES OF A FUNC"<<endl;
    cout<<"----------------------------------------------------------------------";
    cout <<"\nThe default box valume is "<< boxValume()<<"\n"<<endl;

    cout<<"The box value with length 10 and default values for width and height is "<<boxValume(10)<<endl;
    cout<<"The box value with length 10  width 5 ,and default value for height is "<<boxValume(10,5)<<endl;
    cout<<"The box value with length 10  width 5 ,and height 2 is "<<boxValume(10,5,2)<<endl;

    int number = 1;

    // kod bloğu başı
    {
        int number = 2;
        cout<<"\n:: OPERATOR"<<endl;
        cout<<"----------------------------------------------------------------------";
        cout<<"\nLocal value of number :"<<number<<endl;
        cout<<"Global value of number :"<<::number<<endl;
        // kapsam çözümleme operatörü birden fazla gömülü kapsam alanlarında global değişkene erişmeyi sağlar
        // dikkat edin bir üstteki kapsam alanındaki değere değil ,global değere erişir!
    } // kod bloğu sonu

    /*
    C++ aynı isimde birden fazla fonksiyon tanımlanmasına izin verir ancak bu fonksiyonların parametre sayıları
    ya da türleri farklı olmaktadır .Buna Fonksiyon Aşırı Yükleme(FUNCTION OVERLOADING) denir.Aşırı veri yükleme
    değişik veri türleri üzerinde benzer işler yapan fonksiyonlar için kullanılır (örnek cmath başlığı)
    */
    cout<<"\nFUNC OVERLOADING"<<endl;
    cout<<"----------------------------------------------------------------------";
    cout<<endl;
    cout<<square(7)<<endl;
    cout<<square(7.5)<<endl;

} // main sonu

unsigned int boxValume(unsigned int length ,unsigned int width ,unsigned int height )
{
    return length * width * height;
} // boxValume sonu

// func overloading icin olusturulan square fonksiyonları
int square(int x)
{
    cout<<"square of integer "<<x<<" is ";
    return x*x;
}
double square(double x)
{
    cout<<"square of double "<<x<<" is ";
    return x*x;
}