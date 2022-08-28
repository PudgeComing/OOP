#include <cmath> 
#include <iostream>
 
using namespace std;

class Cilinder
{
    private:
        double radius ;
        double height ;
        double objem ;
        string obj1;
        string obj2;

        friend Cilinder getObyem(Cilinder &obj1, Cilinder &obj2);
    public:
        Cilinder() : radius(0) , height(0)
        {
            cout << "Construct1"  << endl;
        }
        
        Cilinder(double r , double h) : radius(r) , height(h)
        {
            cout << "Construct2"  << endl;
        }
        
        void show()
        {
            cout<<"radius" << radius <<endl;
            cout<<"height" << height <<endl;
        }
            friend void obyemdvoh ();
        void obyem()
        {
             objem = M_PI * pow(radius, 2.0) * height;
        }

        void print_val()
        {
        cout<<"obyem = "<<objem<<"cm^3"<<endl;
        cout<< "Suma  "<<endl;
        cout<< objem + objem<<endl;
        }
        void obyemzdvoh(double objem1 ,double objem2)
        {
          double objemdva;
          objemdva = objem1 + objem2;
          cout<<objem2<<endl;
        }
 
};

Cilinder getObyem(Cilinder &obj1, Cilinder &obj2)
{
    return Cilinder(5.0, (obj1.objem + obj2.objem)/(M_PI * pow(5.0, 2.0)));
}

int main()
{   
    Cilinder n1;
    Cilinder n2(5,10);
    cout <<" znach C1 "<<endl;
    n1.show();
    cout << endl;
    cout <<" znach C2 "<<endl;
    n2.show();
    cout << endl;
    n2.obyem();
    n2.print_val();
    Cilinder n3 = getObyem(n1, n2);
    n3.obyem();
    system("pause");
    return 0 ;
}