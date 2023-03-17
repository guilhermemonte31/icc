import locale
import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

df = pd.read_excel(
    'https://github.com/diasctiago/dio/blob/main/An%C3%A1lise%20de%20dados%20com%20Python%20e%20Pandas/AdventureWorks.xlsx?raw=true'
)

print(df.head())
#print(df.describe())

#print(df.columns)
#print("\n------------------------------INFO-------------------------------------")
#print(df.info())
#print("\n------------------------------SHAPE------------------------------------")
#print(df.shape)

#procura valores nulos NA
#print("\n--------------------------VALORES NULOS--------------------------------")

#print(df.isna().sum())


#cria nova coluna
#print("----------------------------DIAS DE ENVIO--------------------------------")
df['Dias de Envio'] = df['Data Envio'] - df['Data Venda']

#print(df.describe)

# # Percentual do Lucro bruto da venda
#custo total
#print("----------------------------CUSTO TOTAL--------------------------------")
df['Custo Total'] = df['Custo Unitário'] * df['Quantidade']

df['Lucro Bruto'] = (1 - (df['Custo Total'] / df['Valor Venda'])) * 100
#print(df.describe)
#lucro liquido
#print("---------------------------lucro liquido-------------------------------")
#df['Lucro Liquido'] = (1- (df['Custo total']/(df['Valor Venda'] - df['Valor Desconto'])))*100
#print(df.describe)


#contagem de venda de produto

#print("------------------------contagem de venda---------------------------")
#print(df['Produto'].value_counts())

# # Grafico BloxPot
# # Configurações dos gráficos
#plt.rcParams['figure.figsize'] = (15, 10)
#plt.rcParams['xtick.labelsize'] = 10
#plt.rcParams['ytick.labelsize'] = 10
#plt.rcParams['font.size'] = 15
#plt.rcParams['axes.titlesize'] = 20

# # Identificando outliers nos valores de vendas
#sns.boxplot(x=df['Valor Venda'])
#plt.show()

# Identificando as quantidades dos dias de envio
#x = df['Dias de Envio'].value_counts().values
#y = df['Dias de Envio'].value_counts().index
#sns.barplot(x=x, y=y)
#plt.show()

# # Selecionando apenas as vendas de 2008
df_2008 = df[df["Data Venda"].dt.year == 2008]
# # Selecionando apenas as vendas de 2009
df_2009 = df[df["Data Venda"].dt.year == 2009]
 # Comparativo de lucro bruto por mês
df_2008.groupby(df_2008["Data Venda"].dt.month)[
    "Lucro Bruto"].sum().plot(color='red', label='Ano 2008')
df_2009.groupby(df_2009["Data Venda"].dt.month)[
    "Lucro Bruto"].sum().plot(color='green', label='Ano 2009')
plt.title("Lucro x Mês")
plt.xlabel("Mês")
plt.ylabel("Lucro Bruto")
plt.legend()
plt.show()