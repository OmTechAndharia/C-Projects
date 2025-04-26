#include <stdio.h>
#include <windows.h>

#define NUM_CANDIDATES 3

void main()
{
    int votes[NUM_CANDIDATES] = {0}; // Initialize all candidate votes to 0
    int voterChoice;

    printf("Welcome to the Voting Machine (EVM)!\n");

    while (1)
    {
        printf("\nPlease vote for your candidate (1-%d), or enter 0 to exit: ", NUM_CANDIDATES);
        scanf("%d", &voterChoice);
        if (voterChoice <= NUM_CANDIDATES)
        {
            Beep(500, 1000);
            Sleep(100);
        }

        if (voterChoice == 0)
        {
            printf("\nThank you for voting!\n");
            break; // Exit the voting loop
        }
        else if (voterChoice < 1 || voterChoice > NUM_CANDIDATES)
        {
            printf("Invalid choice! Please select a valid candidate.\n");
            continue; // Restart the loop
        }

        // Increment the vote count for the selected candidate
        votes[voterChoice - 1]++;
        printf("Vote recorded for candidate %d.\n", voterChoice);
    }

    printf("\nVoting Summary:\n");
    for (int i = 0; i < NUM_CANDIDATES; i++)
    {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
}