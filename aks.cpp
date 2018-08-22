#include <iostream>
using namespace std;
int main(){
//declaring variables
float centimeter,meter,kilometer;
cout << "convert centimeter into meter and kilometer"<<endl;
cout << "the length is input in centimeters"<<endl;
cin >> centimeter;
meter = centimeter/100;
kilometer = centimeter/100000;
cout << "length in meter is - "<< meter << endl;
cout << "length in kilometer is -"<< kilometer << endl;
return 0;
}
