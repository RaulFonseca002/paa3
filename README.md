# paa3
 
o codigo ultiliza do algoritimo guloso e do algoritimo de permutacao para executar e avaliar as solucoes achadas por ambos
observa-se tambem o tempo de resposta de cada um desses

o algortimo guloso e iplementado ultilizado a esturutra de dados "set" que permite encontrar diretamente o valor da moeda que e 
menor que o valor buscado

em sequencia se obtem quantas vezes essa moeda cabe no valor total, subtrai do total e busca a proxima moeda enquanto anota na string de retorno qual moeda e a quantidade ultilizada

o algoritimo guloso cria a permutacao de todas as combinacoes possiveis ao transformar o set em um vetor de elementos contendo a quantidade maxima de elementos iguais que somam o mais proximo ao valor que se deve encontrar 

sendo assim, caso busquemos 10 e temos a moeda 1, o vetor possui 10 elementos de valor 1, caso exista a moeda de valor 2, cinco dessas existiram no vetor

assim podemos ultilizar do algoritimo de permutacao padrao de c++ 

durante a validacao, e somado os valores do vetor ate que sejam maiores ou iguais ao valor buscado, caso o valor somado seja igual ao buscado, e essa solucao use menos moedas que a melhor solucao encontrada ate o momento, essa solucao e salva 

ao final, se transforma esse vetor final de resposta numa string de formato igual ao ultilizado no algoritimo guloso