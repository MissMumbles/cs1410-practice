#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::string;

main(){
    int age;
    string fname;

    cout << "What is your age? ";
    cin>>age;

    // cin.ignore();
    cout<< "What is your name? ";
    getline(cin, fname);

    cout << "Hello "<<fname<<"! You are "<<age<<" years old!";
return 0;
}