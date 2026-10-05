#include<iostream>
#include<vector>

int main()
{
    int arr[] = {13,46,24,52,20};
    int n = 5;

    for(int i = 0;i<n;i++)
    {
        int j = i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

using namespace std;