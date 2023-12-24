#include "Circular_Linked_list.h" // For including the Circular Linked List class
#include <map> // For hashing
using namespace std;
// This function uses hash functions to get
// the flame number
int get_flames_number(string boy, string girl){
	map<char, int> mp_boy, mp_girl;
	int n_boy = boy.length();
	int n_girl = girl.length();
	for(int i=0; i<n_boy; i++){
		mp_boy[boy[i]]++;
	}
	for(int i=0; i<n_girl; i++){
		mp_girl[girl[i]]++;
	}
	for(int i=0; i<n_boy; i++){
		if(mp_girl[boy[i]]!=0)
			mp_girl[boy[i]]--;
	}
	for(int i=0; i<n_girl; i++){
		if(mp_boy[girl[i]]!=0)
			mp_boy[girl[i]]--;
	}
	int flames_number=0;
	for(int i=0; i<n_girl; i++){
		if(mp_girl[girl[i]]!=0){
			flames_number+=mp_girl[girl[i]];
			mp_girl[girl[i]]=0;
		}
	}
	for(int i=0; i<n_boy; i++){
		if(mp_boy[boy[i]]!=0){
			flames_number+=mp_boy[boy[i]];
			mp_boy[boy[i]] = 0;
		}
	}
	return flames_number;
}
// This function is neccessary not mainly to
// Remove spaces but to change uppercase characters
// To lower case so that the get_flame_number doesn't
// Get confused with same letters
string remove_spaces_and_uppercase_to_lowercase(string s){
	string res="";
    int n = s.length();
	for(int i=0; i<n; i++){
		if(s[i]>='A' && s[i]<='Z'){
			res+=(s[i]+32);
		}else if(s[i]>='a' && s[i]<='z'){
			res+=s[i];
		}else{
			continue;
		}
	}
	return res;
}
// This function gives out the final result of the flames
// Uses the Circular Linked List to get the result
void flames(string boy, string girl){
	circularLinkedList c_flames;
	c_flames.insert('F');
	c_flames.insert('L');
	c_flames.insert('A');
	c_flames.insert('M');
	c_flames.insert('E');
	c_flames.insert('S');

	string boy1 = remove_spaces_and_uppercase_to_lowercase(boy);
	string girl1 = remove_spaces_and_uppercase_to_lowercase(girl);

	int flames_number = get_flames_number(boy1, girl1);

	char flames_result = c_flames.flames(flames_number);

	switch(flames_result){
		case 'F':
		{
			cout<<boy<<" and "<<girl<<" are FRIENDS!"<<endl;
			break;
		}
		case 'L':
		{
			cout<<"Roses are red and the sky is blue"<<endl;
			cout<<"It's time to say I love you"<<endl;
			cout<<boy<<" and "<<girl<<" are LOVERS!"<<endl;
			cout<<"Wink-wink ;)"<<endl;
			break;
		}
		case 'A':
		{
			cout<<"Aha! Looks like: "<<endl;
			cout<<boy<<" and "<<girl<<" are ATTRACTED to eachother!"<<endl;
			cout<<"Shush! If I were you would ask him/her out as soon as possible."<<endl;
			break;
		}
		case 'M':
		{
			cout<<"CONGRATULATIONS!!!!!!!!!"<<endl;
			cout<<"Looks like someone is getting married. Who you ask?"<<endl;
			cout<<boy<<" and "<<girl<<" are getting MARRIED!"<<endl;
			cout<<"Non-veg dinner is complusary in reception. Do you understand?"<<endl;
			break;
		}
		case 'E':
		{
			cout<<"Ouch! Something is wrong. Too much negativity."<<endl;
			cout<<boy<<" and "<<girl<<" are ENEMIES!"<<endl;
			cout<<"Try to solve your problems or kill the other one to live a peaceful life."<<endl;
			break;
		}
		case 'S':
		{
			cout<<"Flowers and stars all tell the same thing\nOne in a thousand is my sister!"<<endl;
			cout<<boy<<" and "<<girl<<" are sisters!"<<endl;
			cout<<"Get ready to pay for the gift in Raksha Bandhan!"<<endl;
			break;
		}
	}
}
