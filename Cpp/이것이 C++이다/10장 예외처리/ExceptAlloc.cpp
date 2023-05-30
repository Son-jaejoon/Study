#include <iostream>
#include <new> // bad_alloc 클래스를 위한 헤더
#define endl "\n"

using namespace std;

class CTest
{

public:
    CTest(int nSize)
    {
        m_pszData = new char[nSize];
    }

    ~CTest()
    {
        delete[] m_pszData;
        cout << "Success Delete array" << endl;
    }

private:
    char *m_pszData;

};

int main()
{
    try
    {
        int nSize;
        cout << "Input size: ";
        cin >> nSize;

        CTest a(nSize);
    }

    catch(bad_alloc &exp)
    {
        cout << exp.what() << endl;
        cout << "Error: CTest()" << endl;
    }
}