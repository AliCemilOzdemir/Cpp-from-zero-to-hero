// c++22_1.cpp  31.08.2024  @alicemilozdemir
// syf 252 "6.21 Özyineleme Örneği :Fibonacci serisi" konusundan
// syf 279 "Bölüm 7: Sınıf şablonları dizi ve vektör ,istisnai durum yakalama" konusuna kadar gelir.

#include<iostream>
using namespace std;

unsigned long long int factorial(unsigned int);
unsigned long long int fibonacci(unsigned int);


int main()
{
    // 20! 'e kadar doğru hesaplıyor.
    for (int i = 0; i < 21; i++)
    {
        cout<<i<<"! = "<<factorial(i)<<endl;
    }

    // 20'ye kadar olan fibonacci değerlerini hesaplıyor.
    for (int i = 0; i < 21; i++)
    {
        cout<<"fibonacci("<<i<<") = "<<fibonacci(i)<<endl;
    }

    cout<<"\nfibonacci(30) = "<<fibonacci(30);
    cout<<"\nfibonacci(40) = "<<fibonacci(40);

} // main sonu

unsigned long long int factorial(unsigned int x)
{
    if(x==1 || x==0)
        return 1;
    
    else if(x > 1)
        return x*factorial(x-1);

    else
        return -1;
} // end of factorial func.


unsigned long long int fibonacci(unsigned int x)
{
    if(x == 1 || x== 0)
        return x;
    
    else if(x>1)
        return fibonacci(x-1) + fibonacci(x-2);

    else
        return -1;
} // end of fibonacci func