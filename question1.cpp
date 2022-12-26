#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[]={2,4,5,7,8,4};
    multiset<int> mSet(arr,arr+6);
    cout<<"first element is "<<*mSet.begin()<<endl;
    cout<<"last element is "<<*--mSet.end()<<endl;

    for(auto x : mSet)
    {
        cout<< x <<" ";
    }

}