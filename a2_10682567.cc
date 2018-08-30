/* A simple program to check if a number is prime */

#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
   int number;
   int a;
   int b = 0;

   cout << "Enter  the number you want to determine: "<<endl;
   cin >> number;


   for (a = 1; a <= number; a++)
   {
      if ((number % a) == 0)
      {
         b++;
      }
   }

   if (b == 2)
      cout << number << " is a prime number";
   else
      cout <<  " enter a new number. This number is not prime";

   return 0;
}

