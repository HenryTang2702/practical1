int array_sum(int array[], int n){

    int i;
    double sum =0;
    if ( n<1){
        return 0;
    }
    else {
    for (i =1; i<n; i++){
        sum = sum + array[i];
    }
    return sum;
}
}

