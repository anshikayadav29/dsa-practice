#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(5);
    q.push(10);
    q.pop();
    cout << q.front();
}