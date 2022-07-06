#include <iostream>
#include <cmath>

using namespace std;

void factorialNum(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
      fact*=i;
        
    }
    cout<<fact;
    return;
        
}

int main()
{
    long int n,m;
    cout<<"Factorial number"<<" Enter n"<<endl;
    cin>>n;
    
    factorialNum(n);
 
    return 0;
}
