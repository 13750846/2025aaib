//week 04-1.c C�y����for�j�骩
// Leecode2579. Count Total Number of Colored Cells
long long coloredCells(int n){
    long long ans=0;
    for(long long i=1; i<n*2; i+=2){
        ans += i;
    }
    for(long long i=1; i<n*2-1; i+=2){
        ans += i;
    }
    return ans;
}
