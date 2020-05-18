//ononononono
#include<bits/stdc++.h>
using namespace std;
int mn(int a,int b,int c)
{
    if(a<b&&a<c)
        return a;
    else if(b<a&&b<c)
        return b;
    else return c;
}
int mx(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
    return b;
    else return c;
}
int cal(int a,int b,int c)
{
    int minimum=mn(a,b,c);
    int maximum=mx(a,b,c);
    return (maximum-minimum);
}
int main()
{
    //no
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[4];
        int l=200001,flag=0;
        a[1]=0,a[2]=0,a[3]=0;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-48]=i+1;
            if(a[1]!=0&&a[2]!=0&&a[3]!=0)
            {
                flag=1;
                int ml=cal(a[1],a[2],a[3]);
                if(ml<l)
                    l=ml;
            }
        }
        if(flag==1)
        cout<<l+1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}






