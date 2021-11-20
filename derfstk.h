//derfstk.h
#include<new>
using namespace std;

template<typename type> class stk
{
public:
    stk() {}
    ~stk() {}
    type top();
    void push(type file);
    void pop();
    void clear();
    bool isempty();
private:
    type* top_ptr = new (stk);
    char stk[1048576];//1MB´æ´¢¿Õ¼ä
};

template<typename type>
void stk<type>::pop()
{
    if (top_ptr != stk)
    {
        top_ptr--;
    }
}
template<typename type>
type stk<type>::top()
{
    if (top_ptr != stk) return *top_ptr;
    else return NULL;
}
template<typename type>
bool stk<type>::isempty()
{
    return top_ptr == stk;
}
template<typename type>
void stk<type>::clear()
{
    top_ptr = stk;
}
template<typename type>
void stk<type>::push(type file)
{
    top_ptr++;
    *top_ptr = file;
}