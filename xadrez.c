// ===================== NÍVEL NOVATO =====================
// código do bispo, torre, rainha

#include <stdio.h>

int main() {
    // Constantes para quantidade de movimentos
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    int i;

    // --- Movimento do Bispo (Diagonal Superior Direita) ---
    // Usando for e combinações de "Cima + Direita"
    printf("Movimento do Bispo:\n");
    for(i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // --- Movimento da Torre (Direita) ---
    // Usando while
    printf("\nMovimento da Torre:\n");
    i = 0;
    while(i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    // --- Movimento da Rainha (Esquerda) ---
    // Usando do-while
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < RAINHA_MOV);

    return 0;
}

// ===================== NÍVEL AVENTUREIRO =====================
// código do cavalo em L (loops aninhados)

#include <stdio.h>

int main() {
    int i, j;

    printf("Movimento do Cavalo:\n");

    // Usando for (para baixo)
    for(i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Usando while (para esquerda)
    j = 0;
    while(j < 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}



// ===================== NÍVEL MESTRE =====================
// recursão + cavalo com break/continue



#include <stdio.h>

// --- Funções Recursivas ---

void moverBispo(int passos) {
    if(passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if(passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if(passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Constantes de movimentos
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(BISPO_MOV);

    printf("\nMovimento da Torre (recursivo):\n");
    moverTorre(TORRE_MOV);

    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainha(RAINHA_MOV);

    // Movimento do Cavalo (1 vez em L para cima e direita)
    printf("\nMovimento do Cavalo:\n");

    for(int i = 0, j = 0; i < 2 || j < 1; ) {
        if(i < 2) {
            printf("Cima\n");
            i++;
            continue; // força repetir o loop sem passar ao j
        }
        if(j < 1) {
            printf("Direita\n");
            j++;
        }
        if(i == 2 && j == 1) break; // encerra o loop
    }

    return 0;
}
