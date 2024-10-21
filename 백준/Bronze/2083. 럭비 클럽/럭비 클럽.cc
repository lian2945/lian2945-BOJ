#include <iostream>
using namespace std;
int main()
{
    string str;
    int age, weight;
    while(1)
    {
        cin >> str >> age >> weight;
        if(str=="#" && age==0 && weight==0) 
        {
            break;
        }
        else
        {
            if(weight>=80 || age>17)
            {
                cout << str << " Senior" << "\n";
            }
            else
            {
                cout << str << " Junior" << "\n";
            }
        }
    }
    return 0;
}