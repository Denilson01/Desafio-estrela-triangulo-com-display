/*
 * File:   botoes_contatores.c
 * Author: 20185087
 *
 * Created on 3 de Março de 2021, 16:34
 */


#include <xc.h>

void botoesk_init(void)
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
    
    PORTDbits.RD3 = 0;
    PORTDbits.RD2 = 0;
        
}

int s1(void)
{
    return(PORTDbits.RD3);
}

int s0(void)
{
    return(PORTDbits.RD2);
}