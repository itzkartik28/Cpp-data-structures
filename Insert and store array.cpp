#include <iostream>

using namespace std;

int main()
{
int s,i,ele[10];
cout<<"enter a size:"<<endl;
cin>>s;

for(int i=0;i<s;i++){

    cout<<"enter a element:"<<endl;
    cin>>ele[i];
}
cout<<"element are:\n"<<endl;

for(int i=0;i<s;i++){

    cout<<"array element are:"<<ele[i]<<endl;
}
    return 0;
}
