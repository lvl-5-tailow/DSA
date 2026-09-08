//arr = {4, 2, 7, 8, 1 ,2, 5} and target = 8

#include <iostream>
using namespace std;

int searchTarget(int arr[], int sz, int target){
    for( int i = 0; i < sz; i++){
        if( arr[i] == target){
            return i;
        }
    }
return -1;
}

int main()
{
    int arr[] = { 4, 2, 7, 8, 1, 2, 5 } ;
    int sz = sizeof(arr) / sizeof(int);
    int target = 8;

    cout<<searchTarget(arr, sz, target)<<endl;

    return 0;
}
