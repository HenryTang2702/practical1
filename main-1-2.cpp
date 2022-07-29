#include<iostream>

using namespace std;
double array_mean(int array[], int n);

int main(){
    int nums[5] = {1, 2 , 3 , 4 , 6};
    cout << array_mean(nums, 5) <<endl;
    return 0;
}