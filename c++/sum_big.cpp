#include <iostream>
#include <vector>
using namespace std;
// Utility function to find the sum of two numbers represented as a string in CPP
void findsum(std::string a, std::string b){
    std::vector<int>finalsum; // Stores the final sum of two number
    
    int carry=0;  // Stores carry at each stage of calculation
    
    /* Step 1 starts here */
    
    int i = a.size()-1,j=b.size()-1; // Start adding from lowest significant bit
    while((i>=0) and (j>=0)){     // Loop until either of number exhausts first
        int x = (a[i]-'0') + (b[j]-'0') + carry; // Calculate the sum of digit in final sum by adding respective digits with previous carry.
        finalsum.push_back(x%10);  // Store the respective digit of the final sum in a vector.
        carry = x/10;                // update the carry. The carry for next step is the remaining number after forming the digit of final sum.
        i--;                        // Move one step towards the left in both the string(numbers)
        j--;
    }
    /*  Step 2 starts here */
    
    while(i>=0){          // If the number 1 was greater than number 2, then there must be some digits to be taken care off.
        int x = (a[i]-'0') + carry;  // Add the remaining digits to the carry one by one and store the unit digit.
        finalsum.push_back(x%10);
        carry = x/10;            // update the carry from each step.
        i--;
    }
    /* Step 3 starts here */
    
    while(j>=0){       // If the number 2 was greater than number 1, then there must be some digits to be taken care off.
        int x = (b[j]-'0')+ carry; // Add the remaining digits to the carry one by one and store the unit digit.
        finalsum.push_back(x%10);
        carry = x/10;         // update the carry from each step.
        j--;
    }
    /* Step 4 starts here */
    
    while(carry){   //If after finishing addition of the two numbers, if there is still carry/leftover then we need to take it into the final sum.
        finalsum.push_back(carry%10); // Store digit one by one.
        carry/=10;       // Reduce carry
    }
    /* Step 5 starts here */
    for(int k = finalsum.size()-1;k>=0;k--){  // Since vector pushes value at last, the most significant digits starts at the end of the vector. Thus print reverse.
        std::cout<<finalsum[k];
    }
    std::cout<<"\n";
}
int main() {
    // Test cases 
    string a; 
    string b;
    getline(cin, a);
    getline(cin,b);
    findsum(a,b);
    
    return 0;
}