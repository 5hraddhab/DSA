#include <iostream>
using namespace std;
int n=10;
int count=n;
void recursionfrom1ton(int n)
{
  if(count<0)
  {
    return;
  }
  
  cout<<count<<endl;
  count--;
  recursionfrom1ton(n); 
  

}
int main()
{
recursionfrom1ton(n); 
}
