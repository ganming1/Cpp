#include<iostream>
#include<string>
using namespace std;
// string容器 查找与替换
/*
int find(const string& str, int pos = 0) const;       //查找str第一次出现位置，从pos开始查找
int find(const char* s, int pos = 0) const;           //查找s第一次出现位置从pos开始查找
int find(const char* s, int pos, int n) const;        //从pos位置查找s的前n个字符第一次位置
int find(const char C, int pos =日) const;            //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;   //查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;       //查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;       //从pos查找s的前n个字符最后一次位置
int rfind(const char C, int pos = 0) const;           //查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str);   //替换从pos开始n个字符为字符串str
string& replace(int pos, int n,const char* s);        //替换从pos开始的n个字符为字符串s
 */
// 1.查找
void test01()
{
    string str1 = "abcdefgde";
    int pos1 = str1.find("de");
    if (pos1 == -1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "pos1 = " << pos1 << endl;      // pos1 = 3

    }
    // rfind 是从右往左找，find 是从左往右找
    int pos2 = str1.rfind("de");
    cout << "pos2 = " << pos2 << endl;      // pos2 = 7
    
}
// 2.替换
void test02()
{
    string str1 = "avcdefde";
    str1.replace(1, 3, "1111");
    cout << "str1 = " << str1 << endl;      // str1 = a1111efde
}
int main()
{
    // test01();
    test02();
    return 0;
}