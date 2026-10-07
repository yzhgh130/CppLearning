#include<iostream>
#include<algorithm>
#include<vector>

int n;
vector<int> v;

using namespace std;
int main()
{
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    return 0;
}
