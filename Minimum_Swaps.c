// minimum swaps to make symmetric string.
//using c++
#include <bits/stdc++.h> // Header file in c++
using namespace std; //standard 
 

int countSwap(string s)  // Function to Count minimum swap
{
    int n = s.length();  // calculate length of string s as n
     
    int count = 0;       // count minimum swap
 
    
    for (int i = 0; i < n / 2; i++) // A for loop which run till mid of string
	   {
       
        int left = i;    // Left pointer
 
       
        int right = n - left - 1;    // Right pointer
 
       

        while (left < right) {            // A loop which run from right pointer towards left pointer
            
            
            if (s[left] == s[right]) {     // if both char same then break the loop.
                break;                      // came out of if condition
            }
            else {                         // If not, then we have to move right pointer to one position left
                right--;                   // decrease the right by one
            }
        }
 
        // If both pointers are at same position, it denotes that we  don't have sufficient characters to make symmetric string
        if (left == right) {     //comparison
            return -1;   // return -1 when not symmetric
        }
         
        
        for (int j = right; j < n - left - 1;j++)   // else swap and increase the count
		{
            swap(s[j], s[j + 1]); //swap
            count++;             // increase the counts
        }
    }
 
    return count;    //return no.of counts
}
 
int main()     //Main function starts
{
    string s;   // initialize the string s
    cout<<"s=";  //display
    getline(cin,s);  // input the lowercase alphabet string s
 
    
    int ans1 = countSwap(s);  // Function calling
        
    reverse(s.begin(),s.end()); // reverse the string
    int ans2 = countSwap(s);   // Function calling
              
    cout<<max(ans1,ans2);    // Counting maximum no.of counts.
 
    return 0; //return statement 
}
