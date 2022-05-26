#include <iostream>


void square() {

	std::cout << " --------\n";
	std::cout << "|        |\n";
	std::cout << "|        |\n";
	std::cout << "|        |\n";
	std::cout << "|        |\n";
	std::cout << " --------\n";
}

void triangle() {

	std::cout << "       /\\\n";
	std::cout << "      /  \\\n";
	std::cout << "     /    \\\n";
	std::cout << "    /      \\\n";
	std::cout << "   /        \\\n";
	std::cout << "  /__________\\\n";

}

void rectangle(int H, int W) {
    for (int width = 1; width <= H; width++)
    {
        if (width <= 1)
            for (int width = 1; width <= W; width++)
            {
                std::cout << "--";
            }
        else if (width < H)
        {
            std::cout << "\n";
            for (int w2 = 1; w2 <= W; w2++)
            {
                if (w2 == 1 || w2 == W)
                    std::cout << "| ";
                else
                    std::cout << "  ";
            } //end of for  variable width2
        }// end of else if
        else
        {
            std::cout << "\n";
            for (int w3 = 1; w3 <= W; w3++)
            {
                std::cout << "--";
            }//end of for having variable width3
        }// end of else
    }// end of first for loop
}// end of main function

int CalculateScore(int score) {
    score += 10;
    return score;
}





int main() {
	
    bool play = true;
    int guess;
    int score = 0;
    int menu;




    std::cout << "Welcome to the shape guesser\n";

    

    while (play == true)
    {

        srand((time)(NULL));
        int randomNum = (rand() % 3) + 1;

        std::cout << "The options are:\n";
        std::cout << "[1]Play\n";
        std::cout << "[2]Final Score\n";
        std::cout << "[3]Exit\n";
        std::cin >> menu;

        switch (menu) {

        case 1:
            switch (randomNum) {

            case 1:
                (randomNum == 1);
                square();

                std::cout << "\n what shape is this?\n";
                std::cout << "[1]Triangle\n";
                std::cout << "[2]Square\n";
                std::cout << "[3]Rectangle\n";
                std::cout << "[4]None of the above\n";
                std::cin >> guess;

                if (guess == 2) {
                    std::cout << "thats correct";
                    score = CalculateScore(score);
                }

                else {
                    std::cout << "thats incorrect";
                }
                break;

            case 2:
                (randomNum == 2);
                triangle();

                std::cout << "\n what shape is this?\n";
                std::cout << "[1]Triangle\n";
                std::cout << "[2]Square\n";
                std::cout << "[3]Rectangle\n";
                std::cout << "[4]None of the above\n";
                std::cin >> guess;

                if (guess == 1) {
                    std::cout << "thats correct";
                    score = CalculateScore(score);
                }

                else {
                    std::cout << "thats incorrect";
                }
                break;

            case 3:
                (randomNum == 3);
                rectangle(7, 11);

                std::cout << "\n what shape is this?\n";
                std::cout << "[1]Triangle\n";
                std::cout << "[2]Square\n";
                std::cout << "[3]Rectangle\n";
                std::cout << "[4]None of the above\n";
                std::cin >> guess;

                if (guess == 3) {
                    std::cout << "thats correct\n";
                    score = CalculateScore(score);
                }

                else {
                    std::cout << "thats incorrect\n";
                }

            default:
                std::cout << "please enter a valid option";
            }
            break;

        case 2:
            std::cout << "Your score is: " << score << "\n";
            break;

        case 3:
            std::cout << "Exiting now\n Thank you for playing";
            play = false;
            break;

        }

    }


}

   
