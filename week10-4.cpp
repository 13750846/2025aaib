///week10-4.cpp ���ѬD���D
/// LeeCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0; ///�Ƥ@�U�A�έp�̦h���A�O�X�{�X��
        int a[100]={}; ///�}�C�ŧi�A��[�`��total���X�{�X��
        for(int i=1; i<=n; i++){ ///�H���� for �j��A�q1...n
            int total = 0, now = i; /// �[�_�Ӫ����G�s total�A�{�b���s now
            while( now>0 ){ ///��֪k�� while �j��A�p�Gnow�٦��ѡA�~���
                total +=now % 10; ///��֥[�_��(�C�@��Ƴ��[�_�ӹ�)
                now = now / 10; ///�駹�ּƦr�N�ܤp�o
            }
            a[total]++; ///�έp���G�h�@��total���[�_�Ӫ��� total ���ӥ�!!
            if(a[total] > max_count) max_count = a[total]; ///max_count ��̦h����
        }
        int ans = 0; ///�̫�⵪�ק�X��(�X�{�̦h���ƪ����ơA���X�Ӽ�)
        for(int i=0; i<100; i++){ ///�j��M�}�Ca[i]��n�O�̤j�� max_count����
            if(a[i]==max_count) ans++; ///�N�h�@�ӳ̤j����
        }
        return ans;
    }
};
