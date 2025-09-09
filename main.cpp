#include <iostream>
using namespace std;

bool askQuestion (string questions, string answers[4], char correctAnswers);

int main() {

    // Array of questions
    string questions [] = {"1. How was luffy first introduced?",
                            "2. What is Sanjis dream?",
                            "3. Where did luffy first meet Nami?",
                            "4. What is Usopp most known for?",
                            "5. What is the name of the sword Zoro first recieved?"};

    /* size of questions array */
    constexpr int questionSize = sizeof(questions) / sizeof(questions[0]);


    // Array of answers
    string answers [][4] = { // question 1 answers - A
                            {"A- In a barrel lost at sea", "B- Imprisoned by an enemy", "C- With Shanks",
                                "D- Training to be a marine" },
                             // question 2 answers - C
                            {"A- To cook the best meal in the world", "B- To own his own restaurant",
                                "C- To find the All-Blue", "D- To be Stronger than Zoro"},
                             // question 3 answers - B
                            {"A- Arlong Park", "B- On his way to Orange Town", "C- The Grandline",
                                "D- Alabasta"},
                             // question 4 answers - D
                            {"A- Being a good captain", "B- His inventions", "C- Art", "D- Lying"},
                             // question 5 answers - B
                            {"A- Enma", "B- Wado-Ichimoji", "C- Sandai Kitetsu", "D- Shusui"}
                            };

    // Array to hold the correct answers to check against user input
    char correctAnswers[] = {'A', 'C', 'B', 'D', 'B'};

    cout << "Welcome to the One Piece Quiz game!\n";
    cout << "Choose A, B, C or D to decide your answer\n\n";

    // Display the questions
    for (int i = 0; i < questionSize; i++) {
        askQuestion(questions[i], answers[i], correctAnswers[i]);
    }
}

// Take the current question, display all possible results and compare user input to correct answer
bool askQuestion (string question, string answer[4], char correctAnswers) {

    char userGuess;

    // print the current question
    cout << question << "\n";

    // display all the answers for the current question
    for (int i = 0; i < 4; i++) {
        cout << answer[i] << "\n";
        }

    cout << "What is your answer?\n";
    cin >> userGuess;

    // make the users guess uppercase
    userGuess = toupper(userGuess);

    // if the user guess is correct return ture, else return false
    if (userGuess == correctAnswers) {
        cout << "Correct answer!\n";
        return true;
    }
    cout << "Incorrect answer!\n";
    return false;
}