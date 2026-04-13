#include <iostream>
using namespace std;

void recursionfrom1ton(int n)
{
  if(n==0)
  {
    return;
  }
 
   recursionfrom1ton(n-1); 
  cout<<n<<endl;

}
int main()
{
recursionfrom1ton(10); 
}
