#include <iostream>
#include <memory>
#define endl "\n"

using namespace std;

class CTest
{
public:
    CTest() { cout << "CTest()" << endl; }
    ~CTest() { cout << "~CTest()" << endl; }
    void TestFunc() { cout << "TestFunc()" << endl; }
};

void RemoveTest(CTest *pTest)
{
    cout << "RemoveTest()" << endl;

    delete[] pTest;
}

int main()
{
    cout << "*****BEGIN*****" << endl;

    //CTest *ptr = new CTest[3];
    //��� ��ü�� �Ҹ��� �Լ��� ������ ����ؾ��Ѵ�.
    shared_ptr<CTest> ptr(new CTest[3], RemoveTest);
    cout << "*****END*****" << endl;
    //RemoveTest(ptr);
}