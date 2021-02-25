//(@Integratore: Alex Spina)

#ifndef DIZENTRY_H
#define DIZENTRY_H


template<typename K, typename V> class Entry {

public:
	Entry(K, V);
	Entry();
	V get_value();
	K get_key();
	void set_value(V&);
	void set_key(K);

	Entry(const Entry<K, V> &);
	Entry<K, V>& operator=(const Entry<K, V> &);

private:

	K chiave;
	V valore;
};

template<typename K, typename V> Entry<K, V>::Entry() {

}

template<typename K, typename V> Entry<K, V>::Entry(const Entry<K, V> & a) {

	chiave = a.chiave;
	valore = a.valore;
}

template<typename K, typename V> Entry<K, V>& Entry<K, V>::operator=(const Entry<K, V> & a) {

	chiave = a.chiave;
	valore = a.valore;
	return *this;
}


template<typename K, typename V> Entry<K, V>::Entry(K k, V v) {

	chiave = k;
	valore = v;
}

template<typename K, typename V> K Entry<K, V>::get_key() {

	return chiave;
}

template<typename K, typename V> V Entry<K, V>::get_value() {

	return valore;
}

template<typename K, typename V> void Entry<K, V>::set_key(K k) {

	chiave = k;
}

template<typename K, typename V> void Entry<K, V>::set_value(V &v) {

	valore = v;
}

#endif // _DIZENTRY_H

