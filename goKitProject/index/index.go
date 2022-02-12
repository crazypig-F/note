package index

type Book struct {}

func (b Book) GetBookName() []string {
	return []string{"golang 程序设计", "python 程序设计"}
}

func (b Book) GetNum(s string) int32 {
	if s == "golang 程序设计"{
		return 1
	}else{
		return 2
	}
}



