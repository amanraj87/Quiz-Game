#include <bits/stdc++.h>
using namespace std;
string input;
int score = 0;
void startgame();
void endgame();
void getdata()
{
    cout << "Enter 'PLAY' to start this Quiz Game : ";
    cin >> input;
    if (input == "PLAY")
    {
        startgame();
    }
    else
    {
        endgame();
    }
}
void game()
{
    char ans1;
    cout << "\nQ1.Which country has the highest life expectancy?\n";
    cout << "a.AUSTRALIA\n";
    cout << "b.HONG KONG\n";
    cout << "c.BRAZIL\n";
    cout << "d.AMERICA\n";
    cout << "PLEASE,Enter 'a','b','c' or 'd' and press ENTER : ";
    cin >> ans1;
    if (ans1 == 'b')
    {
        score += 4;
    }
    else
    {
        cout << "\nSORRY!,YOU LOOSE THE GAME.HONG KONG is the right answer.\n";
        cout << "YOUR FINAL SCORE : " << --score << "\n";
        abort();
    }
    char ans2;
    cout << "\nQ2.Which planet in the Milky Way is the hottest?\n";
    cout << "a.JUPITER\n";
    cout << "b.MARS\n";
    cout << "c.SATURN\n";
    cout << "d.VENUS\n";
    cout << "PLEASE,Enter 'a','b','c' or 'd' and press ENTER : ";
    cin >> ans2;
    if (ans2 == 'd')
    {
        score += 4;
    }
    else
    {
        cout << "\nSORRY!,YOU LOOSE THE GAME.VENUS is the right answer.\n";
        cout << "YOUR FINAL SCORE : " << --score << "\n";
        abort();
    }
    char ans3;
    cout << "\nQ3.Which character have both Robert Downey Jr. and Benedict Cumberbatch played?\n";
    cout << "a.IRON MAN\n";
    cout << "b.DR.BRAVESTONE\n";
    cout << "c.SHERLOCK HOLMES\n";
    cout << "d.WOLVERINE\n";
    cout << "PLEASE,Enter 'a','b','c' or 'd' and press ENTER : ";
    cin >> ans3;
    if (ans3 == 'c')
    {
        score += 4;
    }
    else
    {
        cout << "\nSORRY!,YOU LOOSE THE GAME.SHERLOCK HOLMES is the right answer.\n";
        cout << "YOUR FINAL SCORE : " << --score << "\n";
        abort();
    }
    char ans4;
    cout << "\nQ4.Which company was originally called 'Cadabra'?\n";
    cout << "a.AMAZON\n";
    cout << "b.REDDIT\n";
    cout << "c.FACEBOOK\n";
    cout << "d.GOOGLE\n";
    cout << "PLEASE,Enter 'a','b','c' or 'd' and press ENTER : ";
    cin >> ans4;
    if (ans4 == 'a')
    {
        score += 4;
    }
    else
    {
        cout << "\nSORRY!,YOU LOOSE THE GAME.AMAZON is the right answer.\n";
        cout << "YOUR FINAL SCORE : " << --score << "\n";
        abort();
    }
    if (score == 16)
        cout << "\nCONGRATULATION!,YOU WIN THE GAME WITH TOTAL SCORE OF : " << score << "\n";
}
string st;
void getd()
{
    cout << "Please enter 'START' to start this game : ";
    cin >> st;
    if (st == "START")
    {
        game();
    }
    else
    {
        cout << "INVALID RESPONSE!,Try Again\n";
        getd();
    }
}
void startgame()
{
    cout << "\n";
    cout << "**********************HURRAY!,YOU ARE PLAYING THE GAME.**********************\n";
    cout << "OK,So let me tell you about this game\n";
    cout << "->In this Game you will asked 4 Question.\n";
    cout << "->For each right answer you earn 5 points and you move forward to the next Question.\n";
    cout << "->For each wrong answer you earn -1 points and game will end showing your final score and you loose the game.\n";
    cout << "->If you reach to the last question and answered correctly you win the game.\n";
    cout << "\n";
    getd();
}
void endgame()
{
    cout << "SORRY!,Please enter a VALID RESPONSE\n";
    getdata();
}
int main()
{
    cout << "=========================WELCOME TO QUIZ GAME======================\n";
    getdata();

    return 0;
}