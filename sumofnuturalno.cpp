
#include <iostream>

using namespace std;

int s(int a){
     a=a*(a+1)/2;
     return a;
}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<s(n);
    

    return 0;
}
