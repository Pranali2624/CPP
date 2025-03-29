#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    int bookId;
    string bookName;
    string publisher;
    double price;
    string authorName;

public:
    Book(int id, string name, string pub, double pri, string auth) {
        bookId = id;
        bookName = name;
        publisher = pub;
        price = pri;
        authorName = auth;
    }

    void display() {
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
        cout << "Author Name: " << authorName << endl;
    }

    bool search(int id) {
        return (bookId == id);
    }
};

class Novels : public Book {
private:
    string novelType;

public:
    Novels(int id, string name, string pub, double pri, string auth, string type)
        : Book(id, name, pub, pri, auth) {
        novelType = type;
    }

    void type() {
        cout << "Novel Type: " << novelType << endl;
    }
};

class Fictional : public Book {
public:
    Fictional(int id, string name, string pub, double pri, string auth)
        : Book(id, name, pub, pri, auth) {
        // If you want to add extra functionality, you can add attributes here
    }
};

int main() {
    Book b(1, "Book1", "Publisher1", 100, "Author1");
    Novels n(2, "Novel1", "Publisher2", 200, "Author2", "Type1");
    Fictional f(3, "Fictional1", "Publisher3", 300, "Author3");

    cout << "Book Details:" << endl;
    b.display();

    cout << "\nNovel Details:" << endl;
    n.display();
    n.type();

    cout << "\nFictional Book Details:" << endl;
    f.display();

    return 0;
}