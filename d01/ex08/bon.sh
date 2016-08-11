#!/bin/sh
ldapsearch -Q 'sn=*bon*' sn | grep sn: -c