#include"Fraction_kartik.h"
#include<iostream>
#include<cstdlib> // rand()
using namespace std;

// Function to sort an array of fractions from least to greatest
void sort(Fraction f[], int numFractions)
{
float temp;
for(int i=0;i<numFractions;i++)
{
  for(int j=i+1;j<numFractions;j++)
  {
    if(f[i]>f[j])
    {
      temp = f[i];
      f[i] = f[j];
      f[j] = temp;

    }
  }

}
for(int i=0;i<numFractions;i++)
{
  cout << f[i] <<',';
}
}

int main(){
  cout << "Cerise Wuthrich's Fraction Class\n\n";

  // Instantiate 6 Fraction objects using a parameterized constructor
  Fraction f1(2, 3), f2(3, 4), f3(6, 30), f4(30, 12), f5(6,2), f6(9, 0);

  // Instantiate 4 Fraction objects using the default constructor
  // These objects will hold arithmetic results
  Fraction sum, difference, product, quotient;

  // An array of 10 default fractions 
  Fraction f[10];

  // Variable to hold seed for random number generator
  unsigned int theSeed;

  // Calculate a sum, difference, product, and quotient
  // C++ provides a default assignment operator for a class you define
  sum = f1 + f3;
  difference = f4 - f2;
  product = f1 * f2;
  quotient = f5 / f3;

  //Display the results
  cout << f1 << " + " << f3 << " = " << sum << endl << endl;
  cout <<  f4 << " - " << f2 << " = " << difference << endl << endl;
  cout << f1 << " * " << f2 << " = " << product << endl << endl;
  cout << f5 << " divided by " << f3 << " = " << quotient << endl << endl;

  //Expres a fraction as a decimal
  cout << f2 << " as a decimal is " << f2.toDecimal() << endl << endl;

  // Get input from user for random number generator seed
  cout << "Enter a value for the seed.  ";
  cin >> theSeed;
  cout << endl;
  // Seed the random number generator
  srand(theSeed);
  // Use randomly generated numbers for the 
  // numerators and denominators of the array of default fractions
  for (int x = 0; x < 10; x++){
    f[x].setNumerator(x + rand() % 5);
    f[x].setDenominator(rand() % 12 + 1);
  }
  //Sort the array of fractions
  sort(f, 10);

  //Display the results
  cout << "The randomly generated fractions in order from least to greatest:\n";
  for (int c = 0; c < 10; c++)
    cout << f[c] << '\t';

  cout << endl;
  system("pause");
  return 0;
}

