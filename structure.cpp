#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
void printBook(struct Books *book);
struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main(){
    struct Books Book1;
    struct Books Book2;

    strcpy(Book1.title,"Learn C++ Programming");
    strcpy(Book1.author,"Chand Miyan");
    strcpy(Book1.subject,"C++ Programming");
    Book1.book_id=6494507;

    strcpy(Book2.title,"Telecom Billing");
    strcpy(Book2.author,"Yankit Singha");
    strcpy(Book2.subject,"Telecom");
    Book2.book_id=6494508;

    printBook( &Book1 );
    printBook( &Book2 );

    return 0;
}
void printBook(struct Books *book){
    cout<<"Book title:-"<<book->title<<endl;
    cout<<"Book author:-"<<book->author<<endl;
    cout<<"Book subject:-"<<book->subject<<endl;
    cout<<"Book id:-"<<book->book_id<<endl;

}