#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[]={2,4,5,7,8,4};
    multiset<int> mSet(arr,arr+6);
   
    cout<<"last element is "<<*(--mSet.end());
    return 0;
}