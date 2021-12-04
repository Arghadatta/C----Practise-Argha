#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
    int a= 5;
    for(int i = 0; i < 5; i++) {
        cout<<i+1<<endl;

    }
    int* ptr;
    ptr = &a;

    cout << ptr <<endl;
    cout <<*ptr << endl;
    return 410;
}