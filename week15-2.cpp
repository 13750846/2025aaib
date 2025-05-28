/// week15-2.cpp
///騎車時，觀察前方的車牌，發現有很多重複的數字
///有重複的數字，機率有多高?寫程式算算看
#include<stdio.h>
int helper(int n)
{
    int a[10] = {}; ///統計表，裡面都是0
    while(n>0){
        int now = n%10; ///剝出一層皮
        a[now]++;
        if( a[now] >1) return 1; ///找到重複的數字
        n = n/10;
    }
    return 0; ///都沒有提早結束，就是找不到重複的數字 沒有
} /// helper()回傳 0 代表沒有找到，回傳1代表有找到
int main()
{
    int ans = 0; ///有幾個重複的數字?
    for(int i=0; i<=9999; i++){ ///0000..9999
        if(helper(i)==1) ans++;
    }
    printf("%d",ans); ///原來有4725個車牌號碼，有重複的數字
}
