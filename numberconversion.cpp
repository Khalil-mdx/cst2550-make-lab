#include "numberconversion.h"

int symbol2Value(char symbol)
{
  if (symbol == 'I')
    return 1;
  if (symbol == 'V')
    return 5;
  if (symbol == 'X')
    return 10;
  if (symbol == 'L')
    return 50;
  if (symbol == 'C')
    return 100;
  if (symbol == 'D')
    return 500;
  if (symbol == 'M')
    return 1000;
}

int romantoint(std::string roman_numeral)
{
  char actualSymbol;
  char nextSymbol;
  int finalValue=0;
  for (int i=0; i< roman_numeral.size(); i++)
    {
      actualSymbol = roman_numeral[i];
      if(i+1 < roman_numeral.size())
	{
	  nextSymbol = roman_numeral[i+1];
	  if(symbol2Value(actualSymbol) < symbol2Value(nextSymbol))
	    {
	      finalValue += symbol2Value(nextSymbol) - symbol2Value(actualSymbol);
	      i++;
	    }
	  else
	    {
	      finalValue += symbol2Value(actualSymbol);
	    }
	}
      else
	{
	  finalValue+=symbol2Value(actualSymbol);
	}

    }
  return finalValue;
}


std::string inttoroman(int number)
{
  std::string romans = "";
  while(number != 0)
    {
      
        if (number >= 1000)      
        {
           romans.append("M");
           number -= 1000;
        }

        else if (number >= 900)  
        {
           romans.append("CM");
           number -= 900;
        }        

        else if (number >= 500)  
        {           
           romans.append("D");
           number -= 500;
        }

        else if (number >= 400)  
        {
           romans.append("CD");
           number -= 400;
        }

        else if (number >= 100)  
        {
           romans.append("C");
           number -= 100;                       
        }

        else if (number >= 90)   
        {
           romans.append("XC");
           number -= 90;                                              
        }

        else if (number >= 50)   
        {
           romans.append("L");
           number -= 50;                                                                     
        }

        else if (number >= 40)   
        {
           romans.append("XL");           
           number -= 40;
        }

        else if (number >= 10)   
        {


           romans.append("X");
           number -= 10;           
        }

        else if (number >= 9)    
        {
           romans.append("IX");
           number -= 9;                         
        }

        else if (number >= 5)    
        {
           romans.append("V");
           number -= 5;                                     
        }

        else if (number >= 4)    
        {
           romans.append("IV");
           number -= 4;                                                            
        }

        else if (number >= 1)    
        {
           romans.append("I");
           number -= 1;                                                                                   
        }

    }

    return romans;
}
