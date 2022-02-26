#include <stdio.h>
#include <string.h>

float temperature;

void help(){
	printf("-----------------------------------------------------------------\n");
	printf("\t\tConversor de Temperatura em C\n");
	printf("-----------------------------------------------------------------\n");
	printf("Uso: conversor [unidade] [temperatura]\n\n");

	printf("Unidade:\n");
	printf("  -c || --celsius\t\tConverter Celsius para Fahrenheit e Kelvin\n");
	printf("  -f || --fahrenheit\t\tConverter Fahrenheit para Celsius e Kelvin\n");
	printf("  -k || --kelvin\t\tConverter Kelvin para Celsius e Fahrenheit\n");
	printf("  -h || --help\t\t\tMostra tela de ajuda\n");
}

void celsius(){
}

void fahrenheit(){
}

void kelvin(){
}


int main(int argc, char *argv[]){

    if( argv[1] == NULL ){
      printf("Ausência de argumentos no parâmetro\n");
      return 1;
    }
    if (0 == strcmp(argv[1] ,"-h") || 0 == strcmp(argv[1] ,"--help")){
      help();
      return 0;
    } 

    if( argv[2] == NULL ){
      printf("Ausência de argumentos no parâmetro\n");
    }
    else if (0 == strcmp(argv[1] ,"-f") || 0 == strcmp(argv[1] ,"--fahrenheit")){
      printf("Op fahrenheit\n");
      sscanf(argv[2],"%f",&temperature);
      printf("Temperatura passada: %f f\n", temperature);

    }else if (0 == strcmp(argv[1] ,"-k") || 0 == strcmp(argv[1] ,"--kelvin")){
      printf("Op kelvin");
    }

    else if (0 == strcmp(argv[1] ,"-c") || 0 == strcmp(argv[1] ,"--celsius")){
      printf("Op celsius");
    }

}