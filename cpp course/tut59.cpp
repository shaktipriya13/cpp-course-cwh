//FOUNDATION OF COMPUTER SCIENCE

// file ek data(characters) ka pattern ha jisko store krke rakh diya gya ha disk me
// A + 32 = a
//to represent large no.s in binary form, take larger bit size....as the no. of bits increases, the more greater no. we can represent..bits can be in any number like 8,64 etc.
//the entire file code can be transmitted in stream of 0's and 1's.
//transistor is used as a switch in the computers....this type of switch can be done on/off very very quickly..(we can do on/off in a millions of seconds....isse data can be transmitted very quickly)
//Rapid switching allows for fast transmission of data.


//FILE KI information directly store krne ke lie cpp hume kuch classes deta ha --->next lec me classes padhenge
//stream is an interface for data transfer from file to cpp program and vice-versa
// types of streams--> input stream and output stream
// a file also has 2 types of streams - i/p stream and o/p stream

/*
In this tutorial, we will discuss file input and output in C++

The file is a patent of data which is stored in the disk. Anything written inside the file is called a patent, for example: “#include” is a patent. The text file is the combination of multiple types of characters, for example, semicolon “;” is a character.

The computer read these characters in the file with the help of the ASCII code. Every character is mapped on some decimal number. For example, ASCII code for the character “A” is “65” which is a decimal number. These decimal numbers are converted into a binary number to make them readable for the computer because the computer can only understand the language of “0” and “1”.

The reason that computers can only understand binary numbers is that a computer is made up of switches and switches only perform two operations “true” or “false”.
*/


/*
File Input and Output in C++
The file can be of any type whether it is a file of a C++ program, file of a game, or any other type of file. There are two main operations which can be performed on files

-Read File
-Write File
*/