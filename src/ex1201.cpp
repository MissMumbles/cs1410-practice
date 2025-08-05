#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
class Calculator {
    private:
        T a, b;

    public:
        Calculator(T a, T b): a(a), b(b){}

        T add() const { return a+b;}
        T subt() const { return a-b;}
        T mult() const { return a*b;}
        T divd() const { 
            if (b==0){
                throw runtime_error("Divide by zero not allowed");
            }
            return a / b;
        }
};

int main(){
    try{
        Calculator <double> c(10,2);
        cout << c.add() <<endl;
        cout << c.subt() <<endl;
        cout << c.mult() <<endl;
        cout << c.divd() <<endl;

        Calculator <int>c1(4,0);
        cout << c1.add() <<endl;
        cout << c1.subt() <<endl;
        cout << c1.mult() <<endl;
        cout << c1.divd() <<endl;
    }catch(const runtime_error& e){
        cerr << "An Exception occurred: " << e.what() << endl;
    }

    return 0;
}