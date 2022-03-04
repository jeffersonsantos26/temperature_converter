# temperature_converter


```$ ./conversor -h ```
```
-----------------------------------------------------------------
                Conversor de Temperatura em C
-----------------------------------------------------------------
Uso: conversor [unidade] [temperatura]

Unidade:
  -c || --celsius               Converter Celsius para Fahrenheit e Kelvin
  -f || --fahrenheit            Converter Fahrenheit para Celsius e Kelvin
  -k || --kelvin                Converter Kelvin para Celsius e Fahrenheit
  -h || --help                  Mostra tela de ajuda
```

#

#### 1.  
```
git clone https://github.com/jeffersonsantos26/temperature_converter.git
```

### 2.
```
cd temperature_converter/
```

### 3.
```
gcc conversor.c -o conversor
```
### 4.
```
./conversor [option] [temperature]
```
#
### EXE.:
```
$ ./conversor -f 37
```
```
-----------------------------------------------------------------
                Conversor de Temperatura em C
-----------------------------------------------------------------
Temperatura informada   || Temperaturas convertidas
------------------------||---------------------------------------
37.000 Graus Fahrenheit || 2.77778 ºC
                        || 275.928 K
-----------------------------------------------------------------
```