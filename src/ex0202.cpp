#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<< "Please enter a Day: ";
    string day;
    cin >>day;

    if(day=="sun" ||day=="sat"){
        cout << "It is the weekend! " << endl;
    }else{
        cout << "It is a weekday..."<< endl;
    }
    return 0;
}