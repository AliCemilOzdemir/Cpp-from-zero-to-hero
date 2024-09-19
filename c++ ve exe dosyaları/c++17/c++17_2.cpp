// c++17_2.cpp  28.08.2024  @alicemilozdemir
// syf 215 "6 milyon defa atılan zar oyunu" konusundan
// syf 218 "srand ile rastgele sayı üretimi" konusuna kadar gelir.

#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

// 6M tane zarın atımını ve sonucların dagilimini inceleyen program
int main()
{
    unsigned int bir=0;
    unsigned int iki=0;
    unsigned int uc=0;
    unsigned int dort=0;
    unsigned int bes=0;
    unsigned int alti=0;

    unsigned int deger = 0;

    // alternatif yol
    int degerler[7] = {0};
    
    for(unsigned int sayac=1; sayac<=6000000; ++sayac)
    {
        deger = (rand()%6+1);
        // alternatif yol    
        ++degerler[deger];
        switch(deger)
        {
            case 1:
                ++bir;
                break;
            case 2:
                ++iki;
                break;
            case 3:
                ++uc;
                break;
            case 4:
                ++dort;
                break;
            
            case 5:
                ++bes;
                break;

            case 6:
                ++alti;
                break;

        } // switch sonu.

    } // for sonu

    cout<<setw(10)<<"face"<<setw(12)<<"Frequency"<<endl;
    cout<<setw(10)<<"1"<<setw(12)<<bir<<endl<<
        setw(10)<<"2"<<setw(12)<<iki<<endl<<
        setw(10)<<"3"<<setw(12)<<uc<<endl<<
        setw(10)<<"4"<<setw(12)<<dort<<endl<<
        setw(10)<<"5"<<setw(12)<<bes<<endl<<
        setw(10)<<"6"<<setw(12)<<alti<<endl;

    cout<<endl;

    // alternatif yol.
    for(unsigned int x=1; x<7; ++x)
    {
        cout<<degerler[x]<<endl;
    }
} // main sonu