// GradeBook.h
// GradeBook sınıf tanımlaması
// Bu dosya GradeBook.cpp'de tanımlanan üye fonksiyonların bir arayüzünü sunar
#include<string>

class GradeBook
{
    public:
    
    explicit GradeBook(std::string); // kurucu courseName'e ilk değer atar
    void setCourseName(std::string); // ders ismi atanır.
    std::string getCourseName() const; // ders ismi döndürülür.
    void displayMessage() const; // karşılama mesajı yazdırılır.

    private:

    std::string courseName; // GradeBook için ders ismi
}; // GradeBook sınıfı sonu