#include <iostream>
using namespace std;

char tablero[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
int TurnoJugador;
int TurnoCPU();
void board();

int main()
{

	int player = 1,i,choice,GameMode =0,jugada;
    char mark;
    cout << "                       - Select mode -\n                        [1] 2 PLAYERS \n                        [2] VS CPU\n                    Choise your selectiion :";//GAME MODE
    cin >> GameMode;
    
    
    if(GameMode == 1){ //MODE 2 PLAYERS
        do
        {
            board();
            player=(player%2)?1:2;

            cout << "                              Player " << player << ", enter a number:  ";
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
                cout<<"                 *******************************************************\n";
                cout<<"                 * Invalid move ----------> Plase enter for last move  *\n";
                cout<<"                 *******************************************************";
                player--;
                cin.ignore();
                cin.get();
            }
            i=checkwin();

            player++;
        }while(i==-1);
        board();
        if(i==1)

            cout<<"                        ----------->\aPlayer "<<--player<<" win <-----------";
        else
            cout<<"                           **********\aGame draw**********";

        cin.ignore();
        cin.get();
        
    }
       //PRUBA CPU 
      


     else if (GameMode == 2) //--------------------------------------------------CPU------------------------------------------------
        {
            do{
            board() ;
            if (player%2!=0)
            {
            player=(player%2)?1:2;
            cout << "                              Player " << player << ", enter a number:  ";
            cin >> choice;
            } else {
                choice=TurnoCPU();
            }
            

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
                cout<<"                 **************************************************************************************\n";
                cout<<"                 * Invalid move ----------> Plase enter the key intro until the computer makes a move *\n";
                cout<<"                 **************************************************************************************";

                player--;
                cin.ignore();
                cin.get();
            }
            i=checkwin();

            player++;
        }while(i==-1);
        board();
        if(i==1)

            cout<<"                        ----------->\aPlayer "<<--player<<" win<----------- ";
        else
            cout<<"                           **********\aGame draw**********";

        cin.ignore();
        cin.get();
}
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
    int co1 ,co2, co3, co4, co5, co6, co7, co8, co9;
    
    cout << "\033[1;33m"<<" \n\n\t                            Tic Tac Toe\n\n";

    cout << "\033[1;33m" << "               Player 1 (X)" << "              -" <<"\033[1;36m" << "              Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "\033[1;37m"<<"                                      |     |     " << endl;
    co1=(tablero[1]== 'X')?33:36;// 
    co2=(tablero[2]== 'X')?33:36;//   ==funcion para cambiar el color si es X o O
    co3=(tablero[3]== 'X')?33:36;//
    cout << "                                   " << "\033[1;" <<  co1 << "m" << tablero[1] << "\033[1;37m"<<"  |  " << "\033[1;" << co2 << "m" << tablero[2] <<"\033[1;37m"<<"  |  " << "\033[1;" << co3 << "m" << tablero[3] << endl;
    
    cout <<"\033[1;37m"<< "                                 _____|_____|_____" << endl;
    cout << "\033[1;37m"<<"                                      |     |     " << endl;
    co4=(tablero[4]== 'X')?33:36;// 
    co5=(tablero[5]== 'X')?33:36;//   ==funcion para cambiar el color si es X o O
    co6=(tablero[6]== 'X')?33:36;//
    cout << "                                   " << "\033[1;" <<  co4 << "m" << tablero[4] << "\033[1;37m"<< "  |  " << "\033[1;" << co5 << "m" << tablero[5] <<"\033[1;37m"<< "  |  " << "\033[1;" <<  co6 << "m" << tablero[6] << endl;

    cout << "\033[1;37m"<<"                                 _____|_____|_____" << endl;
    cout << "\033[1;37m"<<"                                      |     |     " << endl;

    co7=(tablero[7]== 'X')?33:36;// 
    co8=(tablero[8]== 'X')?33:36;//   ==funcion para cambiar el color si es X o O
    co9=(tablero[9]== 'X')?33:36;//
    cout << "                                   " << "\033[1;" <<  co7 << "m" << tablero[7] << "\033[1;37m"<<"  |  " << "\033[1;" << co8 << "m" << tablero[8] <<"\033[1;37m"<< "  |  " << "\033[1;" <<  co9 << "m" << tablero[9] << endl;
    
    cout <<"\033[1;37m"<< "                                      |     |     " << endl << endl;
}
int TurnoCPU()
{
    int Jugada = 1 + rand() % 9;
     // En caso de que ninguno ni otro, aleatoria
    return Jugada;
}
/*******************************************************************
                END OF PROJECT
********************************************************************/
/*Nueva integracion
*/