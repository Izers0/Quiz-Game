#include <iostream>
using namespace std;

bool askQuestion (string questions[], string answers[][5], char correctAnswers[]);

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
    string answers [][5] = { // question 1 answers - A
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

    /* size of answers array */
    constexpr int answerRows = sizeof(answers) / sizeof(answers[0]);
    int answerCols = sizeof(answers) / sizeof(answers[0]);


    // Array to hold the correct answers to check against user input
    char correctAnswers[] = {'A', 'C', 'B', 'D', 'B'};

    /* size of correctAnswer array */
    int correctAnswerSize = sizeof(correctAnswers) / sizeof(correctAnswers[0]);

    cout << "Welcome to the One Piece Quiz game!\n";
    cout << "Choose A, B, C or D to decide your answer\n\n";

    char userGuess;

    // Display the questions
    for (int i = 0; i < questionSize; i++) {
        cout << questions[i] << "\n";

        // Display each of the possible answers
        for (int j = 0; j < answerRows; j++) {
            cout << answers[i][j] << "\n";
        }
        // Ask for user input after the inner loop for all the answers to display
        cin >> userGuess;
    }
}

bool askQuestion (string questions[], string answers[][5], char correctAnswers[]) {
    return true;
}
/* Process each question in the function
 * Loop to the next question in the main function */