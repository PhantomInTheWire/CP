#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string c;
        cin>>c;
        string d;
        cin>>d;
        int s[26];
        int s1[26];
        if(d.length()!=c.length())
        {
            cout<<"NO"<<'\n';
            break;
        }
        int l=c.length();
        for(int i=0;i<26;i++ )
        {
            s[i]=0;
            s1[i]=0;
        }
        for(int i=0;i<26;i++)
        {
            s[int(tolower(c[i]))]++;
            s1[int(tolower(d[i]))]++;
        }
        bool flag=0;
        for(int i=0;i<26;i++) {
            if(s1[i]!=s[i])

            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}
