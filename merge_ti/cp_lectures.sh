#!/bin/bash

cp -r ../information_theory/semester_4/stix2font ./
cp ../computability/semester_4/pythonhighlight.tex ./

for file in 1 2 3 4 5 6 7
do
        cp ../complexity_theory/semester_3/lec_$file.tex ./compt_lec_$file.tex
        cp ../computability/semester_4/lec_$file.tex ./comp_lec_$file.tex
        cp ../information_theory/semester_4/lec_$file.tex ./lec_$file.tex
done
cp ../computability/semester_4/lec_5M.tex ./comp_lec_5M.tex

for img in $(ls ../complexity_theory/semester_3/figures)
do
        cp ../complexity_theory/semester_3/figures/$img ./figures
done

for img in $(ls ../computability/semester_4/figures)
do
        cp ../computability/semester_4/figures/$img ./figures
done

mkdir imgs
for img in $(ls ../computability/semester_4/imgs)
do
        cp ../computability/semester_4/imgs/$img ./imgs
done

mkdir figures
for img in $(ls ../information_theory/semester_4/figures)
do
        cp ../information_theory/semester_4/figures/$img ./figures
done

xelatex master.tex && makeindex master.idx && xelatex master.tex

rm -rf figures
rm -rf imgs

for file in 1 2 3 4 5 6 7
do
        rm ./compt_lec_$file.tex
        rm ./comp_lec_$file.tex
        rm ./lec_$file.tex
done
rm ./comp_lec_5M.tex
