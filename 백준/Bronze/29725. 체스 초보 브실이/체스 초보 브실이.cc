#include <iostream>
using namespace std;
int main()
{
    char c;
    int t = 0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> c;
            switch(c) {
                case 'P':
                    t++;
                    break;
                case 'N':
                    t+=3;
                    break;
                case 'B':
                    t+=3;
                    break;
                case 'R':
                    t+=5;
                    break;
                case 'Q':
                    t+=9;
                    break;
                case 'p':
                    t--;
                    break;
                case 'n':
                    t-=3;
                    break;
                case 'b':
                    t-=3;
                    break;
                case 'r':
                    t-=5;
                    break;
                case 'q':
                    t-=9;
                    break;
            }
        }
    }
    cout << t;
    return 0;
}