#!/bin/bash

read -p 'Ingrese el primer numero: ' num1
read -p 'Ingrese el primer numero: ' num2
total=$(($num1 - $num2))
echo $total
