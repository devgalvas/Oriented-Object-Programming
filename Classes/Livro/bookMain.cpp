#include "book.h"
#include "book.cpp"

int main ()
{
    Book b("O declinio de um homem", "Osamu Dazai", "Estacao Liberdade", "Ficcao Literaria");

    Book user_choice;

    cout << b;
    cout << user_choice;

    cout << "Insira os atributos para o livro 'unknown': \n";
    cin >> user_choice;

    cout << user_choice;
}
