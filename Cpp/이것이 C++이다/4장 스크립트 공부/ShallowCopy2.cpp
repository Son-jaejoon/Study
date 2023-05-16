#include <iostream>
#define endl "\n"

using namespace std;

class CMyData
{

public:
    CMyData(int nParam)
    {
        m_pnData = new int;
        *m_pnData = nParam;
    }

    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &)" << endl;

        //메모리할당
        m_pnData = new int;

        //포인터가 가리키는 위치에 값을 복사한다.
        *m_pnData = *rhs.m_pnData;
    }

    ~CMyData()
    {
        delete m_pnData;
    }

    CMyData& operator=(const CMyData &rhs)
    {
        *m_pnData = *rhs.m_pnData;

        //객체 자신에 대한 참조를 반환
        return *this;
    }

    int GetData()
    {
        if(m_pnData != NULL)
            return *m_pnData;
        
        return 0;
    }

private:
    *m_pnData = nullptr;
};

int main()
{
    CMyData a(10);
    CMyData b(20);

    a = b;
    cout << a.GetData() << endl;
}