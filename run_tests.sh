#!/bin/bash

echo "Beginne Testprozess..."

# Initialisiere Exit-Code
exit_code=0

# Kompilieren der Programme, wenn nötig
if ! make; then
    echo "Kompilierung fehlgeschlagen."
    exit 1
fi

# Liste der Testprogramme
tests=("rechteck_berechnung_v1Debug" "rechteck_berechnung_v2Debug")

# Eingabe für jeden Test - Achte darauf, dass die Eingaben den Anforderungen entsprechen
inputs=("2.0\n3.0" "2.0\n3.0") # Beide Eingaben als positive Dezimalzahlen

# Durchlaufe alle Testprogramme
for i in "${!tests[@]}"; do
    test=${tests[$i]}
    input=${inputs[$i]}
    echo "Starte Test für: $test..."
    # Ausgabe der Eingabe zur Überprüfung
    echo -e "Eingabe, die an das Programm weitergeleitet wird:\n$input"

    # Verwende printf statt echo -e für konsistentere Handhabung der Eingaben
    printf "$input" | ./$test

    # Überprüfung des Exit-Codes des zuletzt ausgeführten Befehls
    if [ $? -eq 0 ]; then
        echo "$test erfolgreich abgeschlossen."
    else
        echo "FEHLER in $test."
        exit_code=1
    fi
    echo "-----------------------------------"
done

# Gib den Gesamt-Exit-Code zurück
if [ $exit_code -eq 0 ]; then
    echo "Alle Tests erfolgreich abgeschlossen."
else
    echo "Einige Tests sind fehlgeschlagen."
fi

exit $exit_code
