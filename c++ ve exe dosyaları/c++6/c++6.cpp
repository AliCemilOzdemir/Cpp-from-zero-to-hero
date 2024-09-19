// c++6.cpp  19.08.2024  @alicemilozdemir
// syf 71 "GradeBook sınıfını tanımla ve test etme" konusundan
// syf 79 "3.5 Kurucu fonksiyonlar ile Nesnelere ilk değer atama" konusuna kadar gelir.

#include<iostream>
#include<string>
using namespace std;

class GradeBook
// kurucu fonksiyonlar nesnelerin özelliklerine ilk değerlerini atamak için kullanılırlar .
// normal fonksiyonlardan farklıdırlar : return etme işlemleri ve hatta tipleri(void dahil) olmaz.
// normalde kurucu fonksiyonlar public'te tanımlanırlar.
// oluşturulan her nesne için c++ kurucu fonksiyonu otomatik olarak çağrılır.
// böylece kurucu fonksiyonlar programda nesneler kullanılmadan önce onların üye değişkenlerine uygun ilk değerleri atarlar.
// kurucu nesne oluşturulduğunda çağrılır(örnekleme yapıldığında) ,
// eğer bir nesnede kurucu fonksiyon tanımlanmamışsa derleyici parametresi olmayan bir kurucu fonksiyon çağırır.
// derleyici tarafından çağrılan fonksiyon nesnenin değişkenlerine ya hiç değer vermez ya da o değişkenlerin tiplerinin
// varsayılan değerlerini verir : string için varsayılan değer "" dur.

{ // nesnede const bir fonksiyon tanımlandığında o fonksiyon nesnenin hiçbir özellipini değiştiremez.
    public:
        // ders ismi için set fonksiyonu
        void setCourseName(string name) // set değer atama
        {
            courseName = name;
        }

        string getCourseName() const // get değer alma
        {
            return courseName;
        }
        // set ve get kullanımı private değişkenlere erişmek için yaygındır.
        // GradeBook kullanıcısına hoşgeldin mesajı için fonksiyon
        void displayMessage() const
        {
            cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<endl;
        } // displayMessage fonksiyonunun sonu.

    private:
        // private 'ta tanımlanan değişkenler yalnızca tanımlandıkları sınıf içinde erişilebilirler.
        string courseName;
        // bu işleme veri saklama denir .courseName bu işlem ile birlikte enkapsüle edilmiş olur.
}; // GradeBook sınıfının sonu.


int main(){
    string nameOfCourse; // string = standart kütüphanede string başlığında bulunan bir sınıf
    GradeBook myGradeBook;

    // courseName ilk değerini yazdırma
    cout<<"Initial course name is : "<<myGradeBook.getCourseName()<<endl; // bir stringin ilk değeri boştur ,dolayısıyla bu kısımda bir değer gösterilmez

    // ders ismini kullanıcıdan alma
    cout<<"Please enter the course name :"<<endl;
    getline(cin,nameOfCourse); // ders ismini okuma - getline kullanımı için string başlığı dahil edilmeli
    /*string başlığı dahil edildikten sonra ,cin alt satır algılayana kadarki tüm metni nameOfCourse değişkenine atar.*/
    myGradeBook.setCourseName(nameOfCourse); // kurs ismini nameOfCourse olarak atama

    cout<<endl; // bir altsatıra geçsin
    myGradeBook.displayMessage(); // mesajı göster

} // main fonksiyonu sonu