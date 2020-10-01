#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int total_distance,mileage,n;
    cin>>total_distance>>mileage>>n;
    vector<int>a(n);
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
    a.insert(a.begin(),0);
    a.push_back(total_distance);

    i=0;
    int ans=0;
    while (a[i]+mileage<total_distance)
    {
        int last=i;
        while(i<a.size()-1 && (a[i+1]-a[last])<=mileage)
        {
        i++;
        }

        if(i==last)
        {
            cout<<-1;
            exit(0);
        }
        if(i<=n)
            ans++;
            //cout<<ans<<endl;
    }
    cout<<ans;
}
