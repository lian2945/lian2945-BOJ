#include <iostream>
using namespace std;
int main()
{
    int n;
    float f;
    cin >> n;
    cin >> f;
    if(n/(f*f) > 25)
    {
        cout << "Overweight";
    }
    else if(n/(f*f) >= 18.5)
    {
        cout << "Normal weight";
    }
    else
    {
        cout << "Underweight";
    }
    return 0;
}