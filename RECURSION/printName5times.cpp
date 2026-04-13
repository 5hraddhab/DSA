#include <iostream>
using namespace std;
int count=0;
void recursionname()
{
    if(count==5)
    {
        return;
    }
    cout<<"Shraddha"<<endl;
    count++;
    recursionname();
}
int main()
{
recursionname();

}