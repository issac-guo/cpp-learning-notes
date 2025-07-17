#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string,int> m;
    m["Alice"] = 30;
    m["Bob"] = 25;
    m["Charlie"] = 35;
    // for (map<string,int>::iterator it = m.begin(); it != m.end(); ++it){
    //     cout << it->first << "的年龄" << it->second << endl;
    //     //first代表键，second代表值
    // }
    for (auto it = m.begin(); it != m.end(); ++it){
        cout << it->first << "的年龄" << it->second << endl;
        //first代表键，second代表值
    }

    m.erase("Bob");
    if (m.find("Bob") != m.end()){
        std::cout << "Bob is in the set." << std::endl;
    }
    else {
        std::cout << "Bob is not in the set." << std::endl;
    }

    m.clear();
    size_t size = m.size();
    cout << size <<endl;
    return 0; 
}