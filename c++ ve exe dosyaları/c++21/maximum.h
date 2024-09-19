/*
Eğer program mantığı ve işlemleri her veri tipi için aynıysa, aşırı yükleme işlemi daha kullanışlı bir şekilde
fonksiyon şablonları ile yapılır. fonksiyon sadece bir kere yazılır ve farklı veri tipleri için çalıştırıla-
bilir.

tüm şablon tanımları template anahtar kelimesi ile başlar ve açı parantezleri içinde şablon parametre listesiyle
devam eder .Şablon parametre listesindeki tüm parametrelerden önce class/typename anahtar kelimesi kullanılır
Fonksiyon parametrelerinin tipini belirlemek için FORMAL TİP PARAMETRE olan T kullanılır. 
Farklı bir şeyde olabilir.
*/
template <typename X> // template<class T>
X maximum(X value1, X value2, X value3) // her üç değer de aynı tip girilmek zorunda ,
// örnegin birisi 'a' girilip diğeri 97 girilemez
{
    X maxValue = value1;

    if(maxValue <value2)
        maxValue = value2;

    if(maxValue <value3)
        maxValue = value3;    

    return maxValue;
} // maximum sonu.
/*
c++11 fonksiyonlar için izleyen dönüş tipi
template<typename T>
auto maximum(T x,T y,T z) -> T

*/