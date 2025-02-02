#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){

        if (argc != 2){
        printf("Modo de uso: %s <host>\n", argv[0]);
        return 0;
        }else{

                struct hostent *alvo = gethostbyname(argv[1]);

                if (alvo == NULL){

                printf("Ocorreu um erro ao tentar adiquirir o ip \n");

                }else{

                        printf("IP: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));
        }
        }
}
