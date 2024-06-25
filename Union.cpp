#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution{
    public:

    int doUnion(int a[], int n, int b[], int m)  {

        unordered_set<int> union_set;

        for (int i = 0; i < n; ++i) {
            union_set.insert(a[i]);
        }

        for (int i = 0; i < m; ++i) {
            union_set.insert(b[i]);
        }
        return union_set.size();
    }
};

int main() {

  int t;
  cin >> t;

  while(t--){

      int n, m;
      cin >> n >> m;
      int a[n], b[m];

      for(int i = 0;i<n;i++)
         cin >> a[i];

      for(int i = 0;i<m;i++)
         cin >> b[i];
      Solution ob;
      cout << ob.doUnion(a, n, b, m) << endl;

  }

  return 0;
}