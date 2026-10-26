export ZDOTDIR="$HOME"
[[ -f "$HOME/.zshrc" ]] && source "$HOME/.zshrc"
unalias g++ 2>/dev/null
function g++ {
    /opt/homebrew/bin/g++-16 -std=c++23 "$@"
}
