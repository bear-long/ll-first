#include<iostream>
using namespace std;
template <class T>
class Array
{
private:
    int size;
    T *aptr;
public:
    ~Array(){ delete [] aptr;}
    Array(int slots)
    {
        size =slots;
        aptr= new T[slots];
    }
    void fill_array();
    void disp_array();
};
template <class T>
void Array<T>::fill_array()
{
    cout<<"(输入"<<size<<"个数据）"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"第"<<i+1<<"个数据:";
        cin>>aptr[i];
    }
};
template <class T>
void Array<T>::disp_array()
{
    for (int i = 0; i < size; i++)
    {
        cout<<aptr[i]<<",";
    }    
    cout<<endl;
};
int main()
{
    int ival=1024;
    int &refval = ival;
    ival=10;refval=2;
    cout<<refval<<endl;
    // refval+=2;
    cout<<ival<<endl;
    double dval =3.1;
    const double &ri = dval;
    
    cout <<"ri= "<<ri<<endl;
    // Array<char> ac(3);//ac(3)是调用结构函数，赋值slots=3
    // cout<<"填充一个字符数组";
    // ac.fill_array();
    // cout<<"数组的内容是：";
    // ac.disp_array();
    // Array<float> af(2);
    // cout<<"填充一个浮点数组：";
    // af.fill_array();
    // cout<<"数组的内容是：";
    // af.disp_array();
    return 0;
}