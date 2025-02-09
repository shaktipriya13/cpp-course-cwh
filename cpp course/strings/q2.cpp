//Given a binary string S. The task is to count the number of substrings that start and end with 1. For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.

//optimized code-avoiding loops
long binarySubstring(int n, string a){
    long count_ones = 0;
    long total_substrings = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == '1') {
            count_ones++;
            total_substrings += count_ones;
        }
    }

    return total_substrings;
}
