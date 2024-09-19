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
    void displayGradeReport() const; //Puanlara bağlı olan raporu göster.
    int maximum(int,int,int) const; // 3 değerden en büyüğünü bul.
    
    private:
    
    std::string courseName; // GradeBook için ders ismi
    int maximumGrade; //en yüksek notu saklar.

}; // GradeBook sınıfı sonu