// c++14_2.cpp  26.08.2024  @alicemilozdemir
// syf 165 "Uygulama: bileşik faiz hesaplama" konusundan
// syf 168 "do while tekrar ifadesi" konusuna kadar gelir.

// Compound Interest Calculations with pow standard library func.

#include<iostream>
#include<iomanip>
#include<cmath> //standard math library

using namespace std;

int main()
{
    double amount; // the amount of money to be deposited each year
    double principal = 1000;  //initial money
    double rate = .05; // interest rate
    //Ekrana başlıkları çıkar
    cout<< "Year" <<setw(21)<<"Amount on deposit"<<endl; //setw = set width

    // ondalık sayı formatını belirleme
    cout<<fixed<<setprecision(2);

    // on yıllık sürede her yılbaşındaki para miktarını hesapla,
    double compoundInterest = (1.0+ rate);
    for(unsigned int year = 1; year<=10; ++year)
    {
        // istenen yıl için para miktarını hesapla
        amount = principal * pow(compoundInterest,year);
        
        //tabloyu yaz
        cout<<setw(4)<<left<<year<<setw(21)<<right<<amount<<endl;
    } // for sonu
} // main sonu

/*
setw sağındaki değerin kaç karakterlik alana yazılacağını belirler.(AKIŞ MANİPÜLATÖRÜ)

left ve right parametresiz akış manipülatörleri program boyunca geçerli olurlar(yapışkan özellikler)
ve belirli bir alana(setw ile ayarlanmış) yazılan yazıların sağa mı sola mı yaslanacağını belirlerler

setprecision ve fixed 'de program boyunca değiştirilene kadar geçerli olurlar 
bu özelliklere yapışkan özellikler denir .Fakat setw yapışkan bir özellik değildir !
Yalnızca kendisinden sonraki değer için geçerlidir.

*/