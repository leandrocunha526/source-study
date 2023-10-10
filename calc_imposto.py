def calc_imposto(faturamento, taxa):
    return faturamento * taxa

valores = (1000, 0.3)

faturamento, taxa = valores

imposto = calc_imposto(*valores)
print(imposto)
