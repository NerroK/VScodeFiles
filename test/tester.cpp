#include <iostream>
using namespace std;

int main()
{
    cout << "Cube Volume Calculator\n\n\n\n\n";
    double x{}, y{}, z{};
    cout << "enter the cubes Length: ";
        cin >> x;
    
    cout << "enter the cubes Width: ";
        cin >> y;

    cout << "enter the cubes Height: ";
        cin >> z;

    cout << "the volume of this cube is: " << x * y * z;
    return 0;  
}