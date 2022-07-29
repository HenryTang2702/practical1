#include<iostream>

using namespace std;
bool is_descending(int array[], int n);

int main(){
    int a[5] = {9,8,7,1,0};
    cout<< is_descending(a, 5)<<endl;


    return 0;
}