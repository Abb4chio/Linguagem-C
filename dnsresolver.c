#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>


void asci(void);

int main(int argc, char *argv[]){

        asci();

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



void asci(void)
{
  printf(" ____  _   _ ____    ____            _                             \n");
    printf("|  _ \\| \\ | / ___|  |  _ \\  ___  ___| |_ _ __ ___  _   _  ___ _ __ \n");
    printf("| | | |  \\| \\___ \\  | | | |/ _ \\/ __| __| '__/ _ \\| | | |/ _ \\ '__|\n");
    printf("| |_| | |\\  |___) | | |_| |  __/\\__ \\ |_| | | (_) | |_| |  __/ |   \n");
    printf("|____/|_| \\_|____/  |____/ \\___||___/\\__|_|  \\___/ \\__, |\\___|_|   \n");
    printf("                                                   |___/           \n");
    printf("https://linkedin.com/in/pedro-henrique-gaspar-ribeiro/ ----- https://pedrohenriquegaspar321@gmail.com \n")
    printf("https://github.com/Abb4chio")

}
