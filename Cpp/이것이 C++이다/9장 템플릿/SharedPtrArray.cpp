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
    //대상 객체를 소멸할 함수를 별도로 등록해야한다.
    shared_ptr<CTest> ptr(new CTest[3], RemoveTest);
    cout << "*****END*****" << endl;
    //RemoveTest(ptr);
}