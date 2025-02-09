//1. size() & length() are same for string but:
/*size() is commonly used across various container classes in the Standard Template Library (STL), like std::vector, std::list, etc.
length() is used predominantly in string manipulation contexts.*/

// 2. for string conversion to upperCse & lowerCse there is no such easy inbuilt fxn, so use ASCII:
/*  eg: conversion of upperCase to lowerCase in a string
            if(s[i]>='A' && s[i]<='Z'){
                s[i]='a'+(s[i]-'A');
            }
            
*/

//3. we cannot  modif a string while iterating through it. bcoz When you remove a character from the string, the indices of subsequent characters shift, causing the loop to skip the character immediately following the erased one. To avoid this issue, you can either iterate from the end of the string to the beginning or adjust the index after erasing a character.