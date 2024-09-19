// c++18_1.cpp  28.08.2024  @alicemilozdemir
// syf 218 "srand ile rastgele sayı üretimi" konusundan
// syf 220 "6.8 Örnek Olay Çalışması :Şans Oyunu Enum Deyimi ile tanışma" konusuna kadar gelir.

// zar atma programında rastgele sayı üretme
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>

using namespace std;

int main()
{
    unsigned int seed = 0;
    unsigned int choice = 0;
    cout<<"Enter 1 or 2\n1) Enter a seed\n2) let computer do it randomly :";
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
    case 1:
    cout<<"Enter seed :";
    cin>>seed;
    srand(seed); // çekirdek değerli rastgele sayı üreteci

    for(unsigned int i = 1; i<=10; ++i)
    {
        cout<<setw(10)<<((rand()%6)+1);

        if(i%5 == 0)
        {
            cout<<endl;
        }
    }
    break;

    case 2:
    srand(static_cast<unsigned int>(time(0))); // çekirdek değerli rastgele sayı üreteci

    for(unsigned int i = 1; i<=10; ++i)
    {
        cout<<setw(10)<<((rand()%6)+1);

        if(i%5 == 0)
        {
            cout<<endl;
        }
    }
    break;
    }
}