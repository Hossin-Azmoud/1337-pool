set -xe
norminette --use-gitignore | cat > err
cat err | head
