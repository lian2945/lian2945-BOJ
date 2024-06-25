#include <iostream>
using namespace std;
int alpha[26];
int main(void)
{
    string str;
    cin >> str;
    for(auto c : str)
    {
        alpha[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        cout << alpha[i] << " ";
    }
    return 0;
}