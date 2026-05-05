#include<iostream>
using namespace std;
int coffeeShotsVolume(int shots) {
    int volumePerShot = 30; // Assuming each shot is 30 ml
    return shots * volumePerShot;
}
int main() {
    int Shots;
    cout << "Enter the number of coffee shots: ";
    cin >> Shots;

    int totalVolume = coffeeShotsVolume(Shots);
    cout << "Total volume of coffee: " << totalVolume << " ml" << endl;

    return 0;
}