#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int maxvalue = INT_MIN;
    int minvalue = INT_MAX;
    
    for(int j=0; j<n; j++){
        maxvalue = max(maxvalue,arr[j]);
        minvalue = min(minvalue,arr[j]);
    }
    
    cout<<maxvalue<<" "<<minvalue<<endl;

    return 0;
}
