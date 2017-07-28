#include "Collection.cpp"
//#include "Console.h"
class Console{
	public:
		static void Clear();
		static char ReadKey();
		static char ReadLine();
		static void Write(char word[]);
		static void WriteLine(char word[]);
};
void Console::Clear(){
	system("cls");
}

char Console::ReadKey(){
	char userSendKey=' ';
	scanf("%c",&userSendKey,1);
	return userSendKey;
}
char Console::ReadLine(){
	char userSendKey;
	scanf("%s",&userSendKey);
	return userSendKey;
}
void Console::Write(char word[]){
	printf("%s",word);
}
void Console::WriteLine(char word[]){
	Console::Write(word);
	char _word[]="\n\r";
	Console::Write(_word);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Collection<double> _collection=Collection<double>();
	
	char userSendKey='1';
	while(true/*(userSendKey!='q' && userSendKey!='Q')*/){
		printf("Collection'a ekli olan elemen sayisi: ");
    	printf("%d \n\r",_collection.Count);
    	Console::WriteLine("Islem tipini seciniz");
		Console::WriteLine("i -> ekle");
		Console::WriteLine("d -> sil");
		Console::WriteLine("l -> listele");
		Console::WriteLine("q -> cikis");
		userSendKey=Console::ReadKey();
		Console::Clear();
		if(userSendKey=='i' || userSendKey=='Ý'){
			_collection.GetList();
			Console::WriteLine("------- Kayit Ekleme --------");
			Console::Write("Kayit degeriniz giriniz >> ");
			double value=0;
			scanf("%d",&value);
			_collection.Add(value);
		} 
		else if(userSendKey=='d' || userSendKey=='D'){
			_collection.GetList();
			Console::WriteLine("------- Kayit Silme ---------");
			Console::Write("Silmek istediginiz kayit degerini giriniz >> ");
			double value=0;
			scanf("%d",&value);
			_collection.Remove(value);
		}
		else if(userSendKey=='l' || userSendKey=='L'){
			_collection.GetList();	
			Console::WriteLine("Listeden cikmak için bir tusa basiniz.");
			double value=0;
			scanf("%d",&value);
		}
		else if(userSendKey=='q' || userSendKey=='Q'){
			break;
		}
		Console::Clear();
	}
	Console::WriteLine("Basarili bir sekilde cikis yaptiniz bye bye");
	return 0;
}
