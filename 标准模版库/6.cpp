#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> st;
    st.insert(5);
    st.insert(9);
    st.insert(8);
    st.insert(2);
    st.insert(5);
    cout << st.size() << endl;    //重复元素不算
    if (st.find(20) != st.end()) {
        std::cout << "20 is in the set." << std::endl;
    } else {
        std::cout << "20 is not in the set." << std::endl;
    }
    st.erase(5);
    cout << st.size() << endl;
    return 0; 
}