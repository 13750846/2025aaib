//week04-2.c�O����Leecode�D���D Easy�D(�G�X�@)
// Leecode 2529. Maximum Count of Positive Integar and Negative Integar
int maximumCount(int* nums, int numsSize) {

    int pos=0,neg=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]> 0 )pos++;//����
        if(nums[i]< 0 )neg++;//�t��
    }
    if(pos>neg) return pos;
    else return neg;
}
