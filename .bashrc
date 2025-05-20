export PS1="\[$(tput setaf 165)\]mal\[$(tput setaf 171)\]@\[$(tput setaf 213)\]42 | \D{%H:%M:%S} | \[$(tput setaf 219)\]\w \[$(tput sgr0)\]$ "
export LS_COLORS="no=92:di=31:ln=35:so=32:pi=33:ex=1;34:bd=34;46:cd=34;43:su=30;41:sg=30;46:tw=30;42:ow=30;43"
export PATH=$PATH:~/shcustom
source ~/.zshrc
gsettings set org.gnome.desktop.interface gtk-enable-primary-paste false

alias py="python3"
alias prep="cd ~/42-projects/prep"
alias q="exit"
alias ls="ls --color=always"
alias lss="ls --color=never"
alias bs="nano ~/.bashrc"
alias gitfix="git branch --set-upstream-to=origin/main main"
alias gitpushfix="git push --set-upstream origin main"
alias ll="clear; ls -l"
alias FLAGS="cc -Wall -Wextra -Werror"
alias goto-remote="cd ~/42-remote"
alias goto-proj="cd ~/42-projects"
alias goto-ext="cd ~/external-projects"
alias ms0="cd ~/42-projects/common-core/ms0"
alias ms1="cd ~/42-projects/common-core/ms1"
alias ms2="cd ~/42-projects/common-core/ms2"
alias ms3="cd ~/42-projects/common-core/ms3"
alias ms4="cd ~/42-projects/common-core/ms4"
alias ms5="cd ~/42-projects/common-core/ms5"
alias ms6="cd ~/42-projects/common-core/ms6"
alias empty-trash="rm -rf ~/.local/share/Trash/*"
alias clrb="rm -rf output build"
alias cflags="cc -Wextra -Wall -Werror"
alias mr="make run"
alias mc="make clean"
alias mfc="make fclean"
alias rld="source ~/.bashrc"
alias valgrind-full="valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --keep-stacktraces=alloc-and-free"

preview-lsc() {
	export LS_COLORS="$1"
	echo "remember to add to bs!"

}

cct() {
	fout=$(echo $1 | sed 's/\.c/\.out/g')
	cc -Wall -Wextra -Werror -g $1 -o $2/$fout
}


alias clra="find . -name 'a.out' -exec rm -rfv {} +"
alias clrinv="find . -name '*MaRV*' -exec rm -rfv {} +"
alias clro="find . -name '*.o' -exec rm -rfv {} +"
alias cg="find . -name '*.git' -exec rm -rfv {} +"
alias clrgit="cg"

n() {
    curr=$(pwd | sed 's#.*/##' | sed 's\ex0\\g' | sed 's\ex\\g')
    next=$((curr+1))
    if ((next > 9)); then
        goto="../ex$next"
     else
        goto="../ex0$next"
    fi
    cd $goto
}
goto() {
    if (($1 <= 9)); then
        cd ../ex0$1
    else
        cd ../ex$1
    fi
}
b() {
    last=$(pwd | sed 's#.*/##' | sed 's\ex0\\g' | sed 's\ex\\g')
    back=$((last-1))
    if ((back > 9)); then
        go="../ex$back"
     else
        go="../ex0$back"
    fi
    cd $go
}
ccs() {
        cc $1
        ./a.out
}
ccsmain() {
    cc $1 ./main.c
    ./a.out
}
ccmain() {
    cc -Wall -Wextra -Werror $1 ./main.c
    ./a.out
}

gimme() {
    for num in $(seq -w 0 $1); do mkdir "ex0$num"; done
}
gimme_ten() {
    for num in $(seq -w 0 $1); do mkdir "ex1$num"; done
}
gimme_twenty() {
    for num in $(seq -w 0 $1); do mkdir "ex2$num"; done
}

gp() {
    curr=$(pwd)
    rm -rf ~/temp
    mkdir ~/temp
    yes | cp -r ~/42-projects/* ~/temp/
    msg=$1;
    if [[ -z "$msg" ]]; then
        msg="automated"
    fi
    cd ~/temp && cg && clra && clrinv # && rm -rf ./evals/ && rm -rf ./piscine-reloaded/ex05/
    yes | cp -rf ~/temp/* ~/42-remote
    rm -f ~/42-remote/.bashrc
    cp -f ~/.bashrc ~/42-remote/.bashrc
    dconf dump /org/gnome/terminal/legacy/profiles:/ > ~/42-remote/profiles.dconf
    cd ~/42-remote
    git add . && git commit -m $msg && gitfix
    git push --force
    rm -rf ~/temp
    cd $curr
}

godown() {
    curr=$(lss -d */ | head -1)
    if [[ -n $curr ]]
    then
	cd $curr
    else
	echo "Nowhere to go from here."
    fi
}

alias .="cd ~"
alias ..="godown"

alias nrm="norminette -R CheckForbiddenSourceHeader"
alias bye="gp && gnome-session-quit --force"
alias logout="gnome-session-quit --force"
