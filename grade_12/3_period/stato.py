def h2o(state):
    match state:
        case "solido":
            return "l'H2O e' ghiaccio"
        case "liquido":
            return "l'H20 e' acqua"
        case "gassoso":
            return "l'H2O e' vapore acqueo"
        case _:
            return "input non valido"
