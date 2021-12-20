#include <iostream>

class familyInfo{
    private:
            int queue = 1;
    public:
            char name[100];
            int age;

};


using namespace std;
int main()
{
    familyInfo Argha;
    Argha.age = 15;
    gets(Argha.name);
    cout << "The Name is "<<Argha.name<<endl;
    cout << "The Age is "<<Argha.age<<endl;
    return 0;
}