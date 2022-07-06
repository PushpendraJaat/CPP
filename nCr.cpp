#include <iostream>
#include <cmath>

using namespace std;

int factorialNum(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
      fact*=i;
        
    }
    return fact;
        
}

int main()
{
    int n,r;
    cout<<"Factorial number"<<" Enter n and r"<<endl;
    cin>>n>>r;
    
  
    int nCr = factorialNum(n)/(factorialNum(r)*factorialNum(n-r));
    cout<<nCr;
    
    
 
    return 0;
}
