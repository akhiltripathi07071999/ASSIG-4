# include <iostream>
using namespace std;
int main()
{// declaring variables
float fahrenheit=0.0f;
float celsius=0.0f;
cout << "Enter the fahrenheit";
cin >> fahrenheit;
celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
cout << "the temperature in fahrenheit"<< fahrenheit << endl;
cout << "the temperature in celsius"<< celsius << endl;
return 0;
}
