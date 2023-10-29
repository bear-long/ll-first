#include<iostream>
using namespace std;
class A
{
private:
    int z;
    
public:
    A(int n,string nam);
    int x;
    void setz(int i){z=i;}
    int getz(){return z;}
protected:
    int y;
    int num;
    string name;
};
class B:public A
{
private:
    int q;
    int age;
public:
    B(int n,string nam,int a ):A(n, nam)
    {
        age=a;
    }
    int m;
    void setvalue(int a ,int b,int c,int d,int e,int f);
    void display();

};
A::A(int n,string nam)
{
    num =n;
    name = nam;
}

void B::setvalue(int a ,int b,int c,int d,int e,int f)
{
    x=a;
    y=b;
    setz(c);
    m=d;
    q=e;
}
void B::display()
{
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<getz()<<endl;
    cout<<"q= "<<q<<endl;
    cout<<"num = "<<num<<endl;
    cout<<"name= "<<name<<endl;
    cout<<"age = "<<age<<endl;
    

    // cout<<"z= "<<z<<endl;
    

}
int main()
{
    B obj(111,"wang",18);

    // obj.setvalue(1,2,3,4,5,6);
    obj.display();
      cout<<"m= "<<obj.m<<endl;
    // cout<<"z="<<obj.z<<endl;
    
    //  cout<<"y="<<obj.y<<endl;
    return 0;
}