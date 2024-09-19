/*
    I want to make a program that have a class which is named as "Teacher"
    the Teacher class is took "name" and "branch" arguments by constructor function.
    the class will have a func named "bonusCheck" that will check if the teacher got bonus.

    void bonusCheck func:
        get 10 values which must be 1 or 2 .(1 for passed 2 for failed) by writing the message
            "Write 1 for passed 2 for failed :"
        if written invalid value write :
            invalid value ,try again...
        
        and if there are more than 8 people who passed ,write "BONUS TO INSTRUCTOR!"
*/

#include<iostream>
#include<string>
#include<iomanip>
#include "Teacher.h"

using namespace std;

Teacher::Teacher(string name,string branch)
{
    setTName(name);
    setTBranch(branch);
} // Teacher kurucu fonksiyon sonu

void Teacher::setTName(string name)
{
    if(name.size() <= 25)
    {
        Teacher::tName = name;
    } // if sonu

    else
    {    
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"Maximum character limit is exceeded...\nSo that only the first 25 character is cut."<<endl;
        Teacher::tName = name.substr(0,25);
        cout<<"Valid branch :"<<getTName()<<endl;        
        cout<<"------------------------------------------------------------"<<endl;

        int nameChoice = 0;
        while(nameChoice == 0) {
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"   If you want to change the instructor's name please enter 1 ,else enter 2   :";
            cin>>nameChoice;

            if(nameChoice == 1) 
            {
                string tempName;
                cout<<"Enter the instructor's name ,it should be less than 25 characters  :";
                cin.ignore();
                getline(cin,tempName);
                setTName(tempName);
            } // if sonu

            else if(nameChoice == 2)
            {
                ;
            } // else if sonu

            else
            {
                nameChoice = 0;
                cout<<"Invalid input ,please enter only 1 or 2"<<endl;
            } // else sonu
            cout<<"------------------------------------------------------------"<<endl;
        } // While sonu
    } // else sonu
} // setTName fonksiyon sonu


void Teacher::setTBranch(string name)
{
    if(name.size() <= 25)
    {
        Teacher::tBranch = name;
    } // if sonu

    else
    {
        cout<<"------------------------------------------------------------"<<endl;
        cout<<"Maximum character limit is exceeded...\nSo that only the first 25 character is cut."<<endl;
        Teacher::tBranch = name.substr(0,25);
        cout<<"Valid branch :"<<getTBranch()<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        
        int branchChoice = 0;
        while(branchChoice == 0) {
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"   If you want to change the branch name please enter 1 ,else enter 2   :";
            cin>>branchChoice;

            if(branchChoice == 1) 
            {
                string tempBranch;
                cout<<"Enter the Branch name ,it should be less than 25 characters  :";
                cin.ignore();
                getline(cin,tempBranch);
                setTBranch(tempBranch);
            } // if sonu

            else if(branchChoice == 2)
            {
                ;
            } // else if sonu

            else
            {
                branchChoice = 0;
                cout<<"Invalid input ,please enter only 1 or 2"<<endl;
            } // else sonu
            cout<<"------------------------------------------------------------"<<endl;
        } // While sonu
    } // else sonu
} // setTBranch fonksiyon sonu

string Teacher::getTName()
{
    return Teacher::tName;
} // getTName fonksiyon sonu

string Teacher::getTBranch()
{
    return Teacher::tBranch;
} // getTBranch fonksiyon sonu

void Teacher::bonusCheck(int studentCount)
{
    // x.ogrenci gectiyse 1'i kaldıysa 2'yi tuslayiniz :
    // 1 ise gecenleri 1 artir 2 ise kalanlari 1 artir
    // aksi halde gecersiz tuslama gecersiz yazip yeniden deger girmesini iste
    // studentCount sayısı kadar ogrencinin kalıp kalmadığı öğrenildiğinde
    // eğer studentCount'un %80'i ve fazlası geçtiyse "Öğretmene Ödül" yaz
    int passedStudents = 0;
    int failedStudents = 0;
    int input=0;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"\nDear " <<getTBranch()<<" Instructor " <<getTName()<<
              " ,"<<endl;
    while((passedStudents + failedStudents) < studentCount )
    {
        cout<<"   If "<<(passedStudents + failedStudents+1)<< ". student is passed "
              "Enter 1 ,else enter 2   :";
        cin>>input;
 
        if(input == 1)
        {
            passedStudents++;
        } // if sonu

        else if(input==2)
        {
            failedStudents++;
        } // if sonu

        else 
        {
            input = 0;
            cerr<<"Invalid input ,please enter only 1 or 2..."<<endl;
        } // else sonu
    } // while sonu
    cout<<"------------------------------------------------------------"<<endl;

    double passedLimit = static_cast<double>(passedStudents + failedStudents)*0.8;
    // limit of passed students to give bonus to instructor
    cout<<"------------------------------------------------------------"<<endl;
    
    // statistics of students
    cout<<"\nPassed students  :"<<passedStudents<<endl;
    cout<<"Failed students  :"<<failedStudents<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Percantage of passed students  :%"<<
        static_cast<double>(passedStudents) / (passedStudents + failedStudents) * 100
        <<endl;
    cout<<"BONUS LIMIT : %80\n"<<endl;

    // if students are passed or failed ,write a message.
    if(passedStudents >= passedLimit )
    {
        cout<<"\nCongragulations,\nBonus to dear \""<<getTBranch()<<"\" Instructor " <<getTName()<<"!"<<endl;
    } // if sonu
    else 
    {
        cout<<"\nUnfortunately,\n dear \""<<getTBranch()<<"\" Instructor " <<getTName()<<" doesn't have"
              " the right to get bonus !"<<endl;
    } // else sonu

    cout<<"------------------------------------------------------------"<<endl;
} // bonusCheck sonu

/*
cin ile okumada başlangıçtaki \n \t ya da diğer boşluk karakterleri göz ardı edilir
örneğin cin ile bir int ifade okunacaksa "    5\n" ifadesini girersek hiç bir problem olmaz
ve 5 değeri değişkene atanır .'\n' ifadesi "     5" yazdıktan sonra enter'a basmamızdan dolayı geldi
Işte bu enter'a basılmadan kaynaklı '\n' ifadesi cin tarafından gözardı edilir ve integer'a 5 değeri atanır.

ANCAAAK bu \n ifadesinden kurtulmuş olmayız .Bu \n ifadesi Tamponda saklı durur.
bundan dolayı cin ile birlikte getline kullanılacağı zaman cin.ignore() isimli bir fonksiyon
KULLANILMALIDIR .AKSİ HALDE tampondan değerleri okumaya başlayan getline fonksiyonu
girilen değere rastgelmeden \n değerine denk gelir ve bu da okumayı bitirmesine ve kendisine
parametre olarak verilmiş ifadeye "" atamasına neden olur .Böylece getline İŞLEVSİZLEŞİR!

cin.ignore() kullanımı cin ve getline fonksiyonlarının birlikte kullanılabilmesini sağlar.
*/