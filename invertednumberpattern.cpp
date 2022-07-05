#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Inverted number Pattern"<<endl<<"n"<<endl;
    cin>>n;
    int count=n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=count; j++){
            cout<<j<<" ";
        }
        count--;
        cout<<endl;
    }
    return 0;
}
