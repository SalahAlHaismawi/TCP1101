/* Write a program that prompts the user for their quarterly water bill for the last four quarters.
The program should find and output their average monthly water bill. If the average bill exceeds $75, the
output should include a message indicating that too much water is being used. If the average bill is at
least $25 but no more than $75, the output should indicate that a typical amount of water is being used.
Finally, if the average bill is less than $25, the output should contain a message praising the user for
conserving water. Use the sample run below as a model for your output. */

#include <iostream>
using namespace std;
int main()
{
    //initialaizing variables
float quarter1;
float quarter2; 
float quarter3;
float quarter4;
float average;

//requesting int

cout << "Please input your water bill for quarter 1" << endl;
cin >> quarter1;

cout << "Please input your water bill for quarter 2" << endl;
cin >> quarter2;

cout << "Please input your water bill for quarter 3" << endl;
cin >> quarter3;

cout << "Please input your water bill for quarter 4" << endl;
cin >> quarter4;

 average = (quarter1 + quarter2 + quarter3 + quarter4)/4;


    if (average<25)
    
        cout << "Your average bill is " << average  << "$ You are using a saving water, Keep at it!!" << endl;
    
    

                else if (75>average && average>25 )
                 cout << "Your average bill is " << average << "$ You are using a typical amount of water ." << endl;

                    else
                    cout << "Your average bill is " << average  << "$ You are using excessive amounts of water ." << endl;
    
return 0;
}