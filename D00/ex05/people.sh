#/bin/bash
#People Search - Z - Reverse Alphabetical

ldapsearch -LLL -Q  uid="z*" cn | grep cn | sort -r | sed 's/cn: //'
