#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <string>
#include <cstring>
#include <functional>
#include <climits>
#include <stack>
#include <numeric>
#include <deque>
#define endl "\n"

using namespace std;

class CTest
{

public:
    CTest(int nParam) : m_nData(nParam)
    {
        cout << "CTEST(int)" << endl;
    }

    CTest(const CTest &rhs) : m_nData(rhs.m_nData)
    {
        cout << "CTest(const int &)" << endl;
    }

    int GetData() const { return m_nData; }

    void SetData(int nParam) { m_nData = nParam; }

private:
    int m_nData = 0;
};

void TestFunc(CTest param)
{
    cout << "TestFunc()" << endl;

    cout << "param: " << param.GetData() << endl;
    param.SetData(20);
    cout << "param: " << param.GetData() << endl;
}

int main()
{
    cout << "start" << endl;

    CTest a(10);
    TestFunc(a);

    cout << "a: " << a.GetData() << endl;

    cout << "end" << endl;
}