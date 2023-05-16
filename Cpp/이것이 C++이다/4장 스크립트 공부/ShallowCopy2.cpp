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

        //�޸��Ҵ�
        m_pnData = new int;

        //�����Ͱ� ����Ű�� ��ġ�� ���� �����Ѵ�.
        *m_pnData = *rhs.m_pnData;
    }

    ~CMyData()
    {
        delete m_pnData;
    }

    CMyData& operator=(const CMyData &rhs)
    {
        *m_pnData = *rhs.m_pnData;

        //��ü �ڽſ� ���� ������ ��ȯ
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