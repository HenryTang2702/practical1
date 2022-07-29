bool is_fanarray(int array[], int n){
    if (n < 1){

        return false;
    }
    for(int i =1; i < n/2; i++){
        if(array[i-1] < array[i] ){
            return true;
        }
        else{
            return false;
        }

    }
}