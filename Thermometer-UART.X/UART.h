#ifndef UART_H_
#define	UART_H_
//Librera LIB_UART desarrollada por Kalun Lau
//Curso de Microcontroladores
//Universidad Peruana de Ciencias Aplicadas
//Ultima edicion 10/06/2024

//Changelog:
//10/06/2024: Se esta considerando el uso del U1
//como perferico a emplearse en la comunicacion serial.
//La velocidad de comunicacion establecida es 9600
//La frecuencia de trabajo es de 32MHz
//Tener en cuenta que para la recepcion de datos se esta
//empleando interrupciones del USART para recepcion

//Instrucciones para usar la librer�a
//1.Llamar a U1_INIT() para configurar el UART U1
//2.Para la parte de recepcion deberan de habilitar
//la funcion de interrupcion en el codigo principal

#define _XTAL_FREQ 32000000UL

/* Tipo enumerado para seleccionar la velocidad de comunicación UART */
typedef enum {
    BAUD_4800   = 416,  // No va a funcionar
    BAUD_9600   = 207,
    BAUD_19200  = 103,
    BAUD_57600  = 34,
    BAUD_115200 = 16
} UART_Baud_t;

/*Función para inicializar el periférico UART U1
 Opciones:  BAUD_4800,
            BAUD_9600,
            BAUD_19200,
            BAUD_57600,
            BAUD_115200*/
void U1_INIT(UART_Baud_t velocidad);

/*Funcion para enviar un dato de 8 bits*/
void U1_BYTE_SEND(unsigned char dato);

/*Funcion para enviar una cadena de caracteres*/
void U1_STRING_SEND(const char *cadena);

/*Funcion para visualizar una variable de 8 bits en formato decimal*/
void U1_VAR_CHAR(unsigned char numero, unsigned char n_digitos);

/*Funcion para visualizar una variable de 16 bits en formato decimal*/
void U1_VAR_INT(unsigned int numero, unsigned char n_digitos, unsigned char punto);

/*Funcion para irse una linea abajo en el terminal*/
void U1_NEWLINE(void);

#endif	/* UART_H_ */