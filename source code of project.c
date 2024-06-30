
#include <stdio.h>

int main()
{
    char playAgain;

    do
    {
        int playerPoints = 0;
        int computerPoints = 0;

        for (int rounds = 0; rounds < 3; rounds++)
        {
            printf("\t\t\t\t\tRock, Paper, Scissors Game\n");
            printf("\t\t\t\t\t1. Rock\n");
            printf("\t\t\t\t\t2. Paper\n");
            printf("\t\t\t\t\t3. Scissors\n");
            printf("\t\t\t\t\tEnter your choice (1/2/3): ");

            int playerChoice;
            scanf("%d", &playerChoice);

            if (playerChoice < 1 || playerChoice > 3)
            {
                printf("Invalid choice. Please choose 1, 2, or 3.\n");
                rounds--;
                continue;
            }

            int computerChoice = rand() % 3 + 1;

            printf("\n\n\t\t\t\t\tComputer chose: %d\n", computerChoice);

            if (playerChoice == computerChoice)
            {
                printf("\t\t\t\t\tIt's a tie!\n\n");
            }
            else if ((playerChoice == 1 && computerChoice == 3) ||
                     (playerChoice == 2 && computerChoice == 1) ||
                     (playerChoice == 3 && computerChoice == 2))
            {
                printf("\t\t\t\t\tYou win!\n\n");
                playerPoints++;
            }
            else
            {
                printf("\t\t\t\t\tComputer wins!\n\n");
                computerPoints++;
            }


            printf("\t\t\t\t\tPlayer: %d  Computer: %d\n\n", playerPoints, computerPoints);
        }
        if (playerPoints > computerPoints)
        {
            printf("\t\t\t\t\tCongratulations! You win the game!\n\n");
        }
        else if (playerPoints < computerPoints)
        {
            printf("\t\t\t\t\tComputer wins the game. Better luck next time!\n\n");
        }
        else
        {
            printf("\t\t\t\t\tIt's a tie game! Well played! Well played!\n\n");
        }
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }
    while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
