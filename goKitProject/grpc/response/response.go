package response

type NameRes struct {
	NameList []string `json:"nameList"`
}

type NumRes struct{
	Num int32 `json:"num"`
}
