# include <iostream>
using namespace std;
int main()
{// declaring variables
float fahrenheit=0.0f;
float celsius=0.0f;
cout << "Enter the temperature in celsius";
cin >> celsius;
fahrenheit = (celsius * 9.0/ 5.0) + 32;
cout << "the temperature in celsius"<< celsius << endl;
cout << "the temperature in fahrenheit"<< fahrenheit << endl;
return 0;
}
