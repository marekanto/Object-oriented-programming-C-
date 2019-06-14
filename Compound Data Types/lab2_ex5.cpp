 #include <iostream>
 #include <fstream>
 #include <string>
 using namespace std;
struct car{
    string make;
    string model;
    int age;
    int doors;
    union{
    int myprice;
    int theirprice;
    };
};
int main()
{
    car* array=NULL;
    int size;
    cout<<" How many elements?[2,10]"<<endl;
    cin>>size;
	while(size>10 || size<2){
		cout<<"wrong input. Specify size again: "<<endl;
    	cin>>size;
	}
	array=new car[size];
	string filename[10];
	ofstream outputfile[size];
	cout<<"initialize your array: "<<endl;
	for(int i=0;i<size;i++){
        cout<<i<<" element"<<endl;
        cout<<"enter name of the file to which you want to save content: ";
		cin>>filename[i];
		outputfile[i].open(filename[i].c_str());
		cout<<"make "<<i<<". ";
		cin>>array[i].make;
		outputfile[i]<<array[i].make<<endl;
		cout<<"model "<<i<<". ";
		cin>>array[i].model;
		outputfile[i]<<array[i].model<<endl;
		cout<<"age "<<i<<". ";
		cin>>array[i].age;
		outputfile[i]<<array[i].age<<endl;
		cout<<"doors "<<i<<". ";
		cin>>array[i].doors;
		outputfile[i]<<array[i].doors<<endl;
		cout<<"myprice "<<i<<". ";
		cin>>array[i].myprice;
		cout<<"theirprice "<<i<<". ";
		cin>>array[i].theirprice;
		outputfile[i]<<array[i].theirprice<<endl;
		outputfile[i].close();
		}
	return 0;
}
