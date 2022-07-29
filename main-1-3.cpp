#include<iostream>

using namespace std;

int num_count(int array[], int n, int number);
int main(){
    int a[5] = {1,2,3,2,2};
    cout << num_count(a, 5, 2) <<endl;
    return 0;
 }