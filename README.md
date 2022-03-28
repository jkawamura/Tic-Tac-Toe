## How to Compile 
 `make obfuscate` (Equivalent to "gcc -o obfuscate obfuscate.c")

  
## How to Run:
    `./obfuscate`

Reflection:
===========

    Getting the code functional was relatively straight forward as the game being used (tic-tac-toe) was extremely simple.
    Obfuscating the code did not take too much work as it was already fairly difficult to parse. However, I found it difficult 
    finding a method to hide the various print messages needed to assist the user with interacting. I found a way to hide these 
    statements using parameterized macros. The only other difficulty I faced was shaping the code into an X, which took a large amount 
    of trial and error to get looking relatively correct. 

I Worked With:
==============
N/A

Approximate Hours worked:
=========================
7

Special Instructions to the grader:
===================================
None

Known Bugs or Limitations:
==========================
None known

Other comments:
===============
N/A

Write Up:
=========

    The code is a very simple tic-tac-toe engine that uses the minmax algorithm to play against the user. A main function prints
    the board's contents in a loop and asks the user to input the row and column of the spot they want to fill. The computer then
    responds with a move of its own and the process begins again until a tie or a loss is reached. For simplicity's sake, the computer
    is always 'x' (goes second) and the player is always 'o' (goes first). There are four methods used to accomplish the computer's move: 
    a method that uses the minmax algorithm to evaluate each possible move, a method that checks whether or not someone has won, a method 
    that checks if any moves are left, and a method that utilizes the other methods to evaluate all the possible moves and then uses the 
    results to place an 'x'. Essentially, the program checks all the possible outcomes of every possible move, and scores each move based 
    on the number of positive/negative outcomes. The best move is then selected and played. 

    The obfuscations of the code are relatively straightforward. All major operators and methods were substituted for single random letters 
    using macros. This reduces the readibility of the code significantly, especially when spacing was eliminated. The board is stored as a 
    2d array that is declared as a global variable below the macros. In order to hide this, the initial values were set using a wide variety 
    of arithmetic operators between integers and ascii characters to make it difficult to decipher the size of the array and its contents. All 
    these operations result in the character '-' which is the character that initially populates the array. A pointer to the beginning of the array
    is then declared as the program uses both pointer math and indexing. Next, the method 'I' is declared that just checks if the board is full.
    After that, the method 'W' is declared that checks if someone has won the game. These methods are obfuscated using char arithmetic to hide
    the various character comparisons and substitution with macros. The methods 'Y' and 'f' are then declared and are responsible for running 
    the minmax algorithm and playing the computer's move using the results of the algorithm, respectively. These are obfuscated in a similar manner
    as the previous methods. Most of these methods did not need much obfuscation to make it difficult to discern their function, however, the many
    print statements in the main method (declared at the bottom) would have made the purpose of the code obvious. In order to disguise the print statements,
    the board is printed using while loops, pointer math, and ternary operators. Additionally, the print statements asking the user to input rows and columns
    as well as the statements indicating whether the user had won, lost or tied were all packaged into a single parameterized macro 'n' that could take characters
    as arguments to be adapted into any message required by the program. This was further disguised by inputting the required characters as integers.
