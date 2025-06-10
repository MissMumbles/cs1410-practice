#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::string;
using std::setw;

struct Month{
    string name;
    int days;
};



int main(){
    int year;
    cout<< "What is the current year?\n";
    cin>>year;
    Month months[]{
        {"January",31},
        {"February",year%4 == 0 ? 29:28},
        {"March",31},
        {"April",30},
        {"May",31},
        {"June",30},
        {"July",31},
        {"August",31},
        {"September",30},
        {"October",31},
        {"November",30},
        {"December",31},
    };

    // string months[12]={"January","February","March","April",
    //                    "MAy","June", "July","August",
    //                    "September","October","November", "December"
    // };



    // int days[]{
    //     31,year%4 == 0 ? 29:28,31,31,30,31,31,30,31,30,31
    // };

    cout<<setw(10)<<"Month" << setw(12)<< "Days/Month"<< '\n';
    for(int i=0;i<12;i++){
        // cout <<setw(10)<< months[i] << setw(12) << days[i]<< '\n';
        cout <<setw(10)<< months[i].name << setw(12) << months[i].days<< '\n';
    }


    return 0;
}