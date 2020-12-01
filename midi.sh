#!/bin/bash
aseqdump -p "Launchpad" | \
while IFS=" ," read src ev1 ev2 ch label1 data1 label2 data2 rest; do
    case "$ev1 $ev2 $data1" in
        # "Note on 0" ) xdotool type start http://google.com ;;
        "Note on 0" ) xdotool command start http://google.com ;;
        "Note on 48" ) xdotool key ctrl+j ;;
    esac
done
