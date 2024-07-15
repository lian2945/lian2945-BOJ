#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int TestCaseNumber;
    int MaxTestCase=0;
    int idx;
    vector<int> TestCasearr;
    vector<bool> PrimeNumber(100001, true);
    vector<int> Prime;
    vector<int> SoinsuCount(100001, 0);
    cin >> TestCaseNumber;
    for(int i=0;i<TestCaseNumber;i++)
    {
        cin >> idx;
        TestCasearr.push_back(idx);
        if(idx>MaxTestCase) MaxTestCase=idx;
    }
    for(int i=2;i*i<=MaxTestCase;i++)
    {
        if(PrimeNumber[i]==true)
        {
            for(int j=i*i;j<=MaxTestCase;j+=i)
            {
                PrimeNumber[j]=false;
            }
        }
    }
    for(int i=2;i<=MaxTestCase;i++)
    {
        if(PrimeNumber[i]==true) Prime.push_back(i);
    }
    for(int i=0;i<TestCaseNumber;i++)
    {
        while(TestCasearr[i]>1)
        {
            for(int p : Prime)
            {
                if (TestCasearr[i]%p==0)
                {
                    while(TestCasearr[i]%p==0)
                    {
                        TestCasearr[i]/=p;
                        SoinsuCount[p]++;
                    }
                    cout << p << " " << SoinsuCount[p] << "\n";
                    SoinsuCount[p]=0;
                }
            }
        }
    }
    return 0;
}