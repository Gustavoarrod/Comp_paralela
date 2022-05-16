# Controle de acesso à região crítica

Para o controle de acesso utilizamos:

#pragma omp critical

*sol += result;

Serve para evitar a condição de corrida que acontece quando há possibilidade de resultados imprevísiveis ocorrer na execução de duas ou mais threads simultaneamente. Assim, somente uma thread poderá realizar seu bloco de instruções, logo nenhuma outra thread entrará em situação crítica também.
