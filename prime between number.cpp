#include <iostream>
#include <cmath>

using namespace std;

bool primeNum(int p){
    for(int i=2; i<=sqrt(p); i++){
        
    if(p%i==0)
    return false;
    
    }
    return true;
}



int main()
{
    long int n,m;
    cout<<"Prime Numbers"<<" Enter n and m"<<endl;
    cin>>n>>m;
    
    for(int i=n; i<=m; i++){
        if(primeNum(i))
        cout<<i<<endl;
    }

    
   
    return 0;
}
