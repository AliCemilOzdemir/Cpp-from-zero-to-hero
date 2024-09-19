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

// :: operatörü KAPSAM ÇÖZÜNÜRLÜK OPERATÖRÜ olarak bilinir.
// Bu operatör her bir üye fonksiyonu GradeBook sınıf tanımlamasına(GradeBook.h) bağlar.
// Yani sınıfın üye fonksiyonlarını ve üye değişkenlerini bildirir.
// Ustteki GradeBook üye fonksiyonlarını GradeBook:: olmadan yazmak bu fonksiyonların
// derleyici tarafından tanınmamasına neden olur.
// Derleyici bu fonksiyonları özgür(main gibi) ve ya kayıp fonksiyonlar olarak ele alır.
// bu fonksiyonlar aynı zamanda global fonksiyonlardır.

