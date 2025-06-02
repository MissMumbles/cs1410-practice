#include <iostream>
using std::cout;
using std::cin;
using std::string;

struct Date
{
    int year;
    string month;
    int day;
};

struct Point{
    int x, y;
};

void printDate(Date& d){
    cout << "Date:" << d.month <<" "<< d.day <<","<< d.year<<'\n';
}

void printPoint(Point& p){
    cout << "(" << p.x << "," << p.y << ")"<< '\n';

}

int main(){
    Date dob{1995, "June", 18};
    Date dod{2014,"June",29};

    Point p, q, h;
    //Point p= (x,y)

    char trash;
    cout<< "Please enter the (x,y) coordinates for point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout<< "Please enter the (x,y) coordinates for point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    //cout << "DOB:" << dob.month <<" "<< dob.day <<","<< dob.year<<'\n';

    printDate(dob);
    printDate(dod);

    printPoint(p);
    printPoint(q);

    h.x= (p.x + q.x)/2;
    h.y= (p.y + q.y)/2;

    printPoint(h);

    return 0;
}