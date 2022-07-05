#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Rhombus Pattern"<<endl<<"n"<<endl;
    cin>>n;
    int space=n-1;
   
   
  
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=(n-i)+n; j++){
           
        
            if(j<=space){
            cout<<" "<<" ";
            }
            else
            cout<<"*"<<" ";
         
           
        }
        space--;
        cout<<endl;
    }
    return 0;
}
