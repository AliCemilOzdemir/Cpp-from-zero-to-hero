// c++1.cpp  17.08.2024  @alicemilozdemir
// sayfa 39 "c++ programlamaya giriş, giriş/çıkış ve Operatörler" konusundan
// syf 43 "ilk c++ programımızı değiştirmek" konusuna kadar gelir.

// Metin Yazan Program - her program programın amacını belirten bir yorum satırı ile başlamalıdır.

// önişlemci komutu
#include<iostream> // çıkış verisini ekrana getirmek için programa izin verir

int main() // main fonksiyonu program icrasını başlatır
{ // main fonksiyonu her cpp programında bulunmak zorundadır.
  // cpp programları ,HER ZAMAN ilk main fonksiyonu ile başlar.
    std::cout <<"C++'a Hos geldiniz!\n"; //mesajı göster.
    // standart   çıktı akış nesnesi
    // STDandard  OUT   Course 

    return 0; // program başarıyla sonlanırsa 0 döndür.
    // kullanımı zorunlu değil ,kullanmazsak bile program bitiminde cpp 0 döndürür.
} // main fonk sonu.

//yorumlar makine kodu/nesne kodu oluşturmaz

// iostream girdi/çıktı başlık dosyasıdır.
// std isim uzayı
    // std::cout gösterimi ,std isim alanına(namespace) ait bir komut kullandığımızı belirtir.
    // std:: ifadesi ,iostream başlığı ile programa dahil ettiğimiz programlar için gereklidir.
// çıktı ifadesindeki << operatörü ,akış ekleme operatörü olarak isimlendirilir.
// program çalışırken ,bu operatörün sağındaki değer çıktı akışına eklenir.