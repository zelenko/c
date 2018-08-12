#include <stdio.h>
#include <string.h> // strcpy

//using namespace std;
void printBook(struct Books book);

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1; // Declare Book1 of type Book
    struct Books Book2; // Declare Book2 of type Book

    //string test = "test";
    //char * str = "Hello";  // the string "Hello\0" is pointed to by the character pointer
    // str. This "string" can not be modified (read only)
    char str[] = "Hello"; // the characters: 'H''e''l''l''o''\0' have been copied to the
                          // array str. You can change them via: str[x] = 't'

    // book 1 specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // book 2 specification
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    //Book2.subject = "Book";

    // Print Book1 info
    printBook(Book1);

    // Print Book2 info
    printBook(Book2);

    return 0;
}

void printBook(struct Books book)
{
    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject: %s\n", book.subject);
    printf("Book id: %d\n", book.book_id);
}