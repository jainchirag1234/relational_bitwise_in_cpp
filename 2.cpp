#include<iostream>

#define MKSTR( x ) #x
using namespace std;

int main()
{
    cout<< MKSTR(HELLO C++) <<endl;
    return 0;
}