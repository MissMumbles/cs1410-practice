#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuad(double deg);

int main(){
    cout<<findQuad(23)<< endl;
    cout<<findQuad(123)<< endl;
    cout<<findQuad(223)<< endl;
    cout<<findQuad(323)<< endl;
    return 0;
}

string findQuad(double deg){
    double rad = 3.14 * deg /180;
    if(sin(rad) >= 0 && cos(rad)>=0){
        return "Quadrant I";
    } else if(sin(rad) >= 0 && cos(rad) < 0){
        return "Quadrant II";
    } else if(sin(rad) < 0 && cos(rad) < 0){
        return "Quadrant III";
    } else{
        return "Quadrant IV";
    }
}