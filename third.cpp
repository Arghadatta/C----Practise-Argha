#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
    int a = 5;
    int* ptr;
    int** ptr2;
    ptr = &a;
    ptr2 = &ptr;
    cout << ptr <<endl;
    cout <<*ptr2 << endl;
    cout << **ptr2 << endl;
    return 0;
}