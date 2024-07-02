#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int steps = arr[0];
        int maxR = arr[0];
        int jumps = 1;

        if( n <= 1 )
            return 0;

        if( arr[0] == 0 )
            return -1;

        int i=1;
        for( int i = 1; i < n; i++ ){

            if( i == n - 1 )
                return jumps;

            maxR = max( maxR, i + arr[i] );
            steps--;
            if( steps == 0 ){
                jumps++;
                if( i >= maxR )
                    return -1;
                steps = maxR - i;
            }

        }
        return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}