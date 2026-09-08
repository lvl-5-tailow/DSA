// find out the smallest no. in the given arrary : 5,15,22,1,-15,21 .

#include <iostream>
#include <climits>
using namespace std;

int main(){

    int nums[] = {5, 15, 22, 1, -15, 21};
    int size = sizeof(nums) / sizeof(int);
    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        if (nums[i] < smallest){
            smallest = nums[i];
        }
        
    }

    cout<<"smallest number = "<<smallest<<endl;
    return 0;
}