#include <iostream>
#include <cmath>

using namespace std;

void fiboSeries(int n){
    int t1=0;
    int t2=1;
    int next;
    
    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
        
    }
    
    return;
        
   
}



int main()
{
    long int n,m;
    cout<<"Fibo series"<<" Enter n"<<endl;
    cin>>n;
    
    fiboSeries(n);
    
  

    
   
    return 0;
}
