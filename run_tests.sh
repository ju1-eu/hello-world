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

# Eingabe für jeden Test
inputs=("2\n3" "2\n3")

# Durchlaufe alle Testprogramme
for i in "${!tests[@]}"; do
    test=${tests[$i]}
    input=${inputs[$i]}
    echo "Starte Test für: $test..."
    if [[ -n "$input" ]]; then
        echo "Eingabe: $input"
        echo -e "$input" | ./$test
    else
        ./$test
    fi
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

