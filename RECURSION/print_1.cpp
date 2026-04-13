#include <iostream>
using namespace std;
int count=0;
void recursion()
{
    if(count>10)
    {
        return ;
    }
    cout<<count<<endl;
    count++;
    recursion();

}

int main()
{
recursion();
}