find . -type f -name "*.sh" -exec bash -c 'basename "$1" .sh' _ '{}' \;
