let faturamento = {
    AC: 19849.53,
    AL: 19849.53,
    AP: 19849.53, 
    AM: 19849.53,
    BA: 19849.53,
    CE: 19849.53,
    DF: 19849.53, 
    ES: 27165.48,
    GO: 19849.53,
    MA: 19849.53,
    MT: 19849.53,
    MS: 19849.53, 
    MG: 29229.88,
    PA: 19849.53,
    PB: 19849.53,
    PR: 19849.53,
    PE: 19849.53,
    PI: 19849.53,
    RJ: 36678.66,
    RN: 19849.53,
    RS: 19849.53,
    RO: 19849.53,
    RR: 19849.53,
    SC: 19849.53,
    SP: 67836.43,
    SE: 19849.53,
    TO: 19849.53
}

let somaTotal = 0

for(const propriedade in faturamento){
    somaTotal += faturamento[propriedade]
}

console.log("Percentual de representação que cada estado teve dentro do valor total mensal da distribuidora...")

for(const propriedade in faturamento){
    console.log(propriedade + " " + percentualRepresentacao(faturamento[propriedade]) + "%")
}

function percentualRepresentacao(valorEstado){
    let resposta = ((valorEstado/somaTotal)*100)
    return resposta.toFixed(2)
}