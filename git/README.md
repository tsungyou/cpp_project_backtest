Git: Version Control System

Centralized/ Distributed - Git; Mercurial

What is git BASH?
BASH stands for(is an acronym for Bourne Again Shell), an emulation
for terminals of Linux and Unix

git config => configuration (配置)
git config --global user.name "Jimmy Lee"
git config --global user.email p37497277p@gmail.com

git config -- global core.editor "code --wait"
git config --global -e

end of line:
Carriage Return vs. Line Feed 
git config --global core.autocrlf true  (Windows)
git config --global core.autocrlf input (MacOS)

git config --help/ -h
space for next page, q for quit

posh-git /Zsh for UI in git

mkdir moon 
cd moon

***git init

echo hello > file1.txt (Linux Command) ()

git add file1.txt, file2.txt
git add *txt => all files with txt extension
git add . => entire directory recursively, be careful with the mess

warning: LF will be replaced by CRLF the next time Git touches it

"""
echo world >>(append) file1.txt
echo "message to be added to the fie" >> (append) ifle1.txt
"""

git commit -a -m "fix the bug"
got commit -am "fix the bug for all"

#remove 
git rm file1.txt
(for unix terminal) rm file1.txt

#check files at staging area(middle of the graph)
git ls-files

#rename or move
git mv test1.txt main.js


git add . 
git commit -m "message to be added"
git push 