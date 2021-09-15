#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

float quantity;
float cost = 12;
double total;
//requesting input
cout <<"How many shirts would you like"<<endl;
cin >> quantity;

cout<<setprecision(2)<<fixed<<showpoint;

//Fucntion for discount 

    if(quantity>=5 && quantity<=10)
    {
    total = (12-(12*0.1))*quantity;
    cout << "the cost";
    }
        else if (quantity>=11 && quantity<=20)
        {
        total = (12-(12*0.15))*quantity;
        
        }

            else if (quantity>=21 && quantity>=30)
            {
            total =(12-(12*0.2))*quantity;
            
            }
                else if (quantity>=31)
                {
                 total =(12-(12*0.25))*quantity;

                }
    cout << "The cost per shirt is $12 and the total cost is $" << total << endl;            


    














return 0;


}