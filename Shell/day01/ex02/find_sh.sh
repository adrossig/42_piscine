find . -name "*.sh" -print |xargs -n 1 basename | cut -d "." -f 1
