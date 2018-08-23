#include <iostream>
using namespace std;
int main()
{
 float angle1, angle2, angle3;
cout <<" Find the third angle of a triangle :" <<endl;
cout<<" Input the 1st angle of the triangle : ";
cin >>angle1;
cout<<" Input the 2nd angle of the triangle : ";
cin >> angle2;
angle3=180-(angle1+angle2);
cout << " The 3rd of the triangle is : " << angle3 << endl;
cout << endl;
return 0;
}
