/*Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 
*/ 
//library
#include <iostream>
using namespace std;
//main function
int main()
{
    //giving variables T-total cost 
    int T = 100;
    //giving variables A- cost of an apple,  M - cost of a mango, B -cost of a banana.
    float A = 1, M = 3, B = 0.5;
    cout << "The following combination are possible -"<<endl;
   //using 'for' and 'if' conditions
    for (int Apples = 0; Apples<=500; Apples++)
    {
        for (int Mangoes = 0; Mangoes <= 500; Mangoes++)
        {
            for (int Bananas = 0; Bananas <= 500; Bananas++)
            {
                float c ;
                c = ((Apples*A)+(Mangoes*M)+(Bananas*B));
                if (c == T && Apples+ Mangoes + Bananas ==T)
                {
                    cout << Apples << " Apples, " << Mangoes << " Mangoes and " << Bananas << " Bananas."<<endl;
                }

            }
        }
    }

return 0 ;
}

