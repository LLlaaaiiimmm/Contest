

// Box представляет коробку.
type Box struct {
	cat *Cat // Указатель на кота в коробке
}

// Cat представляет кота.
type Cat struct {
	alive bool // Состояние кота (живой или мертвый)
}

// open открывает коробку и возвращает кота.
func (b *Box) open() *Cat {
	if b.cat == nil {
		// Если кота еще нет, создаем нового кота со случайным состоянием
		rand.Seed(time.Now().UnixNano())
		isAlive := rand.Intn(2) == 1
		b.cat = &Cat{alive: isAlive}
	}

	return b.cat
}

// is_alive возвращает true, если кот живой, и false, если кот мертвый.
func (c *Cat) is_alive() bool {
	return c.alive
}
   
   