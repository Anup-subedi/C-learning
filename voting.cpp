#include <iostream>
#include <string>

const int NUM_CANDIDATES = 5;

int main()
{
    // Create an array to hold the votes for each candidate
    int votes[NUM_CANDIDATES];

    // Initialize all elements of the array to 0
    for (int i = 0; i < NUM_CANDIDATES; i++)
    {
        votes[i] = 0;
    }

    std::string name;
    int choice;

    // Get the votes from the user
    while (true)
    {
        std::cout << "Enter the name of the candidate (or 'done' to finish): ";
        std::cin >> name;

        if (name == "done")
        {
            break;
        }

        std::cout << "Enter the number of the candidate (1-" << NUM_CANDIDATES << "): ";
        std::cin >> choice;

        if (choice >= 1 && choice <= NUM_CANDIDATES)
        {
            votes[choice - 1]++;
        }
    }

    // Print the results
    std::cout << "Results:" << std::endl;
    for (int i = 0; i < NUM_CANDIDATES; i++)
    {
        std::cout << "Candidate " << i + 1 << ": " << votes[i] << " votes" << std::endl;
    }

    // Find the candidate with the most votes
    int mostVotes = 0;
    int winner = -1;
    for (int i = 0; i < NUM_CANDIDATES; i++)
    {
        if (votes[i] > mostVotes)
        {
            mostVotes = votes[i];
            winner = i;
        }
    }

    // Print the winner
    if (winner != -1)
    {
        std::cout << "The winner is candidate " << winner + 1 << " with " << mostVotes << " votes!" << std::endl;
    }
    else
    {
        std::cout << "There is no winner." << std::endl;
    }

    return 0;
}
