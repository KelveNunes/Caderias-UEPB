Um diagrama de Classes é usando para descrever a estrutura estática de classes no sistema, permitindo definir os atributos, operações(métodos) e os relacionamentos entre as classes.

apresenta uma visã estática da organização de classes, definindo sua estrutura lógica.

É um dos diagramas mais populares, e serve como base para contrução de outros diagramas de UML.

Basicamente, descrevem o que deve estar presente no sistema modelado.

#Representação de uma classe:

	Nome: Inclui o nome e o esteriótipo de classe (informação sobre a classe)

	Atributos: lista de atributos da classe no formato nome:tipo=valor

	Operações: Lista de métodos da classe no formato métodos(parametros): tipo_retorno

#Visibilidade dos Membros:

	+ Público 
	# Protegido
	- Privado
	~ Pacote
	/ Derivado

#Relacionamentos Entre Classes:

	Uma Relacionamento é uma conexão entre itens. Existe vários tipos de relacionamento possíveis entre classes:

##	Dependência:

		Dependência fraca, usualmente transiente, que ilustra que uma classe usa informações e serviçõs de outra classe em algum momento, dependendo dela. 
			-------->

##	Associação:

		Relacionamento mais forte do que a dependêcia, indica que a classe mantém uma referência a outra classe ao longo do tempo. as associoções podem conectar mais de duas classes. 


##	Agregação:

		Relacionamento mais específico do que a associação, indica que uma classe é um contêiner - assim, quando é destruído as classes continuam existindo.

##	Composisão:

		Variação mais específica da agregação, este elacionamento indica uma dependência do ciclo de vida forte entre as classes, de modo que quando um contêiner é destruido, seu conteudo também o é.

##	Generalização/Especialização:

		Relacionamento entre itens gerais(Super classes / classes-mãe) e tipos mais específicos desses itens(subclasses / classes filhas). Representa a herança entre as classes.

## Associativa:	

		São produzidas quando ocorrem associações com multiplos Muitos(*) em todas as estremidades. No geral, existem atributos de associação que não podem ser armazenados em nenhuma das classes envolvidas.	


	Cada um desses Relacionamentos possui uma representação gráfica específica.

#Boas práticas:
	
	O nome da classe deve ser significativo, descrevendo um aspecto real do sistema;

	os relacionamentos entre os elementos devem ser idetificados antes de criar o diagrama;

	Devem ser esoecificados os atributos e operações de cada classe;

	Sempre que necessário, acrescente anotações para ajudar a definir aspectos das classes ou seus relacionamentos.