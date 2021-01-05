#!/bin/bash
CHAR_MAX=255
CHAR_MIN=0
INT_MAX=2147483647
INT_MIN=-2147483648
LONG_MAX=9223372036854775807
LONG_MIN=-9223372036854775808

make


printf "\n\e[34;40;5m==============Normal===============\e[m\n\n\n\n\n"

printf "\e[35;1m./convert 'a' \e[m\n\n\n" ; ./convert 'a' ; printf "\n"
printf "\e[35;1m./convert '' \e[m\n\n\n" ;./convert '' ; printf "\n"
printf "\e[35;1m./convert 0 \e[m\n\n\n" ;./convert 0 ; printf "\n"

printf "\e[35;1m./convert 44 \e[m\n\n\n" ;./convert 44 ; printf "\n"

printf "\e[35;1m./convert 255 \e[m\n\n\n" ;./convert 255 ; printf "\n"

printf "\e[35;1m./convert 500 \e[m\n\n\n" ;./convert 500 ; printf "\n"



printf "\n\e[34;40;5m==============Minus===============\e[m\n\n\n\n\n"


printf "\e[35;1m./convert -0 \e[m\n\n\n" ; ./convert -0 ; printf "\n"
printf "\e[35;1m./convert  -255 \e[m\n\n\n" ; ./convert -255 ; printf "\n"

printf "\n\e[34;40;5m==============float point===============\e[m\n\n\n\n\n"


printf "\e[35;1m./convert 42.0f \e[m\n\n\n" ; ./convert 42.0f ; printf "\n"
printf "\e[35;1m./convert 42.0 \e[m\n\n\n" ; ./convert 42.0 ; printf "\n"

printf "\e[35;1m./convert -42.0f \e[m\n\n\n" ; ./convert -42.0f ; printf "\n"
printf "\e[35;1m./convert -42.0 \e[m\n\n\n" ; ./convert -42.0 ; printf "\n"


printf "\e[35;1m./convert 42.00f  \e[m\n\n\n" ; ./convert 42.00f ; printf "\n"

printf "\e[35;1m./convert 42f  \e[m\n\n" ; ./convert 42f ; printf "\n"

printf "\e[35;1m./convert 42.f \e[m\n\n" ; ./convert 42.f ; printf "\n"

printf "\e[35;1m./convert 42.fddddddddddddddd \e[m\n\n" ; ./convert 42.fdddddddddddddd ; printf "\n"

printf "\e[35;1m./convert 42.0d \e[m\n\n" ; ./convert 42.0d ; printf "\n"

printf "\e[35;1m./convert 42.\e[m\n\n" ; ./convert 42. ; printf "\n"


printf "\e[35;1m./convert 42.0f000 \e[m\n\n" ; ./convert 42.0f000 ; printf "\n"

printf "\n\e[34;40;5m==============MAX===============\e[m\n\n\n\n"

printf "\e[35;1m./convert CHAR_MAX\e[m\n\n" ; ./convert $CHAR_MAX ; printf "\n"
printf "\e[35;1m./convert CHAR_MIN\e[m\n\n" ; ./convert $CHAR_MIN ; printf "\n"
printf "\e[35;1m./convert INT_MAX\e[m\n\n" ; ./convert $INT_MAX ; printf "\n"
printf "\e[35;1m./convert INT_MIN\e[m\n\n" ; ./convert $INT_MIN ; printf "\n"
printf "\e[35;1m./convert LONG_MAX\e[m\n\n" ; ./convert $LONG_MAX ; printf "\n"
printf "\e[35;1m./convert LONG_MIN\e[m\n\n" ; ./convert $LONG_MIN ; printf "\n"


printf "\n\e[34;40;5m==============Others===============\e[m\n\n\n\n"

printf "\e[35;1m./convert ddd\e[m\n\n" ; ./convert ddd ;printf "\n"
printf "\e[35;1m./convert nan\e[m\n\n" ; ./convert nan ;printf "\n"
printf "\e[35;1m./convert nanf\e[m\n\n" ; ./convert nanf ;printf "\n"
printf "\e[35;1m./convert inff\e[m\n\n" ; ./convert inff ;printf "\n"
printf "\e[35;1m./convert -inff\e[m\n\n" ; ./convert -inff ;printf "\n"
printf "\e[35;1m./convert inf\e[m\n\n" ; ./convert inf ;printf "\n"
printf "\e[35;1m./convert -inf\e[m\n\n" ; ./convert -inf ;printf "\n"

printf "\e[35;1m./convert .\e[m\n\n" ; ./convert . ; printf "\n"
printf "\e[35;1m./convert .f\e[m\n\n" ; ./convert .f ; printf "\n"

printf "\e[35;1m./convert f\e[m\n\n" ; ./convert f ; printf "\n"
