
#include <iostream>
using namespace std;

int main() {
    int height, base;
    float ans;    //ans may come in fractions
    cout << "Enter height and base : ";
    cin >> height >> base;
    ans =( 1/2) * height * base;    //area of triangle formula

    cout << "Area of triangle is : " << ans;
    return 0;
}