#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c=0,d=0,a=0,r=0,p=0;
        cin>>n;
        string s;
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(s=="cakewalk")
            c++;
            else if(s=="simple")
            d++;
            else if(s=="easy")
            r++;
            else if(s=="easy-medium"||s=="medium")
            p++;
            else if(s=="medium-hard"||s=="hard")
            a++;
        }
        if(c>=1&&d>=1&&r>=1&&p>=1&&a>=1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}
