//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//unsigned int testUnint = 65534;//oxfffe
//cout << "output in unsigned int 1 type:"" << testUnint<< end;//<<oct;
//cout << "output in char type:!" << static_ cast<char>(testUnint) << endl;
//cout << "output in short type:" << static_ cast<short>(testUnint) << endl;//为什么结果为-2?:
//cout << "output in int type:" << static_ cast<int>. (testUnint) << endl;
//cout << "output in double type:" << static cast<double>(testUnint) << endl;
//cout << "output in double type:" << setprecision(4) << static_ cast<double>(testUnint) << endl;
//cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
//system("pause");
//return 0;

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    unsigned int testUnint = 65534;//oxfffe
    cout << "output in unsigned int 1 type:" << testUnint << endl;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?: unsigned int 变量强制转换为 short 类型(取值范围是 -32,768 到 32,767)时，发生了溢出，65534 经过溢出计算后，变成了 65534 - 65536 = -2。
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl;//16进制输出
    cout << "output in Octal unsigned int type:" << oct << testUnint << endl;//8进制输出
    system("pause");
    return 0;
}