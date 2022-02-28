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
	printf("  -h || --help\t\t\tMostra tela de ajuda\n\n");
}

void fahrenheit(float temp){
  long double result_celsius;
  float result_kelvin;
  printf("Temperatura recebida pela função: %.3f f\n", temp);

  result_celsius = (temp - 32) * 5/9;
  result_kelvin = (temp - 32) * 5/9 + 273.15;

  printf("-----------------------------------------------------------------\n");
  printf("Temperatura informada   || Temperaturas convertidas\n");
  printf("------------------------||---------------------------------------\n");
  printf("%.3f Graus Fahrenheit || %Lg ºC\n", temp, result_celsius);
  printf("\t\t\t|| %.3f K\n", result_kelvin);
  printf("-----------------------------------------------------------------\n");
}

// void celsius(float temp){
//   float result;
//   printf("Temperatura recebida pela função: %.3f\n", temp);

// }

// void kelvin(float temp){
//   float result

// }


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
      printf("Ausência de argumentos no segundo parâmetro\n");
    }
    else if (0 == strcmp(argv[1] ,"-f") || 0 == strcmp(argv[1] ,"--fahrenheit")){
      printf("Op fahrenheit\n");
      sscanf(argv[2],"%f",&temperature);
      fahrenheit(temperature);
      printf("Temperatura passada: %.3f f\n", temperature);

    }else if (0 == strcmp(argv[1] ,"-k") || 0 == strcmp(argv[1] ,"--kelvin")){
      printf("Op kelvin\n");
      sscanf(argv[2],"%f",&temperature);
      printf("Temperatura passada: %.3f f\n", temperature);
    }

    else if (0 == strcmp(argv[1] ,"-c") || 0 == strcmp(argv[1] ,"--celsius")){
      printf("Op celsius\n");
      sscanf(argv[2],"%f",&temperature);
      printf("Temperatura passada: %.3f f\n", temperature);
    }

}