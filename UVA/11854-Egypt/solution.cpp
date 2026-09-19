#include<iostream>
#include <algorithm>

using namespace std;

main()
{
    long long a,b,c;

    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
        break;

        if (a>b)
        swap (a,b);
        if(b>c)
        swap (b,c);
        if(a>b)
        swap(a,b);

        if(a*a + b*b ==c*c)
        cout<<"right"<<endl;
        else
        cout<<"wrong"<<endl;
    }
}
