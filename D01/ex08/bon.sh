ldapsearch -Q "uid=*bon*" | grep uid: | wc -l | sed 's/ //g'
