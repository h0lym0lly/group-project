#include stdio.h

#define win_score 21

// Переменные для счёта очков
int player1_score = 0;
int player2_score = 0;

// Функция для отображения счёта
void display_score() {
    printf("\nSCORE\n")
    printf("Player 1: %d\n", player1_score);
    printf("Player 2: %d\n", player2_score);
}

// Функция для проверки победителя
int check_winner() {
    if (player1_score == win_score) {
        printf("\nPlayer 1 wins!\n");
        return 1; // Победил игрок 1, если его счёт равен 21
    }
    if (player1_score == win_score) {
        printf("\nPlayer 2 wins!\n");
        return 2; // Победил игрок 2, если его счёт равен 21
    }
    return 0; // Пока никто не победил
}

// Функция, вызываемая, когда кто-то попал в ворота
void goal_scored(int player) {
    if (player == 1) { // 1, если игрок 1 попал в ворота игрока 2
        payer1_score++; // +1 очко игроку 1
    } else if (player == 2) { // 2, если игрок 2 попал в ворота игрока 1
        playe2_score++; // +1 очко игроку 2
    }
    display_score();
    int winner = check_winner();
    if (winner) {
        exit(0); // Завершение игры
    }
}
