#include <iostream>
using namespace std;

char tablero[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && tablero[1] == '1')

            tablero[1] = mark;
        else if (choice == 2 && tablero[2] == '2')

            tablero[2] = mark;
        else if (choice == 3 && tablero[3] == '3')

            tablero[3] = mark;
        else if (choice == 4 && tablero[4] == '4')

            tablero[4] = mark;
        else if (choice == 5 && tablero[5] == '5')

            tablero[5] = mark;
        else if (choice == 6 && tablero[6] == '6')

            tablero[6] = mark;
        else if (choice == 7 && tablero[7] == '7')

            tablero[7] = mark;
        else if (choice == 8 && tablero[8] == '8')

            tablero[8] = mark;
        else if (choice == 9 && tablero[9] == '9')

            tablero[9] = mark;
        else
        {
            cout<<"Invalid move ----------> Plase enter for last move  ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
    if (tablero[1] == tablero[2] && tablero[2] == tablero[3])

        return 1;
    else if (tablero[4] == tablero[5] && tablero[5] == tablero[6])

        return 1;
    else if (tablero[7] == tablero[8] && tablero[8] == tablero[9])

        return 1;
    else if (tablero[1] == tablero[4] && tablero[4] == tablero[7])

        return 1;
    else if (tablero[2] == tablero[5] && tablero[5] == tablero[8])

        return 1;
    else if (tablero[3] == tablero[6] && tablero[6] == tablero[9])

        return 1;
    else if (tablero[1] == tablero[5] && tablero[5] == tablero[9])

        return 1;
    else if (tablero[3] == tablero[5] && tablero[5] == tablero[7])

        return 1;
    else if (tablero[1] != '1' && tablero[2] != '2' && tablero[3] != '3' 
                    && tablero[4] != '4' && tablero[5] != '5' && tablero[6] != '6' 
                  && tablero[7] != '7' && tablero[8] != '8' && tablero[9] != '9')

        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
    system("clear");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << tablero[1] << "  |  " << tablero[2] << "  |  " << tablero[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << tablero[4] << "  |  " << tablero[5] << "  |  " << tablero[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << tablero[7] << "  |  " << tablero[8] << "  |  " << tablero[9] << endl;

    cout << "     |     |     " << endl << endl;
}

/*******************************************************************
                END OF PROJECT
********************************************************************/