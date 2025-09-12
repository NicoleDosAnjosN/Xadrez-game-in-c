#include <stdio.h>

#define SIZE 8   


void displayBoard() {
    printf("\n   A B C D E F G H\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d  ", i+1); 
        for (int j = 0; j < SIZE; j++) {
            printf(". "); 
        }
        printf("\n");
    }
}

void printMove(int x, int y) {
    char col = 'A' + y;  
    int row = x + 1; 
    printf("%c%d\n", col, row);
}

void moveRook(int x, int y) {
    for (int i = 0; i < SIZE; i++) {
        if (i != x) printMove(i, y); 
        if (i != y) printMove(x, i);
    }
}

void moveBishop(int x, int y) {
    for (int i = 1; i < SIZE; i++) {
        if (x+i < SIZE && y+i < SIZE) printMove(x+i, y+i);  
        if (x-i >= 0 && y-i >= 0) printMove(x-i, y-i);    
        if (x+i < SIZE && y-i >= 0) printMove(x+i, y-i);  
        if (x-i >= 0 && y+i < SIZE) printMove(x-i, y+i); 
    }
}

void moveQueen(int x, int y) {
    moveRook(x, y);   
    moveBishop(x, y); 
}

void moveKnight(int x, int y) {
    int moves[8][2] = {
        {2,1}, {1,2}, {-1,2}, {-2,1},
        {-2,-1}, {-1,-2}, {1,-2}, {2,-1}
    };
    for (int i = 0; i < 8; i++) {
        int nx = x + moves[i][0];
        int ny = y + moves[i][1];
        if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
            printMove(nx, ny);
        }
    }
}

void moveKing(int x, int y) {
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue; 
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
                printMove(nx, ny);
            }
        }
    }
}

int main() {
    displayBoard();

    int option;
    do {
        printf("\nChoose a piece to move:\n");
        printf("1 - Rook (Torre)\n2 - Bishop (Bispo)\n3 - Queen (Rainha)\n4 - Knight (Cavalo)\n5 - King (Rei)\n0 - Exit (Sair)\n");
        scanf("%d", &option);

        if (option != 0) {
            char col;
            int row;
            printf("Enter the starting position (example D4): "); 
            scanf(" %c%d", &col, &row);

            int x = row - 1;      
            int y = col - 'A'; 

            switch(option) {
                case 1: moveRook(x, y); break;
                case 2: moveBishop(x, y); break;
                case 3: moveQueen(x, y); break;
                case 4: moveKnight(x, y); break;
                case 5: moveKing(x, y); break;
                default: printf("Invalid option!\n"); 
            }
        }
    } while (option != 0);

    return 0;
}
