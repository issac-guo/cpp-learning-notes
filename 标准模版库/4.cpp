#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("apple");
    q.push("bananna");
    q.push("strawberry");
    cout << q.back() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0; 
}