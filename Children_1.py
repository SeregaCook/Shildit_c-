import random
import cowsay

# Компьютер загадывает число от 1 до 20
secret_number = random.randint(1, 20)
attempts = 0
guessed = False

cowsay.daemon("Я загадал число от 1 до 20! Угадай его, если сможешь!")

# Цикл продолжается, пока число не угадано
while not guessed:
    user_guess = int(input("Введи твой вариант: "))
    attempts += 1  # Прибавляем 1 к попыткам

    if user_guess == secret_number:
        cowsay.cow(f"ПОБЕДА! Ты угадал число {secret_number} за {attempts} попыток!")
        guessed = True  # Выходим из цикла
    elif user_guess < secret_number:
        print("Загаданное число БОЛЬШЕ! Попробуй еще раз.")
    else:
        print("Загаданное число МЕНЬШЕ! Попробуй еще раз.")