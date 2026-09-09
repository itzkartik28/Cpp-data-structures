#include <iostream>

using namespace std;

int main()
{
    float arr[100];
    float n,p;

    cout<<"enter the size of the array:"<<endl;
    cin>>n;

    cout<<"enter the element are:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the element position to delete:"<<endl;
    cin>>p;

    if(p<1 ||p>n){
        cout<<"invalid position:"<<endl;
        return 1;
    }

    for(int i=p-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

    cout<<"element of array after delete:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}
