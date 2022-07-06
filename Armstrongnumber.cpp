#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n,arm=0,temp;
    cout<<"Armstrong Numbers"<<" Enter n"<<endl;
    cin>>n;
    temp=n;
    
    
    while(n>0){
        int lastdigit = n%10;
        arm += pow(lastdigit,3);
        n=n/10;
    }
    
    if(arm==temp)
    cout<<temp<<" is a Armstrong number";
    
    else
    cout<<temp<<" is not a Armstrong number";

    return 0;
}
