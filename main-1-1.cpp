#include<iostream>

using namespace std;
int array_sum(int array[], int n);

int main(){
    int nums[5] = {1, 2 , 3 , 4 , 5};
    cout << array_sum(nums, 5) <<endl;
    return 0;
}