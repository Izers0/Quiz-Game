#include <iostream>
using namespace std;

bool askQuestion (string questions[], string answers[][4], char correctAnswers[]);

int main() {

    // Array of questions
    string questions [] = {"1. How was luffy first introduced?",
                            "2. What is Sanjis dream?",
                            "3. Where did luffy first meet Nami?",
                            "4. What is Usopp most known for?",
                            "5. What is the name of the sword Zoro first recieved?"};

    /* size of questions array
    int questionSize = sizeof(questions) / sizeof(questions[0]);
    */

    // Array of answers
    string answers [][4] = { // question 1 answers - A
                            {"In a barrel lost at sea", "Imprisoned by an enemy", "With Shanks",
                                "Training to be a marine" },
                             // question 2 answers - C
                            {"To cook the best meal in the world", "To own his own restaurant",
                                "To find the All-Blue", "To be Stronger than Zoro"},
                             // question 3 answers - B
                            {"Arlong Park", "On his way to Orange Town", "The Grandline",
                                "Alabasta"},
                             // question 4 answers - D
                            {"Being a good captain", "His inventions", "Art", "Lying"},
                             // question 5 answers - B
                            {"Enma", "Wado-Ichimoji", " Sandai Kitetsu", "Shusui"}
                            };

    /* size of answers array
    int answerRows = sizeof(answers) / sizeof(answers[0]);
    int answerCols = sizeof(answers) / sizeof(answers[0]);
    */

    // Array to hold the correct answers to check against user input
    char correctAnswers[] = {'A', 'C', 'B', 'D', 'B'};

    /* size of correctAnswer array
    int correctAnswerSize = sizeof(correctAnswers) / sizeof(correctAnswers[0]);
    */

    askQuestion(questions, answers, correctAnswers);
}

bool askQuestion (string questions[], string answers[][4], char correctAnswers[]) {
    return true;
}