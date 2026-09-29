# Сначала установи библиотеку, если её нет:
# pip install python-docx

import docx
from docx.shared import Pt, RGBColor, Inches
from docx.enum.text import WD_ALIGN_PARAGRAPH

doc = docx.Document()

# Настройка полей
sections = doc.sections
for section in sections:
    section.top_margin = Inches(0.8)
    section.bottom_margin = Inches(0.8)
    section.left_margin = Inches(0.8)
    section.right_margin = Inches(0.8)

# Главный заголовок
title = doc.add_paragraph()
run = title.add_run("⚡ Методы в Python: Полное руководство")
run.font.size = Pt(22)
run.font.bold = True
run.font.color.rgb = RGBColor(0, 51, 102)
title.alignment = WD_ALIGN_PARAGRAPH.CENTER

subtitle = doc.add_paragraph()
run_sub = subtitle.add_run("Шпаргалка и справочник по встроенным методам строк, списков и словарей\n")
run_sub.font.size = Pt(12)
run_sub.font.italic = True
run_sub.font.color.rgb = RGBColor(100, 100, 100)
subtitle.alignment = WD_ALIGN_PARAGRAPH.CENTER

# Функция для добавления заголовков разделов
def add_section_header(text):
    h = doc.add_paragraph()
    r = h.add_run(text)
    r.font.size = Pt(16)
    r.font.bold = True
    r.font.color.rgb = RGBColor(0, 102, 204)
    return h

# Функция для добавления блоков кода
def add_code_block(code_text):
    p = doc.add_paragraph()
    p.paragraph_format.left_indent = Inches(0.3)
    p.paragraph_format.space_before = Pt(4)
    p.paragraph_format.space_after = Pt(4)
    r = p.add_run(code_text)
    r.font.name = 'Consolas'
    r.font.size = Pt(10)
    r.font.color.rgb = RGBColor(34, 139, 34)

# Раздел 1: Теория
add_section_header("1. Что такое метод и чем он отличается от функции?")
p = doc.add_paragraph()
p.add_run("В Python всё является объектом.\n").bold = True
p.add_run("• Функция (print(), len()) — это отдельная команда, в которую передаются данные.\n")
p.add_run("• Метод — это встроенное действие конкретного типа данных. Вызывается всегда через точку: ")
r_rule = p.add_run("объект.метод(аргументы)")
r_rule.bold = True

# Раздел 2: Строки
add_section_header("2. Методы строк (str)")
doc.add_paragraph("Строки неизменяемы. Любой метод строки возвращает НОВУЮ строку.\n")

doc.add_paragraph("Изменение регистра:", style='List Bullet')
add_code_block('text = "python hero"\nprint(text.upper())       # "PYTHON HERO"\nprint(text.capitalize())  # "Python hero"')

doc.add_paragraph("Очистка и замена:", style='List Bullet')
add_code_block('user_input = "   дракон  "\nclean = user_input.strip()  # "дракон"\n\nphrase = "Злой зомби"\nprint(phrase.replace("Злой", "Добрый"))  # "Добрый зомби"')

doc.add_paragraph("Проверки (возвращают True / False):", style='List Bullet')
add_code_block('age = "18"\nprint(age.isdigit())  # True\n\nfilename = "quest.py"\nprint(filename.endswith(".py"))  # True')

# Раздел 3: Списки
add_section_header("3. Методы списков (list)")
doc.add_paragraph("Списки изменяемы. Большинство методов меняют сам список прямо в памяти.\n")

doc.add_paragraph("Добавление и удаление:", style='List Bullet')
add_code_block('inventory = ["Меч", "Щит"]\ninventory.append("Зелье")   # ["Меч", "Щит", "Зелье"]\ninventory.pop(0)            # Удалит первый элемент ("Меч")')

doc.add_paragraph("Сортировка и поиск:", style='List Bullet')
add_code_block('scores = [150, 40, 500, 20]\nscores.sort(reverse=True)   # [500, 150, 40, 20]\n\ncoins = ["gold", "silver", "gold"]\nprint(coins.count("gold"))   # 2')

# Раздел 4: Словари
add_section_header("4. Методы словарей (dict)")
doc.add_paragraph("Хранят данные в формате «ключ: значение».\n")
add_code_block('player = {"name": "Артур", "level": 5}\n\n# Безопасное получение без ошибок:\nmana = player.get("mana", 0)  # Вернет 0, если ключа нет')

# Сохранение
doc.save("Python_Methods_Guide.docx")
print("Файл 'Python_Methods_Guide.docx' успешно создан!")