/*Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integersfrom 1 through 8.
 The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square
 and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you
 know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to
 find this number.)

*/
//library 1
#include <iostream>
//library 2
#include <cmath>

using namespace std;
//main function
int main()
{
    //giving variables N is perfect square  and M is sum
    long N, M;
    cout << "List of such numbers : " << endl; 
    //using 'if and 'for' conditions
    for (long i = 1; i > 0; i++)
    {
        M = 0;
        N = i*i;
        for (long j = 1; j <= N; j++)
        {
            M = M + j;
            if (M == N)
                cout << N << endl;
       }
    }
//ending program
  return 0;
 }

