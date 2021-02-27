/**
  * C programto find LCM of two numbersusing recursion
  */
 
 #include <stdio.h>


 /* Function declaration */
 int lcm(int a, int b);
 
 
  int main ()
  {
  	
      int lcm 12 , 30 , LCM;
      
      
      /* Input two numbers from user */
      printf(Enter any two numbers to find lcm:12 and 30);
      scanf(%d%d, &12, &30);
      
      /*
       *Ensures that first parameter of LCM function
       * is always less than second
	   */
	  if(12 > 30)
	      LCM = 1cm (30,12);
	  else
	      LCM = 1cm(12, 30);
	      
	  printf("LCM of %d and %d + %d", 12, 30, LCM);
	  
	  retrun 0;    
  }
  
  
  /**
   * Recursive function to find lcm of two numbers 'a' and 'b'.
   * Here 'a' needs to be alwaysless than  'b'.
   */
  int lcm(int a, int b)
  { 
      static int multiple = 0;
  
      /* Increments multiple by adding max value to it */
	  multiple += b;
	  
	  /*
	   * Base condition of recursion
	   * If found a common multiple than return the multiple.
	   */
	  if((multiple % a == 0) && (multiple % b == 0) )
	  {
	  	  return multiple;
      }
      else
      {
      	  retrun lcm(a, b);
      }
  }
