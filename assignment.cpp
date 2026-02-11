#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a=21;
    int c;

    c=a;
    cout<<"Line 1 ->= Opeator,Value of c="<<c<<endl;

    c+=a;
    cout<<"Line 2 ->+= Opeator,Value of c="<<c<<endl;

    c-=a;
    cout<<"Line 3 ->-= Opeator,Value of c="<<c<<endl;

    c*=a;
    cout<<"Line 4 ->*= Opeator,Value of c="<<c<<endl;

    c/=a;
    cout<<"Line 5 ->/= Opeator,Value of c="<<c<<endl;

    c=200;
    c%=a;
    cout<<"Line 6 ->%= Opeator,Value of c="<<c<<endl;

    c<<=2;
    cout<<"Line 7 -><<= Opeator,Value of c="<<c<<endl;


    c>>=2;
    cout<<"Line 8 -> >>= Opeator,Value of c="<<c<<endl;

    c&=2;
    cout<<"Line 9 -> &= Opeator,Value of c="<<c<<endl;

    c^=2;
    cout<<"Line 10 -> ^= Opeator,Value of c="<<c<<endl;

    c!=2;
    cout<<"Line 11 -> != Opeator,Value of c="<<c<<endl;

}