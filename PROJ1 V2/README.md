>>> Como compilar o programa na plataforma disponibilizada

    Acesse a pasta Comp_paralela/PROJ1 V2.
    Para compilar o programa, utilize o gcc. 

        $ gcc -g -Wall -fopenmp -o PROJ1 V2_critical PROJ1 V2_critical.c
        $ gcc -g -Wall -fopenmp -o PROJ1 V2_reduction PROJ1 V2_reduction.c

>>> Como executar o programa

    $ ./PROJ1 V2_critical 5
    $ ./PROJ1 V2_reduction 5
    
>>> Como comprovar que os resultados propostos foram alcançados
    
    PROJ1 V2_critical:
    
    Hello from thread 0 of 5 -> sum = 21.994
    Hello from thread 4 of 5 -> sum = inf
    Hello from thread 3 of 5 -> sum = 0.776
    Hello from thread 1 of 5 -> sum = 0.693
    Hello from thread 2 of 5 -> sum = inf

    solução para ln(32088531) é gual a: inf
    
    
    PROJ1 V2_reduction:
    
    solução para ln(32088531) é gual a: 1.00

    
