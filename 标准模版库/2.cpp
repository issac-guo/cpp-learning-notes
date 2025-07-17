#include<iostream>
#include<list>

using namespace std;

int main(){
    list<double> lst;
    lst.push_back(4);
    lst.push_front(3);
    lst.insert(lst.begin(),5);
    cout << lst.front() << endl;
    cout << lst.back() << endl;
    cout << lst.size() << endl;
    cout << lst.empty() << endl;
    lst.pop_front();
    lst.pop_back();
    lst.clear();
    cout << lst.empty() << endl;
    return 0; 
}