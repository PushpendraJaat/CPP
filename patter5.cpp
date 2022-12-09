#include <iostream>

using namespace std;

int main()
{   int n;
    cout<<"give input"<<endl;
    cin>>n;
   
    
    for(int i=1;i<=n;i++){
         int count=1;
        for(int j=1; j<=i; j++){
           
            cout<<count;
            count++;
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
    
        cout<<endl;
    }

    return 0;
}
