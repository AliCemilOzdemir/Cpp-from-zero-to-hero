#include<iostream>
#include<iomanip> // parametreli akış manipülatörleri
#include "GradeBook.h"

// g++ c++12.cpp GradeBook.cpp

using namespace std;

// string argümanlı kurucu ile courseName'e ilk deger atama
GradeBook::GradeBook(string name)    // explicit kullanılmamasına dikkat edin.
{
    setCourseName(name); // burada :: kapsam çözünürlük operatörü kullanılmadı çünkü burada bir tanım
                         // lama yapmıyoruz.
} // GradeBook kurucu fonksiyonunun sonu.


// ders ismini atayan fonksiyon
void GradeBook::setCourseName(string name)
{
    if(name.size() <= 25)
    {
        courseName = name; // ders ismini nesnede saklar
    }

    else{
        courseName = name.substr(0,25);
        // hata mesajı
        cerr<<"Name \""<<name<<"\" exceeds maximum length(25).\n"
            "Limiting course name to first 25 characters.\n"<<endl;
    }

} // setCourseName fonksiyonu sonu

// ders ismini döndüren fonksiyon
string GradeBook::getCourseName() const
{
    return courseName; // nesnenin courseName değeri döndürülür
} // getCourseName fonksiyonu sonu

// GradeBook kullanıcısı için karşılama mesajı yazdır
void GradeBook::displayMessage() const
{
    // courseName değerini elde etmek için getCourseName'i çağırma
    cout<<"Welcome to the GradeBook for\n"<<getCourseName()
        <<"!"<<endl;
} //displayMessage fonksiyonu sonu

// Kullanıcı tarafından girilen 10 başarı notunun ortalamasını hesapla
void GradeBook::determineClassAverage() const
{
    // ilk değişkenlere değer atama
    int total = 0; // notların toplamı
    unsigned int gradeCounter = 0; // öğrenci sayacı

    cout<<"Enter grade or -1 to quit :";
    // kullanıcıdan girilen başarı notunu al
    int grade = 0;
    cin>>grade;


    while(grade != -1)
    {   
        // yapılan işlemler
        total += grade;
        gradeCounter++;
    
        cout<<"Enter grade or -1 to quit :";
        // kullanıcıdan girilen başarı notunu al"""
        cin>>grade;
    } // while sonu.

    if(gradeCounter != 0)
    {
    // bitiş
    double average = static_cast<double>(total) / gradeCounter;
    // bu dönüşümün adı açık dönüşümdür .Geçici kopya oluşturur.
    // örtülü dönüşüm derleyici tarafından yapılan
    // gradeCounter'ın double yapılması işlemidir.FARKLI TÜRLER ARASI İŞLEM YAPILAMAZ

    // son çıktı
    cout<<"\nTotal of all "<<gradeCounter<<" grades entered is :"<<total<<endl;
    cout <<setprecision(2)<< fixed;
    // parametreli akış manipülatörü(setprecision) -> kesinlik 2 olarak ayarlandı
    // setprecision kullanmak için ön-işleme direktifi(iomanip) kullanılmalı
    // endl manipülatörü bir parametresiz akış manipülatörüdür ,
    // parantez ve içerisinde bir değer tarafından takip edilemez
    // ve <iomanip> başlığına ihtiyaç duymaz.

    cout<<"Class Average is :"<<average<<endl;
    }

    else
        cout<<"No grades were entered";


} // determineClassAverage fonksiyonu sonu

// CAST OPERATÖRÜ
// static_cast<double>(x) -> x'in double kopyasını döndür
// Bir programda fixed ve setprecision akış manipülatörleri kullanıldığında hafızadaki değerler
// değişmeden kalmasına rağmen ,yazdırılan değerler setprecision tarafından belirlenen
// kesinlik seviyesinde yazdırılır ve bu işlem YUVARLAMA ile yapılır!