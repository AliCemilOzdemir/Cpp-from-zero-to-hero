// GradeBook.h
// GradeBook sınıfının mainden ayrı bir sınıf olarak tanımlanması

// her program yürütmeye main fonksiyonu ile başlar ve her programda yalnızca 1 adet main fonk. olabilir.
// bundan dolayı bu kaynak kodu dosyasında main kullanılmadı ,
// aksi takdirde bu kaynak kodunun çalıştırıldığı program hata verir.
// nesne yönelimli bir c++ program inşa edildiğinde .h dosya uzantılı bir dosya içerisinde toplama
// başlık dosyası oluşturma(header oluşturma) olarak bilinir ve yeniden kullanılabilir kaynak kodu tanımlamasında adettendir
// program #include önişlem bildirimini başlığa ekleyerek kullanılır.

// GradeBook.h gibi bir başlık program olarak kullanılamaz çünkü main fonksiyonu içermemektedir.

// ÇOK ÖNEMLİ nedenlerden dolayı program başlıklarında(headerlarda) using bildirimi/direktifi kullanılmaz.

#include<iostream>
#include<string>

class GradeBook
{
    public:
    explicit GradeBook(std::string name)
    :courseName(name)
    {
        // boş gövde
    } //GradeBook kurucu fonksiyonu sonu

    void setCourseName(std::string name)
    {
        courseName = name;
    }
    std::string getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        std::cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<std::endl;
    }
    

    private:
    std::string courseName;

}; // end of class GradeBook.