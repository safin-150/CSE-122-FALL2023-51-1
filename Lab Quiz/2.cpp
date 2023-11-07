#include <iostream>
using namespace std;

void greatest(int n)
{
    if(n==1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c)cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
    else if(n==2)
    {
        char a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c)cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
    else if(n==3)
    {

        float a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c) cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
}

int main()
{
    cout<<"1 for integer"<<endl<<"2 for character"<<endl<<"3 for float"<<endl;
    int n;
    cin>>n;
    greatest(n);

    return 0;
}
