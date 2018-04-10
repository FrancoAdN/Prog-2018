    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    char tablero[9]={'1','2','3','4','5','6','7','8','9'};
    char jugadaUno='0';
    int aux;
    int modoDeJuego=0;
    int go=1,i=0;
    int turno=1;
    void main(){



        printf("BIENVENIDO AL TA-TE-TI\n");
        printf(" 1. Modo 2 jugadores\n");
        printf(" 2. Modo jugador vs. pc\n");
        printf(" 3. Salir del juego\n");
        fflush(stdin);
        scanf("%d",&modoDeJuego);
        switch(modoDeJuego){
            case 1:
                do{
                system("cls");
                imprimirTablero();
                jugada();
                verificar();
                }while(go==1);
                break;
            case 2:
                dificultadBaja();
                break;
            case 3:
                break;

        }







    }
    void imprimirTablero(){
        printf("%c | %c | %c \n" ,tablero[0] ,tablero[1], tablero[2]);
        printf("--+---+---\n");
        printf("%c | %c | %c \n" ,tablero[3] ,tablero[4], tablero[5]);
        printf("--+---+---\n");
        printf("%c | %c | %c \n" ,tablero[6] ,tablero[7], tablero[8]);
    }
    void jugada(){
     if(turno==1){
        printf("Jugador 1 \n");
        printf("Ingrese la jugada\n");
        fflush(stdin);
        scanf("%c" ,&jugadaUno);
        for(i=0; i<9;i++){
            if(tablero[i]== jugadaUno){
                tablero[i]='X';
                turno=2;
            }

        }

     }else{
        printf("Jugador 2 \n");
        printf("Ingrese la jugada\n");
        fflush(stdin);
        scanf("%c" ,&jugadaUno);
        for(i=0; i<9;i++){
            if(tablero[i]== jugadaUno){
                tablero[i]='O';
                turno=1;
            }
        }

     }
    }

    void verificar(){


        if(tablero[0]== tablero[1] && tablero[1]==tablero[2] || tablero[3]==tablero[4] && tablero[4]== tablero[5]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        }else if(tablero[6]==tablero[7]&&tablero[7]==tablero[8]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        }
        if(tablero[0]==tablero[3]&& tablero[3]== tablero[6]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        }else if(tablero[1]==tablero[4]&& tablero[4]== tablero[7]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        }else if(tablero[2]==tablero[5]&& tablero[5]== tablero[8]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        }
        if(tablero[0]== tablero[4]&& tablero[4]==tablero[8]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        }else if(tablero[2]== tablero[4]&& tablero[4]==tablero[6]){
            go=2;
            system("cls");
            imprimirTablero();
            if(turno==1){
                turno=2;
            }else{
                turno=1;
            }
            printf("Gano el jugador %d\n",turno);
        } else if((tablero[0]=='X' || tablero[0]== 'O') && (tablero[1]=='X' || tablero[1]== 'O') && (tablero[2]=='X' || tablero[2]== 'O') && (tablero[3]=='X' || tablero[3]== 'O') && (tablero[4]=='X' || tablero[4]== 'O') && (tablero[5]=='X' || tablero[5]== 'O') && (tablero[6]=='X' || tablero[6]== 'O') && (tablero[7]=='X' || tablero[7]== 'O') && (tablero[8]=='X' || tablero[8]== 'O') ) {
            go=2;
            system("cls");
            imprimirTablero();
            printf("Empate");
        }
    }





    void dificultadBaja(){
        do{
            system("cls");
            imprimirTablero();
            if(turno==1){
                printf("Jugador 1\n");
                printf("Ingrese la jugada\n");
                fflush(stdin);
                scanf("%c",&jugadaUno);
                for(i=0;i<9;i++){
                    if(tablero[i]== jugadaUno){
                        tablero[i]='X';
                        turno=2;
                    }
                }
            }else{
                srand(time(NULL));
                aux= 1 + rand () % ((9+1)-1);
                jugadaUno= '0' +aux;
                for(i=0;i<9;i++){
                    if(tablero[i]==jugadaUno){
                        tablero[i]= 'O';
                        turno=1;
                    }
                }
            }

            verificar();


        }while(go==1);
    }


