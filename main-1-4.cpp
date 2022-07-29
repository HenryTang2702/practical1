#include<iostream>

using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);


 int main() {

    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    cout << sum_two_arrays(a,b,5) <<endl;
    return 0;
 }