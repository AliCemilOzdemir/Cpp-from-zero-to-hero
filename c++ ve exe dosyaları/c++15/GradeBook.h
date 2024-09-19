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
    void inputGrades(); // Kullanıcıdan istenildiği kadar harf not okur.
    void displayGradeReport() const;
    
    private:
    
    std::string courseName; // GradeBook için ders ismi
    unsigned int aCount; // A sayısı
    unsigned int bCount; // B sayısı
    unsigned int cCount; // C sayısı
    unsigned int dCount; // D sayısı
    unsigned int eCount; // E sayısı
    unsigned int fCount; // F sayısı

}; // GradeBook sınıfı sonu