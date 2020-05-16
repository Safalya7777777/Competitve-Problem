//noo
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        //no
         int sum=0;
        for(int i=0;i<n;i++)
        {
            if(k!=0)
            {
                if(b[n-1-i]>a[i])
                    sum=sum+b[n-1-i];
                else sum=sum+a[i];
                --k;
            }
            else sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}









