
#include <iostream>
#include <vector>

using namespace std;

// Defining product class

class Product {
    public:
    string name;
    double price;
    int quantity;

    Product(string name, double price, int quantity) {
        this -> name;
        this -> price;
        this -> quantity;
    }
};

// Defining POS system class

class PointOfSale{
    public:
        vector<Product>products;

        void addProduct(Product product) {
            products.push_back(product);
        }

        void removeProduct(int index) {
            products.erase(products.begin() + index);
        }

        double calculateTotal() {
            double total = 0;
            for(int i = 0; i < products.size(); i++) {
                total+= products[i].price*
                products[i].quantity;
            }

            return total;
        }

        void printReceipt() {
            cout<<'---- Receipt ----' << endl;
            for (int i = 0; i < products.size(); i++) {
                cout << products[i].name<< "x" << products[i].quantity << "-" << products[i].price << endl;
            }
            cout << "Total: " << calculateTotal() << endl;
            
        }
        
};

int main() {
    // create new point of sale system
    PointOfSale pos;

    // Add new products
    Product product1("Product 1", 9.99, 2);
    pos.addProduct(product1);
    Product product2("Product 2", 5.99, 7);
    pos.addProduct(product2);

    //remove a product
    pos.removeProduct(0);

    // Print the receipt
    pos.printReceipt();

    return 0;
}
