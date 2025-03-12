//week04-2.c是今天Leecode挑戰題 Easy題(二合一)
// Leecode 2529. Maximum Count of Positive Integar and Negative Integar
int maximumCount(int* nums, int numsSize) {

    int pos=0,neg=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]> 0 )pos++;//正數
        if(nums[i]< 0 )neg++;//負數
    }
    if(pos>neg) return pos;
    else return neg;
}
