// FIND THE LARGEST NUMBER IN THE GIVEN ARRAY : 5,15,22,1,-15,24.

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int nums[] = { 5, 15, 22, 1, -15, 24};
    int size = sizeof(nums) / sizeof(int);
    int largest = INT_MIN;

    for( int i = 0; i < size; i++){
        if( nums[i] > largest){
            largest = nums[i];
        }
    }
    
    cout<<"the largest num is = "<<largest<<endl;
    return 0;
}