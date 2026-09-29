#!/bin/bash
filename="hello.sh"
if [ -f $filename ]; then
    echo "Фаил $filename найден давай его запустим"
    ./$filename
else
    echo "Фаил не найден , $filename файла не существует"
fi

