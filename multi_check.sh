!#/bin/bash
echo = "Проверяем скрипты в папке абсолютно все"
for file in *.sh; do
    echo "___"
    echo "Найден фаил $file"
    if [ -x "$file" ]; then
        echo "Статус можно запускать"
    else
        echo "Статус нужно дать права (chmod +x)"
    fi
done