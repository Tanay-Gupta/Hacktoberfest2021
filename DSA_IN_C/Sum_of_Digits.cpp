#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum=0;
        cin>>x;
        while(x!=0)
        {
            sum=sum+x%10;
            x=x/10;
        }
        cout<<sum<<"\n";
    }
}