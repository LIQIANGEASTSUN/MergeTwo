local config = [====[{
"1":{"id":"1","difficultyType":1,"chessboard":"32001","requirement":0.0,"requirementValue":"","itemNumber":["1030103"]},
"2":{"id":"2","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["1"],"itemNumber":["1030108"]},
"3":{"id":"3","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["2"],"itemNumber":["1030104"]},
"4":{"id":"4","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["3"],"itemNumber":["1030106"]},
"5":{"id":"5","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040105"],"itemNumber":["1030203"]},
"6":{"id":"6","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["5"],"itemNumber":["1030204"]},
"7":{"id":"7","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["6"],"itemNumber":["1030203","1030203"]},
"8":{"id":"8","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["6"],"itemNumber":["1030205"]},
"9":{"id":"9","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["6"],"itemNumber":["1030108"]},
"10":{"id":"10","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["6"],"itemNumber":["1030105","1030203"]},
"11":{"id":"11","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040204"],"itemNumber":["1030304","1030304"]},
"12":{"id":"12","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040204"],"itemNumber":["1030105","1030305"]},
"13":{"id":"13","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["11"],"itemNumber":["1030305","1030303"]},
"14":{"id":"14","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040205"],"itemNumber":["1030403"]},
"15":{"id":"15","difficultyType":1,"chessboard":"32001","requirement":1,"requirementValue":["14"],"itemNumber":["1030106","1030204"]},
"16":{"id":"16","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040505"],"itemNumber":["1030702","1030703"]},
"17":{"id":"17","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040406"],"itemNumber":["1030602"]},
"18":{"id":"18","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040805"],"itemNumber":["1030803"]},
"19":{"id":"19","difficultyType":1,"chessboard":"32001","requirement":2,"requirementValue":["1040705"],"itemNumber":["1030903"]}
}]====]
return table.deserialize(config)