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
    cout<<"(����"<<size<<"�����ݣ�"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"��"<<i+1<<"������:";
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
    // Array<char> ac(3);//ac(3)�ǵ��ýṹ��������ֵslots=3
    // cout<<"���һ���ַ�����";
    // ac.fill_array();
    // cout<<"����������ǣ�";
    // ac.disp_array();
    // Array<float> af(2);
    // cout<<"���һ���������飺";
    // af.fill_array();
    // cout<<"����������ǣ�";
    // af.disp_array();
    return 0;
}