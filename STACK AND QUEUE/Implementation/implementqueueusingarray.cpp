#include <iostream>
using namespace std;
class Queue
{
    int * queue;
    int front;
    int rear;
    int size;
    public:
    Queue(int capacity)
    {   size=capacity;
        front=-1;
        rear=-1;
        queue=new int [size];

    }
    void push(int element)
    {
        if(rear==size-1)
        {
            cout<<"Queue Overflow";
            return;
    }
     if(front == -1)  // first element
            front = 0;
            rear++;
       queue[rear]=element;
    }
    void pop()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
    }
  int peek()
  {
     if(front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return-1;
        }
    return queue[front];
  }

};
int main()
{
Queue q(100);
q.push(100);
q.push(200);
cout<<q.peek()<<endl;
q.pop();
q.push(300);
q.push(400);
q.pop();
cout<<q.peek()<<endl;
}
