#include <iostream>
using namespace std;

typedef union money
{
    int aronno;

    float argha;
    char boi;

}mon;
// Union

int main()
{
    mon ar;
    ar.aronno = 10000;
    ar.argha = 5000.20;
    cout << ar.aronno << "," << ar.argha << endl;

    
    return 0;
}

