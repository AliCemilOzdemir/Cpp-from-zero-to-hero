// c++19_2.cpp  29.08.2024  @alicemilozdemir
// syf 228 "6.11 Faaliyet Alanı Kapsam Kuralları" konusundan
// syf 231 "6.12 Fonksiyon Çağırım Yığını ve Aktivasyon Kayıtları" konusuna kadar gelir.

#include<iostream>

using namespace std;

void useLocal(); // local x kullanır
void useStaticLocal(); // static local x kullanır
void useGlobal(); // global x i kullanır


int x = 1;

int main()
{
    cout<<"Global x in main is :"<<x<<endl;
    int x = 5;
    cout<<"Local x in main's outer scope is :"<<x<<endl;

    { // yeni faaliyet başlangıç alanı
        int x = 7;
        cout<<"Local x in main's inner scope is :"<<x<<endl;
    } // blok sonu

    cout<<"Local x in main's outer scope is :"<<x<<endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    cout<<"\nLocal x in main is :"<<x<<endl;
} // main sonu

void useLocal()
{
    int x = 25;

    cout<<"\nLocal x is "<<x<<" on entering useLocal is "<<endl;
    ++x;
    cout<<"Local x is "<<x<<" on exiting useLocal is "<<endl;
} // useLocal sonu

void useStaticLocal()
{
    static int x = 50;
    
    cout<<"\nLocal x is "<<x<<" on entering useStaticLocal is "<<endl;
    ++x;
    cout<<"Local x is "<<x<<" on exiting useStaticLocal is "<<endl;
} // useLocal sonu

void useGlobal()
{
    cout<<"\nGlobal x is "<<x<<" on entering useGlobal is "<<endl;
    x*=10;
    cout<<"Global x is "<<x<<" on entering useGlobal is "<<endl;
}