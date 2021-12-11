#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // your code goes here
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        arr[1]=1;
        int b=1;
        for(int j=2;j<=n;j++){
          arr[j]=b+2;
          b=b+2;
          
        }
        for(int j=1;j<=n;j++){
          cout<<arr[j]<<" ";
          
        }
   
      cout<<endl;

    }

return 0;
}
