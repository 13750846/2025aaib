/// week15-2.cpp
///�M���ɡA�[��e�誺���P�A�o�{���ܦh���ƪ��Ʀr
///�����ƪ��Ʀr�A���v���h��?�g�{������
#include<stdio.h>
int helper(int n)
{
    int a[10] = {}; ///�έp��A�̭����O0
    while(n>0){
        int now = n%10; ///��X�@�h��
        a[now]++;
        if( a[now] >1) return 1; ///��쭫�ƪ��Ʀr
        n = n/10;
    }
    return 0; ///���S�����������A�N�O�䤣�쭫�ƪ��Ʀr �S��
} /// helper()�^�� 0 �N��S�����A�^��1�N�����
int main()
{
    int ans = 0; ///���X�ӭ��ƪ��Ʀr?
    for(int i=0; i<=9999; i++){ ///0000..9999
        if(helper(i)==1) ans++;
    }
    printf("%d",ans); ///��Ӧ�4725�Ө��P���X�A�����ƪ��Ʀr
}
