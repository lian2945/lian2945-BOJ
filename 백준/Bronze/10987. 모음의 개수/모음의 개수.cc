#include <iostream>
using namespace std;
int main(void)
{
    string str;
    int t=0;
    cin >> str;
    for(char c : str)
    {
        switch(c)
        {
            case 'a':
                t++;
                break;
            case 'e':
                t++;
                break;
            case 'i':
                t++;
                break;
            case 'o':
                t++;
                break;
            case 'u':
                t++;
                break;
        }
    }
    printf("%d", t);
    return 0;
}