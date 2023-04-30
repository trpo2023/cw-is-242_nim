// Обновление выбранной кучки
        switch (heap) {
        case 'A':
        case 'a':
            if (num <= a) {
                a -= num;
            } else {
                printf("Ошибка: в кучке A не хватает спичек.\n");
                continue;
            }
	   break;
        case 'B':
        case 'b':
            if (num <= b) {
                b -= num;
            } else {
                printf("Ошибка: в кучке B не хватает спичек.\n");
                continue;
            }
            break;
	case 'C':
        case 'c':
            if (num <= c) {
                c -= num;
            } else {
                printf("Ошибка: в кучке C не хватает спичек.\n");
                continue;
            }
            break;
