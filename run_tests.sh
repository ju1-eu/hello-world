#!/bin/zsh

# Funktion, um ein einzelnes Testprogramm auszuführen
run_test() {
    local test=$1
    local input=$2
    echo "Running $test..."
    if [[ -n "$input" ]]; then
        echo -e "$input" | ./$test
    else
        ./$test
    fi
    if [ $? -ne 0 ]; then
        echo "$test Programm ist mit einem Fehler beendet."
        return 1
    else
        echo "$test erfolgreich abgeschlossen."
        return 0
    fi
}

# Hauptlogik
exit_code=0

# Kompilieren der Programme
make || exit 1

# Deklaration und Initialisierung des assoziativen Arrays
typeset -A tests
tests=(
    [rechteck_berechnung_v1]="2\n3"
    [rechteck_berechnung_v2]="2\n3"
)

# Automatische Erkennung und Ausführung von Testprogrammen
for test in ${(k)tests}; do
    input=${tests[$test]}
    if [[ -x "$test" && -f "$test" ]]; then
        run_test $test "$input" || exit_code=1
    fi
done

exit $exit_code

