//Replace vowels with a digit
//Using C 
#include <stdio.h>    /*Standard Input Output Header file */

int main()       //Main function starts
{
    int i, j, k, isPrime,sum=0,index, index1;  //integer variable initialization
    char str[100];                             //string  variable initialization
    
    scanf("%s",str);  //string input
    for(i=0; str[i]!='\0'; i++)            //for Loop will repeat until null of string
    {   
        
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U'){              //If condition will Check string contains vowels or not
                                                       //If any vowels found if condition  will continue
      	index1=i;           
      	index=i*100;  //Multiply the index with 100
        
       for(j=2; j<=index; j++)   //Repeat until the index value
        {
        	
        isPrime = 1;             //Initialze prime equql to 1
        for(k=2; k<=j/2 ;k++)   // Check if the current number j is Prime or not 
        {
            if(j%k==0)          //checking divisibility
            {
                
                isPrime = 0;   // 'j' is not prime 
                break;        // come out of the loop
            }
        }

       
        if(isPrime==1)  // 'j' is Prime then add to sum 
        {
            sum += j;    //Total sum of prime no.s till the index
        }
        }
        int sum1=0;    //Initialize sum1 to 0
        while(sum > 0 || sum1 > 9) //Repeat until we get a sigle digit
        {
        if(sum==0)    // if sum equals to zero it will continue
        {
            sum = sum1; //Assign sum1 value to sum when sum equals to zero
            sum1 = 0;   //Make sum1 to 0
        }
        sum1 += sum % 10; //Add the single digits
        sum /= 10;        //Remove the unit digit
    }
    
      printf("%d",sum1);  //print the digit at vowel position
  }
    
   else{                 // if character is not a vowel it will execute
   
     printf("%c",str[i]); // Print character
 }
}
return 0;  //return statement
}



