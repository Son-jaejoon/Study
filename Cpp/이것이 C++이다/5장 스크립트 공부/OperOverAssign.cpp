#include <iostream>
#define endl "\n"

using namespace std;

class CMyData
{

public :
    explicit CMyData(int nParam)
    {
        m_pnData = new int(nParam);
    }

    ~CMyData() { delete m_pnData; }

    operator int() { return *m_pnData; }

    CMyData& operator=(const CMyData &rhs)
    {
        if(this == &rhs)
            return *this;
        
        delete m_pnData;

        m_pnData = new int(*rhs.m_pnData);

        return *this;
    }

private :
    int *m_pnData = nullptr;

};

int main()
{
    CMyData a(0), b(5), c(10);

    a = b = c;
    cout << a << endl;   
}