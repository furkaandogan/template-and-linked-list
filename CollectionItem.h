template<class T>
class CollectionItem{
	private:
		//T tValue;
		
	public:
		T tValue;
		CollectionItem<T> *nextPointer;
		CollectionItem();
		CollectionItem(T item);
		T SetValue(T item);
		T SetNextPointer(T item);
		T GetValue();
		//CollectionItem<T> GetNextCollectionItem();
};

