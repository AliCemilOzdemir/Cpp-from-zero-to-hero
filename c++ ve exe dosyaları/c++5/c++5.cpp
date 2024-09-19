// c++5.cpp  17.08.2024  @alicemilozdemir
// syf 67 "Bölüm 3: Sınıf ,Nesne ve String'lere Giriş" konusundan
// syf 71 "GradeBook sınıfını tanımla ve test etme" konusuna kadar gelir.

// displayMessage fonksiyonlu GradeBook sınıfını tanımlama

#include<iostream>
using namespace std;

// GradeBook sınıfını tanımlama
class GradeBook
{
public: // public erişim belirteci - bu erişim belitecinden sonra verilen fonksiyon herkesin erişimine açıktır.

    // fonksiyon GradeBook kullanıcılarına hoş geldin mesajı yazar.
    void displayMessage() const
    {
        // const olarak tanımlamak demek oluyor ki fonksiyon üzerinde işlem yaptığı nesneyi değiştirmiyor
        // değişim olursa hata mesajı ver
        cout<<"Welcome to the Grade Book!"<<endl;
    }


};// GradeBook sınıfının sonu

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();

} // main sonu

// Public erişim belirtecinin içine yazılmış fonksiyonlar ,programdaki diğer fonksiyonlar(main gibi) ve diğer sınıfların
// fonksiyonları tarafından çağrılabilirdir . Erişim belirtecinden(public/private/protected) sonra daima : gelir.
// UML sınıf diyagramında public fonksiyonlar + ile temsil edilir.