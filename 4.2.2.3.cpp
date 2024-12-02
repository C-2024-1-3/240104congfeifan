#include <iostream>
#include <algorithm>
using namespace std;
void sortArray(int* arr, int size) 
{
    sort(arr, arr + size);
}
int main() {
    int* arr;
    int len;
    cout << "输入数组元素个数：";
    cin >> len;
    arr = new int[len];
    cout << "输入" << len << "个元素的数组：";
    for (int i = 0; i < len; i++) cin >> arr[i];
    sortArray(arr, len);
    cout << "排序后的元素为";
    for (int i = 0; i < len; ++i)cout << *(arr + i) << " ";
    delete[] arr;
    return 0;
}
