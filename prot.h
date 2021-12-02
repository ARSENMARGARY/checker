#include <iostream>
#include <string>
using namespace std;

class Shash
{
    public:
       bool whos_step();
    
    private:
        bool m_step_player {};
        

};


 class Figur{
            public:
                Figur() : m_white {"X"} , m_black {"O"} {};

            public:
                void figur_print();
                bool valid_step();
                void figur_remove();
                bool m_figur [9][9];
                string m_white;
                string m_black;
            
        };





class Board{
            public:
                void board_print_nums();
                void board_print_boards();
                bool state_board {};
                string board [9][9];
        };




































// string buff; // Буфер хранения фигуры
// bool flag_buff = false; // Флаг буфера    
// // Массив представления
//  // Массив состояния
//  // Считаем полуходы
//


// void doska_default() {  // Начальное положение доски и фигур
//     Figur f;
    // for (int i = 0; i < 8; i++)
    // {   
    //     for (int j = 1; j < 9; j++)
    //     {           
    //         doska[i][j] = "|__|";
    //         doska_b[i][j] = 0;
    //     }   
    // }
    // for (int i = 1; i < 9; i++)
    // {                                                       
    //     doska[1][i] = "|" + f.Pb + "|"; doska_b[1][i] = 1;
    //     doska[6][i] = "|" + f.Pw + "|"; doska_b[6][i] = 1;
    // }
    // doska[0][1] = doska[0][8] = "|" + f.Bb + "|"; doska_b[0][1] = doska_b[0][8] = 1;
    // doska[7][1] = doska[7][8] = "|" + f.Bw + "|"; doska_b[7][1] = doska_b[7][8] = 1;
    // doska[0][2] = doska[0][7] = "|" + f.Nb + "|"; doska_b[0][2] = doska_b[0][7] = 1;
    // doska[7][2] = doska[7][7] = "|" + f.Nw + "|"; doska_b[7][2] = doska_b[7][7] = 1;
    // doska[0][3] = doska[0][6] = "|" + f.Rb + "|"; doska_b[0][3] = doska_b[0][6] = 1;
    // doska[7][3] = doska[7][6] = "|" + f.Rw + "|"; doska_b[7][3] = doska_b[7][6] = 1;
    // doska[0][4] = "|" + f.Qb + "|"; doska_b[0][4] = 1;
    // doska[0][5] = "|" + f.Kb + "|"; doska_b[0][5] = 1;
    // doska[7][4] = "|" + f.Qw + "|"; doska_b[7][4] = 1;
    // doska[7][5] = "|" + f.Kw + "|"; doska_b[7][5] = 1;
    
//     doska_print(); // Выводим доску и фигуры
// }