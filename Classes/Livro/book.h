#include <iostream>
#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book
{
private:
    string title, author, company, genre;

public:
    Book();
    Book(string, string, string, string);
    ~Book() {}
    
    string getTitle() {return title;}
    string getAuthor() {return author;}
    string getCompany() {return company;}
    string getGenre() {return genre;}

    void setTitle(string);
    void setAuthor(string);
    void setCompany(string);
    void setGenre(string);

    friend ostream& operator << (ostream& out, Book& b)
    {
        out <<"\nTitle: " << b.title << "\nAuthor: " << b.author << "\nCompany: " << b.company << "\nGenre: " 
            << b.genre << endl;

        return out;
    }

    friend istream& operator >> (istream& in, Book& b)
    {
        cout << "Insert the title of the book: ";
        cin >> b.title;
        cout << "Insert the name of the author: ";
        cin >> b.author;
        cout << "Insert the Company: ";
        cin >> b.company;
        cout << "Insert the genre: ";
        cin >> b.genre;

        return in;        
    }
};






#endif