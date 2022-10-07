#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>p;       //bydefault is max heap
    p.push(12);
    p.push(16);
    p.push(19);
    p.push(160);
    p.push(100);
    cout<<"size: "<<p.size()<<endl;
    cout<<"top lelement "<<p.top()<<endl;
    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }
}