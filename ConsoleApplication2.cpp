void main(void)
{
	double a, b, c;                         // Zarezerwuj pamięć na 3 zmienne typu rzeczywistego: a, b oraz c
	cout << "Podaj a: ";                    // Poproś użytkownika o podanie wartości zmiennej a.
	cin >> a;                               // pobierz wartość zmiennej a z klawiatury
	cout << "Podaj b: ";                    // poproś użytkownika o podanie wartości zmiennej b
	cin >> b;                               // Pobierz wartość zmiennej z klawiatury
	c = (a + b) / 2;                        // Oblicz wartość wyrażenia: (a + b) / 2
	cout << "Wynik to: " << c << endl;      // Wypisz wynik w zmiennej c.



		double d, f, g, h;                                        // 1. Zarezerwuj pamięć na 4 zmienne typu rzeczywistego: d, f, g oraz h.
		cout << "Podaj d: ";                                      // 2. Poproś użytkownika o podanie wartości zmiennej d.
		cin >> d;                                                 // 3. Pobierz wartość zmiennej d z klawiatury.
		cout << "Podaj f: ";                                      // 4. Poproś użytkownika o podanie wartości zmiennej f.
		cin >> f;                                                 // 5. Pobierz wartość zmiennej f z klawiatury.
		g = (d + f) / (d - f);                                    // 6. Oblicz wartość wyrażenia: (𝒅+𝒇)/(𝒅−𝒇), i wynik umieść w zmiennej g.
		h = d * d + (f / g);                                      // 7. Oblicz wartość wyrażenia: 𝒅^𝟐 + (𝒇/𝒈) , i wynik zapisz do zmiennej h.
		cout << "Wynik g: " << g <<  ",wynik h: " << h << endl;   // 8. Wypisz zmienne: g i h, w następujący sposób: Wynik g : <tu wartość g>, wynik h : <tu wartość h>