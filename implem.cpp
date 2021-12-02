#include "prot.h"

bool Shash::whos_step()
{
    return m_step_player;
}

void Board::board_print_nums()
{
    system("clear"); 
    char num = 'a';    
    cout << "\n\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "\t\t\t" << 8 - i;
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j];
        }
        cout << endl << endl;
    }
    cout << "\t\t\t";
    for (int i = 1; i < 9; i++)
    {
        cout << "   " << num;
        ++num;
    }
    cout << endl;
}

void Figur::figur_print()
{
    Board b;
    for(int i = 1; i < 9; ++i)
    {
        for(int j = 1; j < 9; ++j)
        {
             if(((i + j) % 2 == 0) && i < 4)
             {
                 board[i][j] = m_white;m_figur[i][j] = 1;
             }
             if(((i + j) % 2 != 0) && i > 5)
             {
                 board[i][j] = m_black;m_figur[i][j] = 1;
             }
        }
    }

    board_print_boards();
}


void Board::board_print_boards()
{
   for (int i = 0; i < 8; i++)
    {   
        for (int j = 1; j < 9; j++)
        {
            board[i][j] = "|__|";
        }   
    }
    board_print_nums();
}















































// void Shash::board_print() 
// {
//     
//     // if (sum_hod % 2 == 0 & sum_hod > 0 | sum_hod == 1) {
//     //     cout << endl << "black : "; 
//     // }
//     // else {
//     //     cout << endl << "white : ";
//     // }
// }


