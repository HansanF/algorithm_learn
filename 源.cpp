#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include<deque>

using namespace std; 


class tmp1  // ��������� <    class �� struct ��һ���� 
{
    int x; 
    tmp1(int a) : x(a) {} 
    bool operator<(const tmp1& a ) const
    {
        return x < a.x;   // �����x����һ�������x���Ա� 
    }
};



