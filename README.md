Nathaniel Buchanan
nb333218@ohio.edu
January 21, 2020
CS3560 Assignment 1

This file was created in order to explain to the user more about this checkers project. There might be a few bugs, but there should be NO COMPILER errors or RUNTIME ERRORS for any part. If there is, I am unaware of any because it functions properly for me, and it also did for Professor Dolan. Please use Linux in order to run all versions. The board does NOT display properly if it runs through Windows (unsure about Mac).

Extract the zipped folder and put all of the files in a folder. Now with all of them together in the same directory, use "g++ *.cc" in the terminal. Then in order to run the game, use "./a.out". It should work correctly.

In order to move, the user must initially start with where there piece is at, and where they wish for it to land. For example, if the player wishes to move their piece from A2 to B3, they would simply enter "A2B3." In order to jump, the user would start with their initial spot and where their piece would land. For example, a jump from A2 over B3 would land the user at C4. So, the user would input "A2C4" into the terminal. Lastly, to do larger jumps, the user would just add more to the end of their "turn." For example, if the user has a piece on A2 and wishes to do a double jump over two opponent pieces, an example move would be "A2B4C6".

First Version:

The first version only enables the user to have the board drawn and allows the player to make 1 move, the white player is Player 1, Player 2 is blue. 

Second Version:

The second version allows the user to play against another human opponent. To my knowledge, there is no error in playing the game. It is a full working game of checkers. This algorithm took me several hours to figure out (due to it being an independent project). I am very proud of some of the functions I created and thought of, the most proud I have been with programming so far (since I lack experience).

Third Version:

This is the final version. The White Player is a human player while the blue player is an AI. The AI calculates a move by "looking into the future" and deciding what would work best for itself. This algorithm was mostly created by the author. The only bug I know of is that the AI is only able to do singular jumps. Other than that, the AI is still intelligent and often beats the player. Good luck and thank you!

I hope you enjoy it! :D