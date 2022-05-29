#include <syslib.h>

unsigned int strlen(const char *s){
    unsigned int count = 0;
    while(*s!='\0')
    {
        count++;
        s++;
    }
    return count;
}

unsigned int scanf(char *s,unsigned int size){
    int i=0;
    while(i < size){
        char c =getChar();
        if('\n' == c){
            s[i] = '\0';
            return i;
        }
        putChar(c);
        s[i] = c;
        i++;
    }
    return i;
}

void getTime(){
    sys_time();
}

char getChar(){
    char c;
    sys_read(0,&c,1);
    return c;
}

void putChar(char c){
    sys_write(1,&c,1);
}

void puts(const char* s){
    while(*s != '\0'){
        putChar(*s);
        s++;
    }
}

//https://code.woboq.org/userspace/glibc/string/strcmp.c.html
int strcmp (const char *p1, const char *p2){
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}

//solucion momentanea para interpretar comandos
int strcmpBrazil (const char *p1, const char *p2){
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0' || c2 == '\0')
        return 0;;
    }
  while (c1 == c2);
  return c1 - c2;
}


    
void help(){
    const char* helpstring = 
    "HELP                 Provides help information for commands.\n"
	"CLEAR                Clears the console.\n"
	"DIVIDEBYZERO         Command to verify the operation of the exception routine \"Divide by zero\"\n"
    "INVALIDOPCODE        Command to verify the operation of the exception routine \"Invalid Opcode\"\n"
	"INFOREG              Prints on screen the value of all registers.\n"
	"PRINTMEM             Receives as argument a pointer and performs a memory dump of 32 bytes from the\n"
	"                     address received as an argument.\n"
	"TIME                 Command to display the system day and time.\n";
    "PRIMENUMBS           Dispalys prime numbers starting from 1.\n"
    "FIBONACCINUMBS       Dispalys fibonacci series numbers.\n"
    "COMAND1 | COMAND2    The \"|\" operand allows the execution of multimple comands at the same time.\n";
    puts(helpstring);
}

