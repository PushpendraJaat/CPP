#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Palindrome Pattern"<<endl<<"n"<<endl;
    cin>>n;
    int j;
    
    for(int i=1; i<=n ; i++){
        for(j=1; j<=n-i; j++){
            cout<<" "<<" ";
        }
        int count=i;
        for(j=1; j<=i; j++){
            
            cout<<count--<<" ";
            
         
        }
        count = 2;
        for(j=1;j<=i-1;j++){
        cout<<count++<<" ";
        }
      
        
        cout<<endl;
    }
    return 0;
}
