# Компиляция
Я использую шрифт `stix2` и `xelatex`. 
Для компиляции в `pdf` достаточно следующей команды:
```bash
$ xelatex master.tex
```

Для обновления индекса и последующего обновления `pdf`-версии:
```bash
$ xelatex master.tex 
$ makeindex master.idx
$ xelatex master.tex
```

