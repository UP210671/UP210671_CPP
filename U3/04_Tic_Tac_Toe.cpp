#include <iostream>
using namespace std;

char tablero[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{

	int player = 1,i,choice,GameMode =0;

    char mark;
    cout << "-Select mode -\n  [1] 2 PLAYERS \n  [2] VS CPU\n Choise your selectiion :";//GAME MODE
    cin >> GameMode;
    
    
    if(GameMode == 1){ //MODE 2 PLAYERS
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
       /*PRUBA CPU }


        else if (GameMode == 2) //--------------------------------------------------CPU------------------------------------------------
        {
            do
            {
                if (TurnoJugador % 2 == 0)
                {
                    jugada = SeleccionarJugada();
                }
                else
                {
                    jugada = TurnoCPU();
                }

                casillaocupada = ComprobarJugadaOcupada(jugada);
                if (casillaocupada == true)
                {
                    do
                    {
                        cout << "Invalid play. Try again\n";
                        break;
                    } while (casillaocupada == true);
                }
                else if (casillaocupada == false)
                {
                    system("clear");
                    ReemplazarCasilla(jugada);
                    Tablero(tablero);
                    TurnoJugador++;
                }
                ganador = VerificarGanador(ganador);
            } while (ganador == false && TurnoJugador < 9);
            if (TurnoJugador < 9)
            {
                if (TurnoJugador % 2 == 0)
                {
                cout << "YOU LOSE :(\n";
                }
                else
                {
                    cout << "YOU WON!\n";
                }
            }
            else
            {
                cout << "DRAW\n";
            }
        }
        else
        {
            cout << "Invalid gamemode :(";
        }
        return 0;
}
*/
    }
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
/*Nueva integracion
int TurnoCPU()
{
    int Jugada;
    bool casillaocupada = false;
    Jugada = MejorJugada(PC);
    if (Jugada != -1)
    {
        return Jugada;
    }

    Jugada = MejorJugada(HUMANO);
    if (Jugada != -1)
    {
        return Jugada;
    }
    while (casillaocupada == false)
    {
        casillaocupada = ComprobarJugadaOcupada(Jugada);
        Jugada = 1 + rand() % 9; // En caso de que ninguno ni otro, aleatoria
    }
    return Jugada;
}

void AreaImaginaria()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            TableroImaginario[row][col] = AreaJuego[row][col];
        }
    }
}

bool ComprobarJugadaOcupadaImaginaria(int Jugada)
{
    int row = Jugada / 10, col = Jugada - 1;
    if (TableroImaginario[row][col] == 'X' || TableroImaginario[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

bool VerificarGanadorImaginario(int Jugada)
{
    bool VerificarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((TableroImaginario[0][posicion] == TableroImaginario[1][posicion]) && (TableroImaginario[0][posicion] == TableroImaginario[2][posicion]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((TableroImaginario[posicion][0] == TableroImaginario[posicion][1]) && (TableroImaginario[posicion][0] == TableroImaginario[posicion][2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((TableroImaginario[posicion][posicion] == TableroImaginario[posicion + 1][posicion + 1]) && (TableroImaginario[posicion][posicion] == TableroImaginario[posicion + 2][posicion + 2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((TableroImaginario[2][0] == TableroImaginario[1][1]) && (TableroImaginario[2][0] == TableroImaginario[0][2]))
        {
            VerificarGanador = true;
            break;
        }
    }
    return VerificarGanador;
}

void ReemplazarCasillaXImaginaria(int Jugada)
{

    int row = Jugada / 10, col = Jugada - 1;
    TableroImaginario[row][col] = 'X';
}

void ReemplazarCasillaOImaginaria(int Jugada)
{
    int row = Jugada / 10, col = Jugada - 1;
    TableroImaginario[row][col] = 'O';
}

int MejorJugada(char Jugador)
{
    bool Casillaocupada = false;
    bool Ganador = false;
    int JugadaCPU = 0;
    AreaImaginaria();
    if (Jugador == 'X')
    {
        do
        {
            JugadaCPU++;
            Casillaocupada = ComprobarJugadaOcupadaImaginaria(JugadaCPU);
            if (Casillaocupada == false)
            {
                ReemplazarCasillaXImaginaria(JugadaCPU);
                Ganador = VerificarGanadorImaginario(JugadaCPU);
            }
            AreaImaginaria();
        } while (JugadaCPU <= 9 && Ganador == false);
    }
    else
    {
        do
        {
            JugadaCPU++;
            Casillaocupada = ComprobarJugadaOcupadaImaginaria(JugadaCPU);
            if (Casillaocupada == false)
            {
                ReemplazarCasillaOImaginaria(JugadaCPU);
                Ganador = VerificarGanadorImaginario(JugadaCPU);
            }
            AreaImaginaria();
        } while (JugadaCPU <= 9 && Ganador == false);
    }
    if (JugadaCPU >= 10)
    {
        JugadaCPU = -1;
    }
    return JugadaCPU;
}*/ 