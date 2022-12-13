										RECURSION METHOD
										
#include <iostream>
using namespace std;
int fibonacci(int num){
    if(num<=1) return num;
    return fibonacci(num-1)+fibonacci(num-2);
}
int main()
{
    int num=9;
    cout<<"Answer: "<<fibonacci(num);
    return 0;
}

										ITERATION METHOD
										
#include <iostream>
using namespace std;

void fibonacci(int num){
    int a=0,b=1,c=0;
    for(int i=0;i<num;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int num=9;
    fibonacci(num);
    return 0;
}
