//����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ�ز���ʹ�����顣
//ʾ�� :
//���� nums = [2, 7, 11, 15], target = 9
//��Ϊ nums[0] + nums[1] = 2 + 7 = 9
//���Է���[0, 1]

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int target = 9;
	int nums[] = { 2, 7, 11, 15 };
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 4; j++){
			if (nums[i] + nums[j] == target){
				printf("%d %d", i, j);
			}
		}
	}
	system("pause");
	return 0;
}
