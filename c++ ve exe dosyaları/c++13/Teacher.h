#include<string>

class Teacher
{
    
    public:
    // constructor func
    explicit Teacher(std::string name,std::string branch);

    void bonusCheck(int studentCount); // check if teacher get bonus

    // set values
    void setTName(std::string name);
    void setTBranch(std::string name);
    
    // get values
    std::string getTName();
    std::string getTBranch();
    
    private:
    std::string tName; //teacher's name
    std::string tBranch; // teacher's branch
};