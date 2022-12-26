#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[]={2,4,5,7,8,4};
    multiset<int> mSet(arr,arr+6);
    mSet.erase(4);
    for(auto x : mSet)
    {
        cout<< x <<" ";
    }

}