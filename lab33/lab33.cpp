// Lab_03_3.cpp
// Заплетнюк Юлія Іванівна
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 7
   
   #include <iostream>
   #include <cmath>

   using namespace std;

   int main()
   {
    double x;
    double R;
    double y;

    cout<<"R=";cin >>R; 
    cout<<"x=";cin >>x;

     // розгалуження в повній формі
     if (x<=R)
        y=R;
     else
        if (-R<x<=R)
        y = R - sqrt(R*R - x*x);
        else 
            if (R<x<=6-R)
            y= (9*R-3*x-R*x)/6-R;
            else 
                y= -x+3;
    cout << endl;
cout << "y = " << y << endl;
cin.get();
return 0;

}