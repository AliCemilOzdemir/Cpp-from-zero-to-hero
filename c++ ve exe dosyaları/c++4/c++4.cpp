// c++4.cpp  17.08.2024  @alicemilozdemir
// syf 48 "2.5 Hafıza Kavramları" konusundan
// syf 67 "Bölüm 3: Sınıf ,Nesne ve String'lere Giriş" konusuna kadar gelir.


// if ifadesi ,ilişkisel operatör ve eşitlik operatörü kullanılarak
// iki tamsayının karşılaştırılması
#include<iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    /*
    Bu ifadeler std:: ön ekinin tekrarının gereğini ortadan kaldıran using bildirimleridir.
    bunlar yerine
    using namespace std;
    ifadesi kullanılırsa programa eklenebilecek tüm standart C++ başlık dosyalarındaki(<iostream> gibi)
    komutlar kullanılabilir olurlar.
    
    */

    int number1 = 0;
    int number2 = 0;

    cout<<"Enter two integers with blankspace(' ') or newline among them:\n";
    cin>> number1 >> number2;

    if(number1==number2)
    {
        cout<<number1 << "==" <<number2<<endl;
    }

    if(number1!=number2)
    {
        cout<<number1 << "!=" <<number2<<endl;
    }
    if(number1<number2)
    {
        cout<<number1 << "<" <<number2<<endl;
    }

    if(number1>number2)
    {
        cout<<number1 << ">" <<number2<<endl;
    }
    if(number1<=number2)
    {
        cout<<number1 << "<=" <<number2<<endl;
    }
    if(number1>=number2)
    {
        cout<<number1 << ">=" <<number2<<endl;
    }
}