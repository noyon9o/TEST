#include<bits/stdc++.h>

using namespace std;

int main()
{
    // cout << "Hello world.";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        // cout << arr[i] << " ";
        for (int j = i+1; j < n-1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1] - arr[i] == 2)
        {
            cout << arr[i]+1;
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}