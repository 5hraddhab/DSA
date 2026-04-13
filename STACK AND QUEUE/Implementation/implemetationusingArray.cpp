#include <iostream>
using namespace std;
class Stack
{
   int size;
   int top;
   int *stack;

    public:
   Stack(int capacity)
   {  
      size=capacity;
      top=-1;
      stack=new int [capacity];
   
   }
   void push(int element)
   {
      if(top==size)
      {
        
         cout<<"Stack Overflow";
      } top++;
       stack[top]=element;
   }
   int topelement()
   {
      if(top==-1)
      {
         cout<<"Stack underflow";
      }
      return stack[top];
   }
   void pop()
   {
      if(top==-1)
      {
         cout<<"Stack underflow";
      }
     top--;
   }

    
};
int main()
{
   Stack st(100);
   st.push(11);
   st.push(12);
   st.push(13);
   st.push(14);
    cout<<st.topelement()<<endl;
   st.pop();
 
   st.push(15);
   cout<<st.topelement();


}