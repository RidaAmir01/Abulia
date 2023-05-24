#include <iostream>
#include <string>

using namespace std;

class AbuliaDiagnosticQuiz {
private:
    string questions[10];
    string answers[10];
    int score;

public:
    AbuliaDiagnosticQuiz(string quizQuestions[]) {
        for (int i = 0; i < 10; i++) {
            questions[i] = quizQuestions[i];
            answers[i] = "";
        }
        score = 0;
    }

    void displayQuestions() {
        for (int i = 0; i < 10; i++) {
            cout << questions[i] << endl;
            cin >> answers[i];
            if (answers[i] == "yes") {
                score += 20;
            }
        }
    }

    int calculateTotalScore() {
        return score;
    }

    void displayResult() {
        if (score > 300) {
            cout << "The patient may indicate Level 1 symptoms of Abulia" << endl;
        } else if (score < 300) {
            cout << "The patient may indicate level 2 or 3 symptoms of Abulia. Please consult medical assistance." << endl;
        } else {
            cout << "The patient may not have Abulia!" << endl;
        }
    }
};

int main() {
    string questions1[10] = {"Question 1: Do you have difficulty initiating tasks or activities?",
                            "Question 2: Are you able to follow through on tasks and complete them?",
                            "Question 3: Do you have difficulty making decisions or setting goals?",
                            "Question 4: Have you experienced any changes in your mood or emotions?",
                            "Question 5: Do you have difficulty concentrating or maintaining focus?",
                            "Question 6: Do you have difficulty problem-solving or making judgments?",
                            "Question 7: Have you noticed a decrease in your energy level or overall activity level?",
                            "Question 8: Have you noticed a lack of motivation or drive to do things that you used to enjoy?",
                            "Question 9: Have you noticed any changes in your appetite or weight?",
                            "Question 10: Do you feel a reduced sense of purpose or meaning in life?"};

    AbuliaDiagnosticQuiz level1Quiz(questions1);
    cout << "Welcome to Abulia Diagnostic Quiz!" << endl;
    cout << "Level 1:" << endl;
    level1Quiz.displayQuestions();
    cout << "Level 1 Score is: " << level1Quiz.calculateTotalScore() << endl;

    string questions2[10] = {"Question 1: Have you noticed any changes in your memory or cognitive functioning?",
                            "Question 2: Do you feel isolated or withdrawn from social situations?",
                            "Question 3: Have you taken any medications that may affect your mood or behavior?",
                            "Question 4: Have you been exposed to any toxins or chemicals that may affect brain function?",
                            "Question 5: Have you experienced any recent life changes or stressful events?",
                            "Question 6: Have you experienced any trauma or abuse in your past?",
                            "Question 7: Have you ever had suicidal thoughts or made a suicide attempt?",
                            "Question 8: Have you ever received psychotherapy or counseling?",
                            "Question 9: Have you ever been diagnosed with a mental health condition?",
                            "Question 10: Have you ever had any formal cognitive or psychological testing?"};

    AbuliaDiagnosticQuiz level2Quiz(questions2);
    cout << "Welcome to Abulia Diagnostic Quiz!" << endl;
    cout << "Level 2:" << endl;
    level2Quiz.displayQuestions();
    cout << "Level 2 Score is: " << level2Quiz.calculateTotalScore() << endl;

    string questions3[10] = {"Question 1: Have you ever been hospitalized for psychiatric treatment?",
                            "Question 2: Have you had any recent surgeries or medical procedures?",
                            "Question 3: Have you ever had a stroke or traumatic brain injury?",
                            "Question 4: Have you ever been diagnosed with a neurological condition?",
                            "Question 5: Have you ever received treatment for a substance use disorder?",
                            "Question 6: Have you ever participated in a rehabilitation program?",
                            "Question 7: Have you ever felt guilty or ashamed for not being able to complete a task or activity?",
                            "Question 8: Can you describe any situations where you felt unable to control your thoughts or actions?",
                            "Question 9: Have you ever experienced any sensory changes, such as vision or hearing loss, that might indicate damage to specific brain areas?",
                            "Question 10: Have you ever been diagnosed with a neurodegenerative disease, such as Alzheimer's or Parkinson's?"};

    AbuliaDiagnosticQuiz level3Quiz(questions3);
    cout << "Welcome to Abulia Diagnostic Quiz!" << endl;
    cout << "Level 3:" << endl;
    level3Quiz.displayQuestions();
    cout << "Level 3 Score is: " << level3Quiz.calculateTotalScore() << endl;

    int totalScore = level1Quiz.calculateTotalScore() + level2Quiz.calculateTotalScore() + level3Quiz.calculateTotalScore();
    cout << "Total score is: " << totalScore << endl;

    level3Quiz.displayResult();

    return 0;
}

