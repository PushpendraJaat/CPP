#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n,reverse=0;
    cout<<"Reverse Numbers"<<" Enter n"<<endl;
    cin>>n;
    
    
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }
    
    cout<<reverse;

    return 0;
}
