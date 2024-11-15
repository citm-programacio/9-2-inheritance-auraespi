#include <iostream>
#include <string>
using namespace std;

class Building
{
protected:
	string nameBuilding;

public:
	Building(string buildingName) :nameBuilding(buildingName) {}
	string getName() const 
	{
		return nameBuilding;
	}
};

class Warehouse : public Building
{
private:
	int wood;
	int rocks;
	int wheat;

public:
	Warehouse(string nameWarehouse, int woodW, int rocksW, int wheatW) :
		Building(nameWarehouse), wood(woodW), rocks(rocksW), wheat(wheatW) {}

	void printResources() const
	{
		cout << "---WAREHOUSE---" << endl;
		cout << "Name: " << getName() << endl;
		cout << "Wood: " << wood << endl;
		cout << "Rocks: " << rocks << endl;
		cout << "Wheat: " << wheat << endl;
		cout << endl;
	}
};

class House : public Building
{
private:
	int floors;
	int inhabitants;
	int servants;

public:
	House(string nameHouse, int floorsH, int inhabitantsH, int servantsH):
		Building(nameHouse), floors(floorsH), inhabitants(inhabitantsH), servants(servantsH){}

	void printHouse() const
	{
		cout << "---HOUSE---" << endl;
		cout << "Name: " << getName() << endl;
		cout << "Floors: " << floors << endl;
		cout << "Inhabitants: " << inhabitants << endl;
		cout << "Servants: " << servants << endl;
		cout << endl;
	}
};

class Temple : public Building
{
private:
	string god;
	int priests;

public:
	Temple(string nameTemple, string godTemple, int priestsTemple) :
		Building(nameTemple), god(godTemple), priests(priestsTemple) {}

	void printTemple() const
	{
		cout << "---TEMPLE--" << endl;
		cout << "Name: " << getName() << endl;
		cout << "God: " << god << endl;
		cout << "Priests: " << priests << endl;
		cout << endl;
	}
};

int main()
{
	Warehouse mywarehouse("Villa Bella", 120, 75, 205);
	House myhouse("Casa Napoli", 4, 9, 2);
	Temple mytemple("Jupiter's temple", "Jupiter", 7);

	mywarehouse.printResources();
	myhouse.printHouse();
	mytemple.printTemple();
}
