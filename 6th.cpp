#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b,int c){
    return a+b+c;
}

int sum(int a, int b,int c,int d){
    return a+b+c+d;
}
int sum(int a, int b,int c,int d,int e){
    return a+b+c+d+e;
}
int main()
{
    int a = 5;
    int &x = a;
    for (int i = 0; i < 1; i++)
    {
        cout << sum(a,a,a,a,a) << endl;
    }

    return 0;
}