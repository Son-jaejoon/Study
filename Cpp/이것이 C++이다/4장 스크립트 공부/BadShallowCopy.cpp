#include <iostream>
#define endl "\n"

using namespace std;

int main()
{
    int *pA, *pB;

    pA = new int;
    *pA = 10;

    pB = new int;
    pB = pA; // ������ ����Ű�� int �ν��Ͻ��� ��ġ�ϰ� pA�� �ν��Ͻ��� ����Ŵ
             // ���� ���� �Ұ����� int �ν��Ͻ��� �߻���
    cout << *pA << endl;
    cout << *pB << endl;

    delete pA;
    delete pB; // �̹� ������ int �ν��Ͻ��� �����Ϸ���.
}