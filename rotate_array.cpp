#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

void rotate(int arr[], int n)
{
    int arr_copy[n];

    for(int i = 0; i < n; i++){

        arr_copy[i] = arr[i];

    }


    for(int i = 0; i < n; i++){

        if( i==0 ){
            arr[i] = arr[n-1];
        }else{
            arr[i] = arr_copy[i-1];
        }

    }
}