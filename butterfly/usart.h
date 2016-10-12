#ifndef UART_H_
#define UART_H_

// mt: Define the following to enable and use
// the transmitter:
// #define WITH_TRANSMIT

#ifdef UDR0
#define UBRRH UBRR0H
#define UBRRL UBRR0L
#define UDR UDR0
#define U2X U2X0

#define UDRIE UDRIE0
#define UMSEL UMSEL0
#define UPM0 UPM00
#define USBS USBS0
#define UCPOL UCPOL0

#define UCSRA UCSR0A
#define UDRE UDRE0
#define RXC RXC0

#define UCSRB UCSR0B
#define RXEN RXEN0
#define TXEN TXEN0
#define RXCIE RXCIE0

#define UCSRC UCSR0C
#define URSEL
#define UCSZ0 UCSZ00
#define UCSZ1 UCSZ01
#define UCSRC_SELECT 0
#else
#define UCSRC_SELECT (1 << URSEL)
#endif

void USART_Init(unsigned int baudrate);
char Usart_Rx(void);
#ifdef WITH_TRANSMIT
void Usart_Tx(char);
#endif

#endif
