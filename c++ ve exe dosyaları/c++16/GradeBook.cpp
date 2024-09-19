#include<iostream>
#include<iomanip> // parametreli akış manipülatörleri
#include "GradeBook.h"

// g++ c++x.cpp GradeBook.cpp

using namespace std;

// string argümanlı kurucu ile courseName'e ilk deger atama
GradeBook::GradeBook(string name)    // explicit kullanılmamasına dikkat edin.
:maximumGrade(0)
{
    setCourseName(name);
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

// kullanıcıdan belirli sayıda not ister ve sayaçları yeniler
void GradeBook::inputGrades()
{
    int grade1;
    int grade2;
    int grade3;

    cout<<"Enter three integer grades :";
    cin>>grade1>>grade2>>grade3;

    maximumGrade = maximum(grade1,grade2,grade3);
} // inputGrades sonu

int GradeBook::maximum(int x,int y,int z) const
{
    int maximumValue = x;

    if(y>maximumValue)
        maximumValue = y;

    if(z>maximumValue)
        maximumValue = z;

    return maximumValue;
}

void GradeBook::displayGradeReport() const
{
    cout<<"\n\nMaximum of grades entered :"<<maximumGrade<<endl;
} // displayGradeReport sonu