#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include<deque>

using namespace std; 


class tmp1  // 运算符重载 <    class 和 struct 是一样的 
{
    int x; 
    tmp1(int a) : x(a) {} 
    bool operator<(const tmp1& a ) const
    {
        return x < a.x;   // 自身的x和另一个对象的x作对比 
    }
};



