#pragma once
#include <vector>
#include <string>
#include <memory>



class big {

public:

	big(std::vector<int> &array1, bool&znk);
	big(std::string &input);
	void operator=(big &input);
void NormalLenght(std::vector<int> &array1, std::vector<int> &array2);
void set_num(std::string &input);
void get_num();
big summ(big &num1, big &num2);
big diff(big &num1, big &num2, bool &PlaseOfCall);
big  Prepair_for_Mult(big &num1, big &num2);
big Division(big &num1, big &num2, bool &CallAsMod);
//big Mod(big &num1, big &num2, bool &CallAsMod);


private:
	void FindBiggest(std::vector<int> &array1, std::vector<int> &array2, int &big);
	std::vector<int> VecSumm(std::vector<int> &array1, std::vector<int> &array2);
	void Multiplication(std::vector<int> big, std::vector<int> small, std::vector<int>& result);
	//std::vector<int> mvector;
	///* Copy the vector in a shared pointer */
	//std::shared_ptr<std::vector<int>> array = std::make_shared<std::vector<int>>(mvector);

	//https://stackoverflow.com/questions/26734452/how-can-i-create-a-shared-ptr-to-a-stdvector


	std::vector<int> mVector;
	std::shared_ptr<std::vector<int>> array = std::make_shared<std::vector<int> >(std::move(mVector));
	std::shared_ptr<bool> znak;
	
};

