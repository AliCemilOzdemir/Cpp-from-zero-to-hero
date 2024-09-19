#include<iostream>
#include "GradeBook.h"
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
    unsigned int gradeCounter = 1; // öğrenci sayacı

    while(gradeCounter <= 10)
    {
        cout<<"Enter grade : "; // giriş istendi
        
        // kullanıcıdan girilen başarı notunu al
        int grade = 0;
        cin>>grade;
        
        // yapılan işlemler
        total += grade;
        gradeCounter++;
    } // while sonu.

    // bitiş
    int average = total / 10;

    // son çıktı
    cout<<"\nTotal of all 10 grade is :"<<total<<endl;
    cout<<"Class Average is :"<<average<<endl;

} // determineClassAverage fonksiyonu sonu