#include<iostream>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(8);
    dq.push_front(6);
    dq.push_back(7);
    dq.push_front(9);
    cout << dq.size() << endl;
    cout << dq.back() << endl;
    dq.pop_front();
    dq.pop_back();
    cout << dq.empty() << endl;
    return 0    ; 
}