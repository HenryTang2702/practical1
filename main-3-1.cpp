#include<iostream>

using namespace std;
bool is_fanarray(int array[], int n);
int main(){
    int a[5] = {1 , 2 , 3, 2, 1};
    cout << is_fanarray(a , 5);
    return 0;
}