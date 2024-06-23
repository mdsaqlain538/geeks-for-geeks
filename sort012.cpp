#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zero_counter = 0, one_counter = 0, two_counter = 0;

        for( int i = 0; i < n; i++ ){

            if( a[i]==0 ){
                zero_counter++;
            }else if( a[i]==1 ){
                one_counter++;
            }else{
                two_counter++;
            }

        }

        for( int i = 0; i < n; i++ ){

            if(i<zero_counter){
                a[i]=0;
            }else if(i<zero_counter+one_counter){
                a[i]=1;
            }else if(i<zero_counter+one_counter+two_counter){
                a[i]=2;
            }

        }

    }

};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;

    }
    return 0;
}