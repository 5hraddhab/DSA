#include <iostream>
using namespace std;
int count=0;
void recursionfrom1ton(int n)
{
  if(count>n)
  {
    return;
  }
  cout<<count<<endl;
  count++;
  recursionfrom1ton(n); 

}
int main()
{
 recursionfrom1ton(10); 
}