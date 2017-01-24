#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // variables
    double theta;
    int height = 31;
    int length =0;
    // io
    cout << ("Enter the angle theta in degrees:\n");
    cin >> theta;
    // algorithm
    theta = ((theta * M_PI )/ 180);
    length = 0;
    for (int count = 0;count < height; count++){
        cout << ("\n");
        length = count/tan(theta);
        for (int count2 = 0; count2 <= length-1; count2++){
            cout << ("*");

        }
        }



    return 0;
}