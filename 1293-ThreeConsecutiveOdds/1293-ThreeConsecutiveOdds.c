// Last updated: 9/8/2026, 12:38:17 am
bool threeConsecutiveOdds(int* arr, int arrSize) {
    for(int i=0; i<(arrSize-2);i++){
    if(arr[i]%2!=0&&arr[i+1]%2!=0&&arr[i+2]%2!=0){
        return true;
    }
    }
    return false;
}