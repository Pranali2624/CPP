#include <iostream>
#include <string>
using namespace std;

// Structure to hold product details
struct Product {
    int productID;
    string productName;
    float originalPrice;
    float discount;
    float finalPrice;
};

class ProductStore {
public:
    // Function to input product details
    void inputProductDetails(Product &product) {
        cout << "Enter Product ID: ";
        cin >> product.productID;
        cin.ignore(); // To clear the input buffer

        cout << "Enter Product Name: ";
        getline(cin, product.productName);

        cout << "Enter Original Price: ";
        cin >> product.originalPrice;

        cout << "Enter Discount Percentage: ";
        cin >> product.discount;
    }

    // Function to calculate discount and final price
    void calculateDiscountAndFinalPrice(Product &product) {
        // Calculate discount amount
        float discountAmount = (product.originalPrice * product.discount) / 100;
        
        // Calculate final price after applying discount
        product.finalPrice = product.originalPrice - discountAmount;
    }

    // Function to display product details
    void displayProductDetails(const Product &product) {
        cout << "\n--- Product Details ---\n";
        cout << "Product ID: " << product.productID << endl;
        cout << "Product Name: " << product.productName << endl;
        cout << "Original Price: " << product.originalPrice << endl;
        cout << "Discount Percentage: " << product.discount << "%" << endl;
        cout << "Discount Amount: " << (product.originalPrice * product.discount) / 100 << endl;
        cout << "Final Price: " << product.finalPrice << endl;
        cout << "-----------------------\n";
    }
};

int main() {
    Product product;
    ProductStore store;

    int choice;

    do {
        cout << "\n--- Product Store Menu ---\n";
        cout << "1. Enter Product Details\n";
        cout << "2. Display Product Details\n";
        cout << "3. Calculate Discount and Final Price\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                store.inputProductDetails(product);
                break;
            case 2:
                store.displayProductDetails(product);
                break;
            case 3:
                store.calculateDiscountAndFinalPrice(product);
                cout << "Discount and final price calculated.\n";
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
