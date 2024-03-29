#include <iostream>

using namespace std;

/*	函数模板案例
 案例描述：
    - 利用函数模板封装一个排序的函数，可以对 不同数据类型数组 进行排序
    - 排序规则从大到小，排序算法为 选择排序 
    - 分别利用 char数组 和 int数组 进行测试
*/

template<typename T>        
void mySwap(T &a, T&b){			 	// 交换的函数模板
	T temp = a;
	a = b;
	b = temp;
}

template<class T>           		// 也可以替换成typename
void mySort(T arr[], int len){      // 利用选择排序，进行对数组从大到小的排序
	for (int i = 0; i < len; i++)
	{
		int max = i;            // 最大数的下标
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)       // 如果最大数的下标不是i，交换两者
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template<typename T>
void printArray(T arr[], int len) {		// 打印数组函数模板

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01(){      				// 测试char数组
	char charArr[] = "bdcfeagh";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02(){      				// 测试int数组
	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6};
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}


int main(){		// 主函数
    test01();
	test02();
    return 0;
}
