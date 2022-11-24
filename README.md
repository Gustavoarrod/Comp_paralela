# P2 - PARTE II

Integrante: Gustavo de Araujo Ramos Rodrigues
TIA: 32088531

## Como executar:

Abra o arquivo index.html em um navegador. Depois, nos botões Escolher Arquivo abra os arquivos que estão na pasta instâncias no arquivo ZIP. No primeiro botão de Escolher Arquivo coloque o arquivo airports.dat e no segundo botão coloque o routes.dat. Depois disso é só clicar em Carregar grafo para gerar o grafo e em cosseno para gerar o valor em cosseno. 
Você pode usar as duas barras de rolagem do lado esquerdo do botão do cosseno para filtrar o resultado do grafo e do cosseno.

## Explicação da aplicação:

O código consiste em gerar um grafo e o cos(x) das rotas dos aeroportos assim criando uma facilidade para a aviação aérea ao colocar seus aviões no ar.
Para o grafo usei o O VivaGraphJS que foi projetado para ser extensível e suportar diferentes mecanismos de renderização e algoritmos de layout.
Já o cosseno foi implementado no arquivo index.html uma função chamada calcCosseno que faz isso.

Obs: Ao gerar o grafico ele vai ficar muito grande e bagunçado mas isso é normal pois foi usado muitos aeroportos e rotas nos arquivos da pasta instâncias.
