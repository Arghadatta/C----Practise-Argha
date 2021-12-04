#include<iostream>

using namespace std;

int main(){
    char a[10];
    char b[10];
    double b1 = 10.22;
    double &a1 = b1;
    a1 = 55;

    cout << "Enter ur name: ";
    cin >> a;
    cout << a1 << endl; 
    cout << "the float is : " <<(float)b1;



}