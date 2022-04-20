//Gustavo de Araujo Ramos Rodrigues - TIA: 32088531
//Heitor Ce Sun Lin - TIA: 31930451  

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ADDKEY 123

int main(){
    int idMem;  //Id segmento de memória
    int * mem;  //Endereço do segmento acoplado
    int tamanho = 4;    //Tamanho para uso de um inteiro no segmento (int 2 - 4)
    char *caminho = "/";
    
    //Cria processo pai, pega o id do segmento de memoria compartilhado do filho
    idMem = shmget(ftok(caminho, ADDKEY), tamanho, IPC_CREAT|IPC_EXCL|0640);
    if ( idMem == -1 ){
        perror("Falha ao criar");
        exit(1);
    }
    //Recebe um endereço, no contexto de memoria do programa, para o segmento
    mem = shmat(idMem, 0, 0);
    if ( mem == (int*)-1 ){
        perror("Falha ao acoplar");
        exit(1);
    }
    
    *mem = 1;
    
    printf("Valor inicial:");
    printf("%d\n",*mem);
    //Cria e espera o filho
    pid_t pid;
    pid = fork();
    wait(NULL);
    if (pid == 0){
        //Acresce de 2 e imprime o novo valor, ademais a PID do programa
        *mem = *mem + 2;
        printf("Variavel compartilhada filho:");
        printf("%d\n",*mem);

    }
    else{
        //Multiplica por 4 o valor compartilhado ademais a imprimir tal resultado
        *mem = *mem * 4;
        printf("Variavel compartilhada pai:");
        printf("%d\n",*mem);

    }

    return 0;
}