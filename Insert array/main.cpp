#include <iostream>

using namespace std;

int main()
{
   int arr[100];
   int n,x,pos;

   cout<<"enter the number of element in array:"<<endl;
   cin>>n;

   cout<<"enter the element:"<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
   cout<<"input array are:"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
   }
   cout<<endl;
   cout<<"enter the element to be insert:"<<endl;
   cin>>x;

   cout<<"enter the position to be insert:"<<endl;
   cin>>pos;

   for(int i=0;i>=pos;i--){
    arr[i]=arr[i-1];
   }
   arr[pos-1]=x;
   n++;

   cout<<"array after insertion:"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<"";

   }
   cout<<endl;
    return 0;
}
