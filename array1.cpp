#include<iostream>
using namespace std;
int main() {
    int arr[5],i,*p;
    p=arr;
    cout<<"Enter elements :\n";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"You entered:\n";
    for(i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
     }
    return 0;
}