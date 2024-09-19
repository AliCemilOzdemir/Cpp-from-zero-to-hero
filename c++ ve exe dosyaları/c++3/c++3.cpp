// c++3.cpp  17.08.2024  @alicemilozdemir
// syf 44 "Diğer bir c++ programı : Tamsayıları Toplamak" konusundan
// syf 48 "2.5 Hafıza Kavramları" konusuna kadar gelir.

// iki tane tamsayıyı toplayan program
#include<iostream>

int main()
{
    // değişken tanımlama
    int number1=0 ,number2=0,sum=0; // tanımlaması doğrudur.C'deki tanımlamalar geçerli.
    // benzer şekilde : int number1,number2,sum; şeklinde de ve ayrı ayrı olacak şekillerde de tanımlama yapılabilir.
    
    //değerleri alma
    std::cout<<"Please enter the first integer :";
    std::cin>>number1;
    // standart isim alanına ait standart giriş nesnesi(std::cin) ve ">>" akış çıkarım operatörü


    std::cout<<"Please enter the second integer :";
    std::cin>>number2;

    // toplamı atama
    sum = number1 + number2;
    
    // sonucu yazdırma
    std::cout<<"\n------------------------------\n"<<"\tThe sum is : "<<sum<<
    "\n------------------------------\n"<<std::endl;

    // sum değişkeninin sayısal değerinin takip ettiği 'The sum is : ' karakter dizisini ekranda gösterir.
    // bunları std::endl AKIŞ MANİPÜLATÖRÜ takip eder .std::endl bir alt satıra geçer ve akışı sonlandırır.
    // std::endl satırı sonlandır demektir ve std isim alanına aittir .Akış manipülatörü yeni satıra geçer ve 
    // "Çıktı Tamponunu Temizler" .

    /*
    std::cout<<"\n------------------------------\n"<<"\tThe sum is : "<<sum<<
    "\n------------------------------\n"<<std::endl;

    ifadesinde yapılan işleme :
    birleştirilmiş/zincirlenmiş/geçişli akışa ekleme işlemi denir.
    */
    

    return 0;
}

// Tanımlayıcılar :
    // değişken ismi anahtar kelime olmayan geçerli bir tanımlayıcıdır.
    // tanımlayıcılar harflerden ,rakamlardan ,alt çizgilerden oluşan ve rakam ile başlamayan karakter serileridir.
    // c++ ,c gibi küçük-büyük harf duyarlıdır.
    // tanımlayıcı tanımlarken _ ya da __ ile başlayan tanımlayıcılar kullanmayın .
    // çünkü c++ derleyicileri kendi amaçları için arka planda bu tür tanımlayıcılar kullanmaktadırlar.