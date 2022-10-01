#include <iostream>
#include <algorithm>

using namespace std;

void show(int arr[], int arr_size){
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " " ;
    }
}


int main()
{
    int arr[] = {9,3,6,2,1,7,8};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    show(arr, arr_size);
    // InstroSort,
    cout << "Sorted algorithm\n"; 
    sort(arr, arr + arr_size);
    cout << endl ;
    show(arr, arr_size);

    // Binary search
    printf("\nBinary search algorithm: ");

    cout << "\nNow we are applying Binary Search: " << endl ;

    if(binary_search(arr, arr + arr_size, 2))
    {
        cout << "Element found" << endl ;
    }
    else
    {
        cout << "No Element found" << endl ;
    }
    

    return 0;
}