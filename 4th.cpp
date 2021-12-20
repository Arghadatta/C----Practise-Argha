#include <iostream>

using namespace std;
int main()
{
    int aronno[100];

    for (int i = 0; i < 100; i++)
    {
        aronno[i] = (i + 1);
    }
    int *ptr;
    ptr = aronno;
    for (int i = 0; i < 100; i++)
    {
        cout << "The value is : " << *(ptr++) << endl; 
    }


    return 0;
}