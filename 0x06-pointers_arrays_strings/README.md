my teacher always told me not to point, I never really got the point since when I grew up I learned about pointers...
http://www.pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A/**%0A%20*%20_strchr%20-%20copies%20mem%20from%20src%20to%20dest%0A%20*%20%40s%3A%20string%20to%20search%0A%20*%20%40c%3A%0A%20*%0A%20*%20Return%3A%20null%20if%20not%20found%20and%20pointer%20to%20char%20if%20found%0A%20*/%0Achar%20*_strchr%28char%20*s,%20char%20c%29%0A%7B%0A%09int%20i%20%3D%200%3B%0A%0A%09while%20%28s%5Bi%5D%20!%3D%20'%5C0'%20%26%26%20s%5Bi%5D%20!%3D%20c%29%0A%09%09i%2B%2B%3B%0A%09if%20%28s%5Bi%5D%20%3D%3D%20c%29%0A%09%7B%0A%09%09while%20%28i%20%3E%200%29%0A%09%09%09i--,%20s%2B%2B%3B%0A%09%09return%20%28s%29%3B%0A%09%7D%0A%09else%0A%09%7B%0A%09%09return%20%280%29%3B%0A%09%7D%0A%09return%20%28s%29%3B%0A%7D%0A/**%0A%20*%20_strpbrk%20-%20checks%20if%20s%20has%20accept%20and%20starts%20string%20there%0A%20*%20%40s%3A%20string%20to%20search%0A%20*%20%40accept%3A%20char%20to%20accept%20as%20starting%20point%0A%20*%0A%20*%20Return%3A%20new%20starting%20point%0A%20*/%0Achar%20*_strpbrk%28char%20*s,%20char%20*accept%29%0A%7B%0A%09while%20%28*s%29%0A%09%09if%20%28_strchr%28accept,%20*s%2B%2B%29%29%0A%09%09%09return%20%28--s%29%3B%0A%09return%20%280%29%3B%0A%7D%0A/**%0A%20*%20main%20-%20check%20the%20code%20for%20Holberton%20School%20students.%0A%20*%0A%20*%20Return%3A%20Always%200.%0A%20*/%0Aint%20main%28void%29%0A%7B%0A%20%20%20%20char%20*s%20%3D%20%22hello,%20world%22%3B%0A%20%20%20%20char%20*f%20%3D%20%22world%22%3B%0A%20%20%20%20char%20*t%3B%0A%0A%20%20%20%20t%20%3D%20_strpbrk%28s,%20f%29%3B%0A%20%20%20%20printf%28%22%25s%5Cn%22,%20t%29%3B%0A%20%20%20%20return%20%280%29%3B%0A%7D&cumulative=false&curInstr=66&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D&textReferences=false
lol thats an interesting thing I learned