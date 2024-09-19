#include<iostream>
#include<iomanip> // parametreli akış manipülatörleri
#include "GradeBook.h"

// g++ c++x.cpp GradeBook.cpp

using namespace std;

// string argümanlı kurucu ile courseName'e ilk deger atama
GradeBook::GradeBook(string name)    // explicit kullanılmamasına dikkat edin.
:aCount(0),
bCount(0),
cCount(0),
dCount(0),
fCount(0)
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
    int grade; // kullanıcının girdiği not
    cout <<"Enter the letter grades."<<endl
         <<"Enter the EOF character to end input."<<endl;

    // dosya sonu anahtar dizisi girilene kadar döngüm devam eder

    while( (grade = cin.get()) != EOF )
    //cin.get() klavyeden 1 karakter okur!Bu karakterin değerini(int) grade'de saklar ! girdiden yalnızca ilk karakteri okur(ssadasa icin 's' nin 115 degerini verir.)
    {
        // girilen notun türüne karar ver :
        switch(grade)
        {
            case 'A':
            case 'a':
                ++aCount;
                break;
            
            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;    
        
            case 'D':
            case 'd':
                ++dCount;
                break;
        
            case 'E':
            case 'e':
                ++eCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            case '\t':
            case '\n':
            case ' ':
                break;

            default: // diger butun karakterleri yakala !
                cout<<"Incorrect letter grade entered ."
                    <<"Enter a new grade."<<endl;
        } // switch sonu
    } // while sonu
} // inputGrades sonu

void GradeBook::displayGradeReport() const
{
    cout<<"\n\nNumber of students who received each letter grade:"
        <<"\nA :"<<aCount
        <<"\nB :"<<bCount
        <<"\nC :"<<cCount
        <<"\nD :"<<dCount
        <<"\nE :"<<eCount
        <<"\nF :"<<fCount<<endl;
} // displayGradeReport sonu