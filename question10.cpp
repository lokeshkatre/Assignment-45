#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int areSame(vector<int> &a , vector<int> &b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return (a==b);
}
int main()
{
    vector<int> a({7,4,7}),b({7,4,7});
    if(areSame(a,b))
        cout<<"same";
    else
        cout<<"not same";
}