#include <stdio.h>
#include <string.h>

float temperature;

void display_help(){
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

void converter_fahrenheit(float temp){
  long double result_celsius;
  long double result_kelvin;

  result_celsius = (temp - 32) * 5/9;
  result_kelvin = (temp - 32) * 5/9 + 273.15;
  
  printf("-----------------------------------------------------------------\n");
	printf("\t\tConversor de Temperatura em C\n");
  printf("-----------------------------------------------------------------\n");
  printf("Temperatura informada   || Temperaturas convertidas\n");
  printf("------------------------||---------------------------------------\n");
  printf("%.3f Graus Fahrenheit || %Lg ºC\n", temp, result_celsius);
  printf("\t\t\t|| %Lg K\n", result_kelvin);
  printf("-----------------------------------------------------------------\n");
}

void converter_kelvin(float temp){
  long double result_celsius;
  long double result_fahrenheit;

  result_celsius = temp - 273.15;
  result_fahrenheit = (temp - 273.15) * 9/5 + 32;

  printf("-----------------------------------------------------------------\n");
	printf("\t\tConversor de Temperatura em C\n");
  printf("-----------------------------------------------------------------\n");
  printf("Temperatura informada   || Temperaturas convertidas\n");
  printf("------------------------||---------------------------------------\n");
  printf("%.3f Graus Kelvin \t|| %Lg ºC\n", temp, result_celsius);
  printf("\t\t\t|| %Lg F\n", result_fahrenheit);
  printf("-----------------------------------------------------------------\n");
}

void converter_celsius(float temp){
  long double result_kelvin;
  long double result_fahrenheit;

  result_kelvin = temp + 273.15;
  result_fahrenheit = (temp * 9/5) + 32;

  printf("-----------------------------------------------------------------\n");
	printf("\t\tConversor de Temperatura em C\n");
  printf("-----------------------------------------------------------------\n");
  printf("Temperatura informada   || Temperaturas convertidas\n");
  printf("------------------------||---------------------------------------\n");
  printf("%.3f Graus Celsius \t|| %Lg K\n", temp, result_kelvin);
  printf("\t\t\t|| %Lg F\n", result_fahrenheit);
  printf("-----------------------------------------------------------------\n");

}


int main(int argc, char *argv[]){

    if( argv[1] == NULL ){
      printf("Ausência de argumentos no parâmetro\n");
      printf("\nTente --help ou -h para ter uma ajuda\n");
      return 1;
    }
    if (0 == strcmp(argv[1] ,"-h") || 0 == strcmp(argv[1] ,"--help")){
      display_help();
      return 0;
    } 

    if( argv[2] == NULL ){
      printf("Ausência de argumentos no segundo parâmetro\n");
      printf("\nTente --help ou -h para ter uma ajuda\n");

    }else if (0 == strcmp(argv[1] ,"-f") || 0 == strcmp(argv[1] ,"--fahrenheit")){
      sscanf(argv[2],"%f",&temperature);
      converter_fahrenheit(temperature);

    }else if (0 == strcmp(argv[1] ,"-k") || 0 == strcmp(argv[1] ,"--kelvin")){
      sscanf(argv[2],"%f",&temperature);
      converter_kelvin(temperature);

    }else if (0 == strcmp(argv[1] ,"-c") || 0 == strcmp(argv[1] ,"--celsius")){
      sscanf(argv[2],"%f",&temperature);
      converter_celsius(temperature);
    }

}