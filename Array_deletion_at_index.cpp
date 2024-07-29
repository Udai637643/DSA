#include <iostream>
using namespace std;

int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    cout << "\n";
}
void deletionatindex(int arr[], int size,  int index)
{
    for (int i = index; i<size; i++)
    {
        arr[i ] = arr[i+1];
    }
    
}
int main()
{
    int arr[100] = {4, 3, 5, 1, 8};
    int size = 5,  index = 0;
    display(arr, size);

    deletionatindex(arr, size,index);
    size -= 1;
    display(arr, size);
    return 0;
}