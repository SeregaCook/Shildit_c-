import cowsay

# 1. Вывести обычную корову
cowsay.cow("Привет, мир!")

# 2. Вывести пингвина Tux (символ Linux)
cowsay.tux("Привет из Debian!")

# 3. Вывести дракона
cowsay.dragon("Готов писать код!")

# 4. Посмотреть список всех встроенных персонажей
print("\nДоступные персонажи:")
print(cowsay.char_names)