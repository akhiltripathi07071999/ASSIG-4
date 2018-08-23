#include <iostream>
using namespace std;
int main (){
float days,weeks,years;
cout << "convert days into years,weeks and days "<<endl;
cout << "enter the time in days : ";
cin >> days;
weeks = days / 7;
years = days / 365;
cout << " the time in years :" << years << endl;
cout << "the time in weeks :" << weeks << endl;
cout << endl;
return 0;
}
