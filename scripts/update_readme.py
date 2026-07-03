from pathlib import Path
import re

# Caminhos do projeto
ROOT = Path(__file__).resolve().parent.parent
README = ROOT / "README.md"

# Pastas que serão exibidas no README
DISPLAY_NAMES = {
    "beecrowd": "Beecrowd",
    "chatgpt": "ChatGPT",
    "ufu": "UFU",
    "codeforces": "Codeforces",
}

rows = []
total = 0

# Percorre todas as pastas da raiz do projeto
for folder in sorted(ROOT.iterdir(), key=lambda p: p.name.lower()):

    # Ignora arquivos
    if not folder.is_dir():
        continue

    # Ignora pastas que não estão na lista
    display_name = DISPLAY_NAMES.get(folder.name.lower())
    if display_name is None:
        continue

    # Conta todos os arquivos .cpp (inclusive em subpastas)
    count = len(list(folder.rglob("*.cpp")))
    total += count

    # Conta quantas pastas existem dentro da origem
    folders = sum(
        1
        for item in folder.iterdir()
        if item.is_dir()
    )

    rows.append(
        f"| **{display_name}** | {count} | {folders} |"
    )

# Monta a tabela
table = [
    "| Origem | Exercícios | Pastas |",
    "|:-------|------------:|-------:|",
]

table.extend(rows)

table.append(f"| **Total** | **{total}** | - |")

table_text = "\n".join(table)

# Atualiza o README
content = README.read_text(encoding="utf-8")

content = re.sub(
    r"<!-- PROGRESS_TABLE -->.*?<!-- /PROGRESS_TABLE -->",
    f"<!-- PROGRESS_TABLE -->\n{table_text}\n<!-- /PROGRESS_TABLE -->",
    content,
    flags=re.DOTALL
)

README.write_text(content, encoding="utf-8")