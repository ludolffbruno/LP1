# include < stdio.h >

int  main ( void ) {

    int num, soma = 0 ;
    printf ( " Escolha um número: " );
    scanf ( " % d " , & num);    

    while (num> 0 ) {
        soma = (soma + num);
        num = (num - 1 );
    }
    printf ( " Somou: % d  \n " , soma);
 
    return  0 ;
}


