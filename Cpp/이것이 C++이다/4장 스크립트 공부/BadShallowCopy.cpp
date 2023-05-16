#include <iostream>
#define endl "\n"

using namespace std;

int main()
{
    int *pA, *pB;

    pA = new int;
    *pA = 10;

    pB = new int;
    pB = pA; // 기존에 가리키던 int 인스턴스를 방치하고 pA의 인스턴스를 가리킴
             // 이후 접근 불가능한 int 인스턴스가 발생함
    cout << *pA << endl;
    cout << *pB << endl;

    delete pA;
    delete pB; // 이미 해제된 int 인스턴스를 해제하려함.
}