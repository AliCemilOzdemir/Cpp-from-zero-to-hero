// c++20_1.cpp  31.08.2024  @alicemilozdemir
// syf 231 "6.12 Fonksiyon Çağırım Yığını ve Aktivasyon Kayıtları" konusundan
// syf 240 "Varsayılan Argümanlar" konusuna kadar gelir.

// #include direktifleri
#include<iostream>

// using bildirimleri
using namespace std;

// fonksiyon main'in ustunde tanımlandığı için prototipe gerek yok ,prototipsiz main in altında tanımlansaydı kapsam hatası alırdık
inline double cube(const double side)
{
    return side*side*side;
} // küb fonk. sonu

// fonk prototipleri
int squareByValue(int);
void squareByReference(int &);


//main fonk baslangici
int main()
{
// stack yapısına pushing ile veri sokarız ,poping ile alırız.
// stack yapısını tabaklardan oluşan bir yığın gibi düşünebiliriz.
// stack yapısından bir veri alınacağı zaman Last In Fırst Out(LIFO) prensibi ile veri alınır.


// Her fonksiyon ,kendisini çağıran fonksiyona dönüş yapar
// Yığın çerçevesi / Aktivasyon kaydı olarak adlandırılan bilgiler(fonksiyonların dönüş yaptığı adresler ile
// birlikte bazı ek bilgiler) Fonksiyon Çağrım Yığınlarına PUSH edilir
// Çağrılan fonksiyon dönüş yaptığında ,bu fonksiyon çağrımı yığın çerçevesinden çıkar.(POP)
// çağrılan fonksiyon yığından çıktığında ,fonksiyonun automatic değişkenleri de bellekten silinir.
// çok fazla fonksiyon çağrımı YIĞIN TAŞMASI(STACK OVERFLOW) olarak bilinen ölümcül hataya neden olur.

// Argümanı olmayan fonksiyonlar iki şekilde tanımlanabilir : int x(void) , void y() - fonk. veri tipi fark etmez


// bir programı fonksiyonlardan yaratmak iyi yazılım mühendisliğidir ,ancak icra zaman yükü yaratırlar
// satıriçi fonksiyonlar bu probleme çözüm içindir .(Inline func.)
// inline anahtar kelimesi fonk. tipinin önünde kullanıldığında o fonksiyonun bir kopyası oluşturulur ve 
// fonksiyon her çağrıldığında o kopya eklenir .inline niteleyicisi fonksiyon kısa olduğunda kullanılmalıdır
// aksi halde amacından şaşar ve programı uzatır.

/*
inline fonksiyon kopyalandığı ve tekrar çağrım yapılmadığı için ,inline fonksiyon içeriği değiştirildiğinde
o fonksiyonu kullanan her programın ve kaynak kodunun yeniden derlenmesi gerekir ,Çünkü o fonksiyonu kullanan
program/kaynak kod o fonksiyonu çoktan kopyalamış ve fonksiyonu kullanmak için inline tanımlamasına gitmiyor!
*/

// bugünün derleyicileri oldukça gelişmiştir ve fonksiyonların inline olup olmamasına kendileri karar verebilirler.

    double sideValue=0;
    cout<<"Enter the side length of your cube    :";
    cin>>sideValue;

    cout<<"Volume of cube with side "<<sideValue<<"    :"<<cube(sideValue)<<endl;

// fonksiyonlara argümanlar değer ile ya da referans ile geçerler .Değer ile geçiş zaman ve alan maliyetlidir çünkü kopya oluşturulur
// referans ile geçiş de güvenlik zaafiyetine neden olabilir .Fonksiyon ,veriyi bozabilir.
// bir fonksiyon parametresinin referans ile gönderilmesi istenirse ,fonksiyon prototipinde o parametre tipinin hemen devamına
// & konur .& ile tanımlanan referans parametresi orijinal değişken için bir takma isimdir (alias). alias üzerinde yapılan
// işlemler ,orijinal değişkene uygulanacak işlemleri betimler

/*
int *count

ifadesi count bir tamsayıya işaret eder şeklinde okunur.
*/

    int x = 2; // değer aktarımı için
    int z = 4; // referans aktarımı için

    cout<<"\nx = "<<x<<" before squareByValue\n";
    cout<<"Value returned by squareByValue "<<squareByValue(x)<<endl;
    cout<<"x = "<<x<<" after squareByValue\n"<<endl;

    cout<<"z = "<<z<<" before squareByReference\n";
    squareByReference(z);
    cout<<"z = "<<z<<" after squareByReference"<<endl;
        

    // Fonksiyon içindeki referansların alias ile kullanımı
    int count = 1;
    int &cRef = count; // cRef count için takma isim olarak belirlenmiştir.
    ++cRef; // count ve cRef'in işaret ettikleri değer 1 artar.
    cout<<endl;
    cout<<count; // 2
    //referans değişkenler ilk atandıklarında değer almalıdır ve daha sonra başka değerler alamazlar

    /*
    fonksiyondan referans döndürmek çoğu zaman tehlikelidir çünkü
    eğer değişken static olarak tanımlanmamışsa ,fonksiyon sona erdiğinde automatic değişken ortadan kaybolur ve
    elimizdeki referans tanımsız bir değişkene işaret eder ve bu referansa aykırı referans denir.
    */

} //main fonk sonu

int squareByValue(int number)
{
    return number*= number; // argüman değişmez
} // squareByValue sonu


void squareByReference(int &numberRef)
{
    numberRef *= numberRef; // argüman değişmiştir.
} // squareByValue sonu