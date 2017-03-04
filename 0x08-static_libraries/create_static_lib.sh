#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c && ar -rcs *c liball.a . *c
