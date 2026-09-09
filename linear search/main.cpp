#include <iostream>

using namespace std;

int a[10];


void search(int n,int val){
    int i;

for(int i=0;i<n;i++){
    if(a[i]==val){
        cout<<"value found at"<<i<<"th position"<<endl;
        break;
    }
}
if(i==n){
    cout<<"value not found"<<endl;
}
}

int main()
{
    int n,val;

    cout<<"enter the size of array:"<<endl;
    cin>>n;

    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the value to be search:"<<endl;
    cin>>val;

    search(n,val);
    return 0;
}
