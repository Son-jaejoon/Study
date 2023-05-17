#include <iostream>
#define endl "\n"

using namespace std;

class CMyData
{

public:
    CMyData() { cout << "CMyData()" << endl; }
    int GetData() { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

protected:
    void PrintData() { cout << "CMyData::PrintData()" << endl; }

private:
    int m_nData = 0;

};

class CMyDataEx : public CMyData
{

public:
    CMyDataEx() { cout << "CMyDataEx()" << endl; }

    void TestFunc()
    {
        PrintData();
        SetData(5);
        cout << CMyData::GetData() << endl;
    }
};

int main()
{
    CMyDataEx data;

    data.SetData(10);
    cout << data.GetData() << endl;

    data.TestFunc();
}