#include <iostream>

#include <cstdio>

#include <conio.h>

#include <iomanip>

#include<stdlib.h>

using namespace std;

class TTT {
    char ctrl;
    int ip = 0, decf,chance = 0;
    string name;
    char xo1, xo2;
    char grid[3][3];
    public:
        int check() {
            if(grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O') {
                decf = 69; return 0;
            }
            else if(grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O') {
                decf = 69;return 0;
            }
            else if(grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O') {
                decf = 69;return 0;
            }else if(grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O') {
                decf = 69;return 0;
            }else if(grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O') {
                decf = 69;return 0;
            }else if(grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O') {
                decf = 69;return 0;
            }else if(grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O') {
                decf = 69;return 0;
            }else if(grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O') {
                decf = 69;return 0;
            }
            if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X') {
                decf = 420;return 0;
            }
            else if(grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X') {
                decf = 420;return 0;
            }
            else if(grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X') {
                decf = 420;return 0;
            }else if(grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X') {
                decf = 420;return 0;
            }else if(grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X') {
                decf = 420;return 0;
            }else if(grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X') {
                decf = 420;return 0;
            }else if(grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X') {
                decf = 420;return 0;
            }else if(grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X') {
                decf = 420;return 0;
            } else {
                return 1;
            }
            
        }
        void single_player() {
            char k = 49;
            int score_1 = 0,score_2 = 0;

            while(k=='9') {
                for(int i;i<3;i++) {
                    for(int j;j<3;j++) {
                        grid[i][j]=k;
                    }
                    k++;
                }
            }
            cout << endl << endl << setw(48) << right << "* * * Tic Tac Toe * * *";
            cout<<endl<<endl<<endl<<"   Enter your name => ";
            getline(cin,name);

            if (name.size()<2 || name.size()>10) {
                cout<<"\n\nEnter the size of the name between 2 to 10 or else you can give but you may face dirty ui design";
                cout<<endl<<endl<<"   Enter your name => ";
                getline(cin,name);
            }
            cout<<setw(25)<<right<<"Choose X or O : ";
            cin>>xo1;
            
            while(1) {
                if (xo1=='X') {xo2='O';break;}
                else if (xo1=='O') {xo2='X';break;}
                else if (xo1=='x') {xo1='X';break;xo2='O';}
                else if (xo1=='o') {xo1='O';break;xo2='X';}
                else cout<<endl<<endl<<setw(20)<<right<<"Choose from X or O";
            }
            

            cout<<"\n\n\n";
            cout<<setw(45)<<"Positions for playing the game\n";
            cout<<setw(45)<<right<<grid[0][0]<<" | "<<grid[0][1]<<" | "<<grid[0][2]<<endl;
            cout<<setw(54)<<right<<"----------"<<endl;
            cout<<setw(45)<<right<<grid[1][0]<<" | "<<grid[1][1]<<" | "<<grid[1][2]<<endl;
            cout<<setw(54)<<right<<"----------"<<endl;
            cout<<setw(45)<<right<<grid[2][0]<<" | "<<grid[2][1]<<" | "<<grid[2][2]<<endl;
            cout<<endl<<endl<<setw(50)<<"To play the game enter position and 'o' or 'x'\n"<<setw(20)<<"eg. 2 x, 3 o";
            cout<<"\n\nTap any key to continue...";
            getchar();
            
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    grid[i][j] = ' ';

            while(check()) {
                system("cls");
                cout << endl << endl << setw(55) << right << "* * * Tic Tac Toe * * *";
                cout<<endl<<endl<<setw(15)<<name<<" => "<<score_1<<setw(90)<<right<<"Computer => "<<score_2;
                

                cout<<endl<<endl<<endl;
                cout<<setw(45)<<right<<grid[0][0]<<" | "<<grid[0][1]<<" | "<<grid[0][2]<<endl;
                cout<<setw(54)<<right<<"----------"<<endl;
                cout<<setw(45)<<right<<grid[1][0]<<" | "<<grid[1][1]<<" | "<<grid[1][2]<<endl;
                cout<<setw(54)<<right<<"----------"<<endl;
                cout<<setw(45)<<right<<grid[2][0]<<" | "<<grid[2][1]<<" | "<<grid[2][2]<<endl;
                
                int pos;
                if(chance<9) {
                    if (chance%2==0) {
                        cin>>pos;
                        if (pos>6) {
                            grid[2][pos-7]=xo1;chance++;
                        } else if (pos>3) {
                            grid[1][pos-4]=xo1;chance++;
                        } else if (pos>0) {
                            grid[0][pos-1]=xo1;chance++;
                        }
                    }
                    else {
                        cin>>pos;
                        if (pos>6) {
                            grid[2][pos-7]=xo2;chance++;
                        } else if (pos>3) {
                            grid[1][pos-4]=xo2;chance++;
                        } else if (pos>0) {
                            grid[0][pos-1]=xo2;chance++;
                        }
                    }
                }
            }
            if (decf==69) {
                if (xo1=='O') {
                    cout<<endl<<endl<<setw(35)<<right<<"Congrautions"<<name<<" is the winner";
                }
                else {
                    cout<<endl<<endl<<setw(35)<<right<<"You lose!!!";
                }
                
            } else {
                if (xo1=='X') {
                    cout<<endl<<endl<<setw(35)<<right<<"Congrautions"<<name<<" is the winner";
                }
                else {
                    cout<<endl<<endl<<setw(35)<<right<<"You lose!!!";
                }
                
            }
        }
        void multi_player() {

        }
        void menu(int ip) {
            if (ip == 1) {
                system("cls");
                cout << endl << endl << setw(48) << right << "* * * Tic Tac Toe * * *";
                cout << "\n\n\n" << setw(55) << "| Important Instruction:- Use arrow |\n"<< setw(55)<< right <<"|   keys to navigate through menu   |\n";
                cout << "\n\n" << setw(45) << right << "[*] 1. Single Player";
                cout << "\n\n" << setw(45) << right << "[ ] 2. Multi-Player";
            } else if (ip == 2) {
                system("cls");
                cout << endl << endl << setw(48) << right << "* * * Tic Tac Toe * * *";
                cout << "\n\n\n" << setw(55) << "| Important Instruction:- Use arrow |\n"<< setw(55)<< right <<"|   keys to navigate through menu   |\n";
                cout << "\n\n" << setw(45) << right << "[ ] 1. Single Player";
                cout << "\n\n" << setw(45) << right << "[*] 2. Multi-Player";
            } else {
                system("cls");
                cout << endl << endl << setw(48) << right << "* * * Tic Tac Toe * * *";
                cout << "\n\n\n" << setw(55) << "| Important Instruction:- Use arrow |\n"<< setw(55)<< right <<"|   keys to navigate through menu   |\n";
                cout << "\n\n" << setw(45) << right << "[ ] 1. Single Player";
                cout << "\n\n" << setw(45) << right << "[ ] 2. Multi-Player";
            }
        }
    TTT() {
        cout << endl << endl << endl << endl << endl << setw(70) << right << "* * * * Welcome to Tic Tac Toe * * * *" << endl << endl <<endl<<endl<<endl<<endl<<endl;
        cout << setw(65) << right << "Tap any key to continue ...";

        ctrl = _getch();
        system("cls");
        menu(ip);
        while (true) {
            if (kbhit) {
                ctrl = _getch();
                if ((int) ctrl == 72) {
                    ip--;
                    if (ip <= 0) {
                        ip = 2;
                    }
                    menu(ip);
                } else if ((int)ctrl==80) {
                    ip++;
                    if (ip>2) {
                        ip=1;
                    }
                    menu(ip);
                } else if ((int)ctrl==13) {
                    break;
                } else if ((int)ctrl==-32) {
                    
                
                } else {
                    printf("\n\nUse arrow keys to control the pointer\n");
                }
            }
        }

        cout<<"\n\n\n";
        if (ip==1) {
            system("cls");
            single_player();
        } else if (ip==2) {
            system("cls");
            multi_player();
        }
    }
};

int main() {
    TTT a;
    getchar();
    return 0;
}