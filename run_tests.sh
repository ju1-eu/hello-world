# run_tests.sh
# chmod +x run_tests.sh
#!/bin/bash

# Funktion, um ein einzelnes Testprogramm auszuführen
run_test() {
    local test=$1
    local input=$2
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
}

echo "Beginne Testprozess..."

# Initialisiere Exit-Code
exit_code=0

# Kompilieren der Programme, wenn nötig
if ! make; then
    echo "Kompilierung fehlgeschlagen."
    exit 1
fi

# Deklaration und Initialisierung des assoziativen Arrays für Testfälle
declare -A tests=(
    ["rechteck_berechnung_v1"]="2\n3"
    ["rechteck_berechnung_v2"]="2\n3"
)

# Durchlaufe alle Testprogramme
for test in "${!tests[@]}"; do
    input=${tests[$test]}
    # Überprüfe, ob das Testprogramm ausführbar und vorhanden ist
    if [[ -x "$test" && -f "$test" ]]; then
        run_test $test "$input"
    else
        echo "Testprogramm $test nicht gefunden oder nicht ausführbar."
        exit_code=1
    fi
done

# Gib den Gesamt-Exit-Code zurück
if [ $exit_code -eq 0 ]; then
    echo "Alle Tests erfolgreich abgeschlossen."
else
    echo "Einige Tests sind fehlgeschlagen."
fi

exit $exit_code
