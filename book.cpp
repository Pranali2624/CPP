#include <iostream>
#include <string>
#include <vector>

using namespace std;



class BookStore {
private:
  int bookID;
  string bookName;
  string publisher;
  float price;
  string authorName;
    

public:

void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter Publisher: ";
        cin >> publisher;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Author Name: ";
        cin >> authorName;
    }

    // Function to display book details
    void displayBooks() {
     {
            cout << "No books available in the store." << endl;
            return;
    }

    void disdata() {
        cout<<"book Id:"<<bookID<<endl;
        cout<<"bookName:"<< bookName<< endl;
        cout<<"publisher:"<< publisher<<endl;
        cout<<"price:"<< price<<endl;
        cout<< "author:" << authorName;

    };
}
        
};

int main() {
    BookStore book;
    book.addBook();
    book.displayBooks();
    return 0;
}
