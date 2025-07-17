#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');
    cout << s.top() << endl;   //不会挪走栈顶
    cout << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0; 
}