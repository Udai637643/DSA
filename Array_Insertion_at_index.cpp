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
int insertionatindex(int arr[], int size, int element, int capecity, int index)
{
    if (size >= capecity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }                             
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {4, 3, 5, 1, 8};
    int size = 5, element = 20, index = 4;
    display(arr, size);

    insertionatindex(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    return 0;
}