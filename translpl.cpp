#ifndef PLCPP
#define PLCPP

#ifdef FULLTRANSLATE

#else
	#define pustka void
	#define naturalna unsigned
	#define calkowita int
	#define rzeczywista float
	#define podwojna_rzeczywista double
	#define duza long
	#define krotka short
	#define logiczna bool
	#define znak char

	// alignas
	// alignof
	#define automatyczna auto
	// bitandbitand
	// bitorbitor
	#define przerwij break
	#define przypadek case
	#define lap catch
	#define klasa class
	#define stala const
	// const_cast
	#define stale_wyrazenie constexpr
	#define kontynuuj continue
	// decltype
	#define domyslna default
	#define usun delete
	#define rob do
	#define dynamicznie_rzuc dynamic_cast
	#define w_przeciwnym_wypadku else
	#define numeruj enum
	// explicit
	// extern
	#define falsz false
	#define dla for
	#define przyjaciel friend
	#define idz_do goto
	#define jezeli if
	#define w_linii inline
	// mutuable
	#define przestrzen_nazw namespace
	#define nowy new
	// noexcept
	#define pusty_wskaznik nullptr
	#define prywatne private
	#define chroniony protected
	#define publiczny public
	#define rejestruj register
	#define interpretuj reinterpret_cast
	#define zwroc return
	#define znakowana signed
	#define rozmiar sizeof
	#define statyczna static
	// static_cast
	// static_assert
	#define struktura struct
	#define przelacz switch
	#define szablon template
	#define to this
	#define lokalny_watek thread_local
	#define rzuc throw
	#define prawda true
	#define probuj try
	#define definiuj_typ typedef
	// typeid
	#define nazwij_typ typename
	#define unia union
	#define uzyj using
	#define wirtualna virtual
	// volatile
	#define dopoki while
	#ifdef SHORTS
		#define pust void
	#endif // SHORTS
#endif // FULLTRANSLATE

#endif // PLCPP
