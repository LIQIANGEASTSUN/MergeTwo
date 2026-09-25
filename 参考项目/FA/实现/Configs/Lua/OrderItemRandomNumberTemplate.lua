local config = [====[{
"1":{"ID":"1","difficultyType":1,"chessboard":"32001","Typeid":2,"Taskid":[999],"itemNumber":[[1,35],[2,55],[3,10]]},
"2":{"ID":"2","difficultyType":2,"chessboard":"32001","Typeid":2,"Taskid":[999],"itemNumber":[[1,50],[2,40],[3,10]]},
"3":{"ID":"3","difficultyType":3,"chessboard":"32001","Typeid":2,"Taskid":[999],"itemNumber":[[1,50],[2,40],[3,10]]},
"4":{"ID":"4","difficultyType":4,"chessboard":"32001","Typeid":2,"Taskid":[999],"itemNumber":[[1,50],[2,40],[3,10]]},
"5":{"ID":"5","difficultyType":5,"chessboard":"32001","Typeid":2,"Taskid":[999],"itemNumber":[[1,50],[2,30],[3,10]]}
}]====]
return table.deserialize(config)