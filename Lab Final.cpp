#include <iostream>
using namespace std;

class ManchesterUnited
{
private:
    int coach;
    int player;
public:

    void getData(int a,int b)
    {
        coach =a;
        player= b;
    }
    void increament()
    {
        coach++;
        player++;

    }
    int display()
    {
        return coach+player;
    }
};

int main()
{
    ManchesterUnited ronaldo,fernandes;

    ronaldo.getData(7,10);
    fernandes.getData(5,12);

    cout<<"Before increament ";
    if(ronaldo.display()>fernandes.display())
    {
        cout<<"Ronaldo is greater";
    }
    else if(ronaldo.display()<fernandes.display())
    {
        cout<<"Fernandes is greater";
    }
    else if(ronaldo.display()==fernandes.display())
    {
        cout<<"Two are equal";
    }
    ronaldo.increament();

    cout<<endl;
    cout<<"After increament ";
    if(ronaldo.display()>fernandes.display())
    {
        cout<<"Ronaldo is greater";
    }
    else if(ronaldo.display()<fernandes.display())
    {
        cout<<"Fernandes is greater";
    }
    else if(ronaldo.display()==fernandes.display())
    {
        cout<<"Two are equal";
    }


    return 0;
}
