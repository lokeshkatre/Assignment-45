#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[]={2,4,5,7,8,4};
    multiset<int> mSet(arr,arr+6);
    mSet.insert(21);
    mSet.insert(45);
    for(auto x : mSet)
    {
        cout << x << " ";
    }
}