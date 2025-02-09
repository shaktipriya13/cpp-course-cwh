// Given a string str containing alphanumeric characters. The task is to calculate the sum of all the numbers present in the string.

/*Example 1:

Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24.*/





class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	int num=0;
    	int sum=0;
    	for(int i=0;i<str.length();i++){
    	    
    	    if(str[i]>='0' &&str[i]<='9'){
    	        num=num*10+str[i]-'0';
    	           	    }
    	   
    	   else{
    	         sum+=num; //sum+=num ko if me isliye nhi lkikha bcoz usme likhne se har number ke liye addition ho rha ha...jiase for 23 ,2+3+23 ..sab add ho jayega,..but else me rakhne se only previous sum pakadega+ return time keval whole 23 add hojayega
    	         num=0;
    	     }
        }
        return sum+num;
    }
};
--------------------------------------------------------------------------------------

Loop 1: ch = '1'

'1' is a digit, so isdigit(ch) is true.
currentNumber = 0 * 10 + (1 - '0'), which sets currentNumber = 1.
Loop 2: ch = 'a'

'a' is not a digit, so the else block is executed.
sum += currentNumber, which makes sum = 1, and currentNumber is reset to 0.
Loop 3: ch = 'b'

'b' is not a digit, so the else block is executed.
sum += currentNumber, but since currentNumber is 0, sum remains unchanged.
Loop 4: ch = 'c'

'c' is not a digit, so the else block is executed.
sum += currentNumber, but since currentNumber is 0, sum remains unchanged.
Loop 5: ch = '2'

'2' is a digit, so isdigit(ch) is true.
currentNumber = 0 * 10 + (2 - '0'), which sets currentNumber = 2.
Loop 6: ch = '3'

'3' is a digit, so isdigit(ch) is true.
currentNumber = 2 * 10 + (3 - '0'), which sets currentNumber = 23.
After the loop completes, sum += currentNumber adds the last accumulated number (23) to sum. So, sum will be 1 + 23 = 24.






