#include "CollectionItem.cpp"

template<class T>
class Collection{
	private:
		CollectionItem<T> *firstPointer;
	
	public:
		Collection();
		int Count;
		T Add(T item);
		T Remove(T item);
		T Remove(T *item);
		void GetList();	
};
/*
template<class T>
Collection<T>::Collection(){
	this->firstPointer=0x0;
	this->Count=0;
}

/*template<class T>
Collection<T>::Collection(Collection<T> collection){
	this->firstPointer=collection.firstPointer;
	this->Count=collection.Count;
}

template<class T>
T Collection<T>::Add(T item){
	CollectionItem<T> *newCollectionItem=new CollectionItem<T>(item);
	//newCollectionItem.SetValue(item);
	
	CollectionItem<T> *memory=firstPointer;
	if(memory==0x0){
		this->firstPointer=newCollectionItem;
	}else{
		while(memory->nextPointer!=0x0){
			memory=memory->nextPointer;
		}
		//memory->SetNextPointer(newCollectionItem);
		memory->nextPointer=newCollectionItem;
	}
	this->Count++;
	
	return item;
}
template<class T>
T Collection<T>::Remove(T item){
	CollectionItem<T> *memory=this->firstPointer;
	CollectionItem<T> *newMemory=this->firstPointer;
	if(newMemory!=0x0){
		if(memory->nextPointer==0x0 && memory->GetValue()==item){
			delete memory;
			this->Count--;
			this->firstPointer=0x0;
		}
		else{
			if(memory->GetValue()==item){
				this->firstPointer=memory->nextPointer;
				delete memory;
				this->Count--;
			}else{
			
				memory=memory->nextPointer;
				while(memory!=0x0){
					if(memory->GetValue()==item){
          				newMemory->nextPointer=memory->nextPointer;	
          				break;
					}
      				memory=memory->nextPointer;
      				newMemory=newMemory->nextPointer;
				}	
				if(memory!=0){
  					delete memory;
					this->Count--;
			  	}
			}
		}
	}
	return item;
}

template<class T>
void Collection<T>::GetList(){
	int counter=0;
	//CollectionItem<T> firstData=this->firstPointer;
	CollectionItem<T> *memory=this->firstPointer;
	printf("collection items  \n\r");
	printf("----------------- \n\r");
	printf("index       Value \n\r");
	printf("----------------- \n\r");
	while(memory!=0x0){
		printf("%d           %d   \n\r",counter,memory->GetValue());
		memory=memory->nextPointer;
		counter++;
	}
}*/


