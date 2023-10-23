#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long mod=1e9+7;
   long long arr[n+1];
   arr[0]=1;
   for(int i=1;i<=n;i++){
       arr[i]=0;
       for(int j=1;j<=min(i,6);j++){
          arr[i]=arr[i]%mod+arr[i-j]%mod;
       }
   }
   cout<<arr[n]%mod<<endl;
	return 0;
}
