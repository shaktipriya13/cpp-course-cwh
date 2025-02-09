//Given a number as string(n) , find the remainder of the number when it is divided by 7
//for input number: 51525555495150565657515456565352495549
to handle larger numbers we use a technique called "modulo arithmetic properties". The idea is to continuously take the remainder when dividing the number formed so far by 7, ensuring that the number remains within manageable limits.
int remainderWith7(string s) {
    int mod = 0;
    for (int i = 0; i < s.size(); i++) {
        mod = (mod * 10 + (s[i] - '0')) % 7;
    }
    return mod;
}




This modification calculates the remainder by considering only one digit at a time and updating the remainder (mod) at each step. This approach should handle larger numbers without encountering overflow or data type limitations.