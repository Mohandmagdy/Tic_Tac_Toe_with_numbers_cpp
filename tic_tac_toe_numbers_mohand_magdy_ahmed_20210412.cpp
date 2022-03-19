#include <iostream>

using namespace std;

//starter variables
int game_running = 1;
int board[3][3] = {100, 100, 100, 100, 100, 100, 100, 100, 100};
int player = 1;
int sum = 0;
int pos;
int inp;
// function that prints the structure of the board
void printboard(){
    system("cls");
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            cout << board[i][j] << " | ";


        }
        cout << endl;
        cout << "----------------";
        cout << endl;
    }
}

// function that takes the input from the player and check if its correct or false
void playerinput(){

     if (player == 1){
            cout << "first player's turn\nPlease enter an odd number from 0 to 9 you didn't pick before and the position of it\n";
            cout << "number: ";
            cin >> inp;
        if(inp % 2 == 0 ){
            cout << "Wrong number!!\n";
            playerinput();
        }
     }
     else{
            cout << "second player's turn\nPlease enter an even number from 0 to 9 you didn't pick before and the position of it\n";
            cout << "number: ";
            cin >> inp;
        if(inp % 2 != 0){
            cout << "Wrong number!!\n";
            playerinput();
        }
     }


}
// function that makes the position input fits in the board and checks if the position is available or not
void position(){
    cout << "position: ";
    cin >> pos;
        if(pos > 0 && pos <= 9){
            if(pos == 1){
                if (board[0][0] == 100)
                    board[0][0] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 2){
                if (board[0][1] == 100)
                    board[0][1] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 3){
                if (board[0][2] == 100)
                    board[0][2] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 4){
                if (board[1][0] == 100)
                    board[1][0] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 5){
                if(board[1][1] == 100)
                    board[1][1] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 6){
                if (board[1][2] == 100)
                    board[1][2] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 7){
                if (board[2][0] == 100)
                    board[2][0] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 8){
                if(board[2][1] == 100)
                    board[2][1] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            else if(pos == 9){
                if (board[2][2] == 100)
                    board[2][2] = inp;
                else{
                    cout << "Already used position!!\n";
                    position();
                }
            }
            sum += 1;
        }
        else{
            cout << "Wrong position!!\n";
            position();
        }
}

// function that checks all the three rows and if the win condition found it congratulates the winner and end the game
void checkhorizontal(){
    if(board[0][0] + board[0][1] + board[0][2] == 15){
        if (player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
        else if (player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
    else if(board[1][0] + board[1][1] + board[1][2] == 15){
        if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
        else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
    else if(board[2][0] + board[2][1] + board[2][2] == 15){
        if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
        else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
}

// function that checks all the three columns and if the win condition found it congratulates the winner and end the game
void checkvertical(){
    if(board[0][0] + board[1][0] + board[2][0] == 15){
        if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
         else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
    else if(board[0][1] + board[1][1] + board[2][1] == 15){
         if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
        else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
    else if(board[0][2] + board[1][2] + board[2][2] == 15){
        if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
        else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
}

// function that checks the two diagonals and if the win condition found it congratulates the winner and end the game
void checkdiagonal(){
    if(board[0][0] + board[1][1] + board[2][2] == 15){
        if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
        else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
    else if(board[0][2] + board[1][1] + board[2][0] == 15){
        if(player == 1){
            cout << "The winner is the " << player << "st player\n";
            game_running = 0;
        }
         else if(player == 2){
            cout << "The winner is the " << player << "nd player\n";
            game_running = 0;
        }
    }
}

// function that changes the player after the current one played and win conditions didn't happen
void switchplayer(){
    if(player == 1){
        player = 2;
    }
    else{
        player = 1;
    }
}

int main(){
    player = 1;
    cout << "Hello Users :), welcome to our game\n\n";
    printboard();
    while (game_running){
        playerinput();
        position();
        printboard();
        checkhorizontal();
        checkvertical();
        checkdiagonal();

        // if all 9 places are full and no win one then it's draw
        if(sum == 9 && game_running == 1){
            cout << "It's a Draw!!";
            game_running = 0;
        }
        switchplayer();
    }

    return 0;
}
