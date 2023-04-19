#include <iostream>
#include "Product.h"

using namespace std;

int main()
{
    Product p1;
    cout << "Product 1:" << endl;
    p1.display();

    Product p2("Phone", "Electronics", 9999, 10);
    cout << "Product 2:" << endl;
    p2.display();

    const int arrSize = 3;
    Product arr[arrSize];

    for (int i = 0; i < arrSize; i++) {
        cout << "Enter data for product " << i + 1 << ":" << endl;
        arr[i].input();
    }

    for (int i = 0; i < arrSize; i++) {
        cout << "Product " << i + 1 << ":" << endl;
        arr[i].display();
    }

    cout << "Total cost of all products: " << totalCost(arr, arrSize) << endl;

    return 0;
}