#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);     //末尾添加
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(0);
    v.insert(v.begin(), 8);  //头部添加
    v.insert(v.begin()+4, 7);  //第四个位置插入, v.begin类似于指针
    for (int e:v){
        cout << e << endl;
    }
    cout << v.front() << endl;   //获取第一个元素
    cout << v.back() << endl;   //获取最后一个元素
    cout << v[3] << endl;       //获取下标为3的元素
    cout << v.at(3) << endl;
    cout << v.size() << endl;   //获取元素个数
    v.pop_back();    //删除末尾元素
    cout << v.size() << endl;
    v.erase(v.begin()+2);     //删除第二个位置的元素
    for (int e:v){
        cout << e << endl;
    }
    v.clear();
    cout << v.size() << endl;
    return 0; 
}
