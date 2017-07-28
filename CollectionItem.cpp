#include "CollectionItem.h"

template<class T>
CollectionItem<T>::CollectionItem(){
	this->nextPointer=0;
	this->tValue=0;
}

template<class T>
CollectionItem<T>::CollectionItem(T item){
	this->nextPointer=0;
	this->SetValue(item);
}

template<class T>
T CollectionItem<T>::SetValue(T item){
	this->tValue=item;
	this->nextPointer=0;
	return this->GetValue();
}

template<class T>
T CollectionItem<T>::SetNextPointer(T item){
	this->nextPointer=item;
	return item;
}

template<class T>
T CollectionItem<T>::GetValue(){
	return this->tValue;
}
/*
template<class T>
CollectionItem<T> CollectionItem<T>::GetNextCollectionItem(){
	return this->nextPointer;
}
*/
