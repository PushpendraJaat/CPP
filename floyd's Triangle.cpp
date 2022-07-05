#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"floyd's Triangle Pattern"<<endl<<"Enter n"<<endl;
    cin>>n;
    int p=1;

    for(int i=1; i<=n ; i++){
        
        for(int j=1; j<=i; j++){
            
            
            cout<<p<<" ";
            p++;
            
        }
        cout<<endl;
    }
    return 0;
}
