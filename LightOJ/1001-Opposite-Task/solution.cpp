#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int comp1,comp2;

        if(n<=10)
        {
            comp1 =n;
            comp2 =0;

        }
        else
        {
            comp1=10;
            comp2= n-10;
        }
        cout<< comp1<< " "<<comp2<<endl;

    }
    return 0;

}
