#include<iostream>
using namespace std;
class animal
{
public:
    virtual void sound()
    {
        cout<<"Animal Sound";
    }
};
class dog: public animal
{
public:
    void sound()
    {
        cout<<"Dog Barks";
    }
};
main()
{
    animal *ptr;dog d;
    ptr=&d;
    ptr->sound();
}
