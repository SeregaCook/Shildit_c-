#!/bin/bash
echo "Как тебя зовут?"
read name

echo "Сколько тебе лет?"
read age

echo "Приятно познакомится $name! , тебе сейчас $age лет и я изучаю linux $HOSTNAME."

if [ $age -ge 18 ]; then
    echo "Ты взрослый!"
else
    echo "ты учишься в коледже это круто!"
fi