#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {13,46,24,52,20};
    int n = 5;

    for(int i = 0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }

    //approach 2
    for(int i = n-1;i>=1;i--)
    {
        for(int j = 0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

        for(int i = 0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}