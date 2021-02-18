GUIDE FOR CRUELSCRIPT

CruelScript is an esoteric programming language. It is well? Cruel, it uses only three symbols: '+', '-' and '.'. It is designed to be a recreational programming language...

The programming language is using the ascii value of characters. It starts with 65(which is 'A') and can be decreased using '-' and increased using '+'.

The '.' symbol is used to print out the ascii value that you just increased and/or decreased.

EXAMPLE

Run cruelscript sample/sample.crs in your terminal to run a sample file.

The output should be AB. It is because inside the file is ".+.". Let's break it down into smaller parts..
The first character is '.'. Because the default ascii value in CruelScript is 65, it will print out 'A' which has 65 as it's ascii value. Then there is a '+', it increases the ascii value by one, so the ascii value is now 66. And then finally there is a '.' it simply prints out the character representation of the ascii value of 66 which is 'B'.

Then run cruelscript int your terminal and you should see an interactive program.

Try to type ".." and it's output should be "AA", why and how is left as an exercise for the reader...
