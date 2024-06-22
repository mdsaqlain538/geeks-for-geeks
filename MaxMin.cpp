#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
      //code here.
      std::sort(A , A+N);

      return A[0]+A[N-1];
    }

};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
        cin>>arr[i];
      Solution ob;  
      int ans=ob.findSum(arr, n);
      cout<<ans;
      cout<<"\n";
  }
  return 0;
}