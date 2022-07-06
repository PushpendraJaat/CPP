#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Prime Numbers"<<" Enter n"<<endl;
    cin>>n;
    int m=sqrt(n);
    int p;
    
    for(int i=2; i<m; i++){
        if(n%i==0){
        p=1;
        break;
        }
        
        else{
        p=0;}
    }
    if(p==1)
    cout<<n<<" is a non prime number";
    
    
    else
    cout<<n<<" is a prime number";

    return 0;
}
