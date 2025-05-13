#include <iostream>
using namespace std;

int main(){
    double c, f;
    cout << "Tempurature in Celcius: " << endl;
    cin >> c;

    f = 9.0 * c / 5.0 + 32;
    cout << "Temurature in Fahrenheit: " << f << endl;

    return 0;
}