# run_tests.sh
# chmod +x run_tests.sh
#!/bin/bash

# Setzen Sie den Exit-Code auf 0 (Erfolg)
exit_code=0

# Kompilieren der Programme
make

# Führen Sie jedes Testprogramm aus, das nicht 'main' ist
for test in $(ls | grep -v main); do
    if [[ -x "$test" && -f "$test" ]]; then
        echo "Running $test..."
        ./$test
        # Aktualisieren Sie den Exit-Code, falls ein Test fehlschlägt
        if [ $? -ne 0 ]; then
            echo "$test Programm ist mit einem Fehler beendet."
            exit_code=1
        fi
    fi
done

# Beenden Sie das Skript mit dem entsprechenden Exit-Code
exit $exit_code
