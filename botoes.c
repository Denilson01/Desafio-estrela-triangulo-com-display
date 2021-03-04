/*
 * File:   botoes.c
 * Author: 20185087
 *
 * Created on 26 de Fevereiro de 2021, 14:59
 */


#include <xc.h>

void botoes_init(void)
{
 PORTD = 1;
}

int botao_incrementar( void )
{
    return(PORTDbits.RD3);
}

int botao_decrementar( void )
{
    return(PORTDbits.RD2);
}