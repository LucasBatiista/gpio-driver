cmd_/home/lucas/gpio-driver/gpio-driver.mod := printf '%s\n'   gpio-driver.o | awk '!x[$$0]++ { print("/home/lucas/gpio-driver/"$$0) }' > /home/lucas/gpio-driver/gpio-driver.mod
