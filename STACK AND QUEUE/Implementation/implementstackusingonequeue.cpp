#include<iostream>
#include<queue>
using namespace std;

class st
{queue<int>q;
     public:
    st()

    {

    }
   
   
    void push(int x)
    { int size=q.size();
     q.push(x);
     for(int i=0;i<size;i++)
     {
        q.push(q.front());
        q.pop();
     }
    }
    int pop()
    {
        int val=q.front();
        q.pop();
        return val;
    }
    int top()
    {
        return q.front();
    }
};
int main()
{
  st s;
  s.push(100);
  cout<<s.pop()<<endl;
  s.push(200);
  s.push(300);
   cout<<s.top()<<endl;
  s.push(400);
  s.push(500);
  cout<<s.pop()<<endl;
 


}