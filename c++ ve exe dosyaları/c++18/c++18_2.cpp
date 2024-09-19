// c++18_2.cpp  28.08.2024  @alicemilozdemir
// syf 220 "6.8 Örnek Olay Çalışması :Şans Oyunu Enum Deyimi ile tanışma" konusundan
// syf 224 "6.9 C++11 Rastgele Sayıları" konusuna kadar gelir.

// zar atma programında rastgele sayı üretme

#include<iostream> // standart giriş/çıkış.
#include<cstdlib> // srand rand fonk. prototiplerini içerir.
#include<iomanip> // argümanlı akış manipülatörlerini içerir.
#include<ctime> // time fonk. prototipi içerir.

// std isim uzayını kullan.
using namespace std;

// fonk prototipleri
unsigned int rollDice(); // zar atar ,hesaplar ve toplamı gösterir. 

int main()
{
    // oyun durumunu gösteren enum deyimi
    enum Status {CONTINUE ,WON ,LOST}; // Sabit tanımlamaları

    // Months veri tipinin ilk harfi büyük-degiskenden farklı bir şey olduğunu vurgulamak icin
    enum Months {JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,NOV,OCT,DEC};
    // digerleri sırayla 2,3,4 ..12 değerlerini alır

    srand(static_cast<unsigned int>(time(0))); // güncel saati kullanarak rastgele sayı üretme

    unsigned int myPoint = 0;
    unsigned int sumOfDice = rollDice();
    Status gameStatus = CONTINUE;

    // İlk atışa göre oyunun durumuna karar ver.
    switch (sumOfDice)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    
    default:
        myPoint = sumOfDice; // Puani hatirla.
        gameStatus = CONTINUE;
        cout << "Point is "<<sumOfDice<<endl;
        break;
    } // switch fonksiyonu sonu.

    while(CONTINUE == gameStatus)
    {
        sumOfDice = rollDice(); // tekrar zar at.

        // oyunun durumuna karar ver.
        if(myPoint == sumOfDice)
            gameStatus = WON;

        else if(sumOfDice == 7)
            gameStatus = LOST;    
    } // while sonu

    if(gameStatus == WON)
        cout<<"Player won!"<<endl;

    else
        cout<<"Player loses!"<<endl;


} // main fonksiyonu sonu.

// zar atar ,hesaplar ve toplamı ekranda gösterir.
unsigned int rollDice()
{
    unsigned int die1 = rand()%6 + 1;
    unsigned int die2 = rand()%6 + 1;
    
    cout<<"Player rolled :"<<die1<<" + " <<die2<<" = "<<(die1 + die2)<<endl;

    return (die1 + die2);
} // rollDice sonu

// enum isimlerini büyük harfle yazın böylece normal değişken olmadıklarını anlayabilirsiniz.

/*
enum Borclular{ALICEMIL,YUSUF,LEYLA};
enum Akrabalar{LEYLA,HUSEYIN,ALICEMIL};

yaptigimizda ve ornegin 
x == ALICEMIL dedigimizde hangi ALICEMIL'in alınacağı problem oluşturur
bunun için KAPSAMLI ENUM geliştirilmiştir :(C++11)

enum class Akrabalar {LEYLA,HUSEYIN,ALICEMIL};
    x==Akrabalar::LEYLA;
    ifadesinde hangi LEYLA'nın alınacağı açıkça belirtilmiş olur

AYRICA

enum class'ın varsayılan numaralandırma yapısı int'tir .Siz bunu değiştirebilirsiniz :

    enum class Borclular : unsigned int {LEYLA,HUSEYIN,ALICEMIL};

şeklinde
*/