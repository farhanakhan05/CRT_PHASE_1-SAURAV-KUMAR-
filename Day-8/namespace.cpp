#include <iostream>
using namespace std;

   namespace Virat {
        void show() {
            cout << "Virat Kohli is a great cricketer." << endl;
        }
    };
    namespace Sachin {
        void show() {
            cout << "Sachin Tendulkar is a legendary cricketer." << endl;
        }
    };


int main() {
    Virat::show();// Accessing the show function from the Virat namespace
    Sachin::show();// Accessing the show function from the Sachin namespace
    return 0;
}