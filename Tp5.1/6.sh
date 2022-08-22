#!/bin/bash
read -p 'Ingrese un numero: ' num
n=$(($num % 2))
echo $n
cont=0
if [[ $n -eq $con ]] ;
then
  echo $num es par
else
  echo $num  es impar
 fi
