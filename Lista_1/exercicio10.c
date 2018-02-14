#include <stdio.h>

float converterPolegadasEmCentimetros(float valorMedido);

float converterCentimentrosEmPolegadas(float valorMedido);

float converterFahrenheitEmCelsius(float valorMedido);

float converterCelsiusEmFahrenheit(float valorMedido);

int main(){
    printf("EXERCICIO 10 \n");
    float valorMedido;

    printf("\nDigite um numero: \t");
    scanf("%f", &valorMedido);

    float centimetros = converterPolegadasEmCentimetros(valorMedido);
    float polegadas = converterCentimentrosEmPolegadas(valorMedido);
    float celsius = converterFahrenheitEmCelsius(valorMedido);
    float fahrenheit = converterCelsiusEmFahrenheit(valorMedido);

    printf("\n %f polegadas = %f centimentros", valorMedido, centimetros);
    printf("\n %f centimentos = %f polegadas", valorMedido, polegadas);
    printf("\n %f fahrenheit = %f celsius", valorMedido, celsius);
    printf("\n %f celsius = %f fahrenheit", valorMedido, fahrenheit);

    return 0;
}

float converterPolegadasEmCentimetros(float valorMedido){
    return valorMedido * 2.4;
}

float converterCentimentrosEmPolegadas(float valorMedido){
    return valorMedido / 2.4;
}

float converterCelsiusEmFahrenheit(float valorMedido){
    return (valorMedido - 32) / 1.8;
}

float converterFahrenheitEmCelsius(float valorMedido){
    return (valorMedido * 1.8) - 32;
}
