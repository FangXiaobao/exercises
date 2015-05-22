//控制输出行数
//循环不等式的使用 while for  当前已输出 r 行 c个字符
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"please input your first name:";
    string name;
    cin>>name;
    string greeting = "Hello, " + name + "!";
    int pad = 4;
    int rows = pad * 2 + 3;
    string::size_type cols =greeting.size() + pad * 2 +2;
    //循环不变式的使用 当前已输入 r 行
    for( int r =0; r != rows; r++ )
    {
        string::size_type c=0;
        //当前已输入 c 个字符
        while( c != cols )
        {
            //判断是否处于greeting 文字区
            if( r == pad+1 && c==pad+1)
            {
                cout<<greeting;
                c+=greeting.size();
            }
            
            else  //非greeting文字区
            {
            //判断是否处于边界 输出*
            if( r ==0 || r==rows-1 || c==0 || c == cols-1 )
                cout<<"*";
            else //非边界 输出空格
                cout<<" ";
            c++;
            
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;

}