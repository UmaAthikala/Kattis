#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(;n>0;n--)
    {
        int r,e,c;
        cin>>r>>e>>c;
        if(r>e-c)
            cout<<"\ndo not advertise";
        else if(r==e-c)
            cout<<"\ndoes not matter";
        else
            cout<<"\nadvertise";
    }
}
