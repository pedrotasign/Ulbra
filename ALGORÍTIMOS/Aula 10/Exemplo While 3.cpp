#include <iostream>; 
#include <stdio.h>;
#include <conio.h>;



int main() {
    float altura, media;
    char gen, mediam, mediaf;
    int contador;

    contador = 0;

    printf("Cálculo de alunos e alunas e média de suas alturas\n");
    while (contador < 3) {
        printf("Digite a altura e o sexo do aluno\n");
        scanf("%f", &altura);
        media = media + altura;
        scanf("%s", &gen);
        if (gen = 'm') {
            mediam = mediam + gen;
        } else {
            mediaf = mediaf + gen;
        }
        contador++;


    }

    printf("A média de altura dos alunos é: \n%f", media);
    printf("Temos %s alunos homens e %s alunos mulheres\n", mediam, mediaf);


    return 0;
}
