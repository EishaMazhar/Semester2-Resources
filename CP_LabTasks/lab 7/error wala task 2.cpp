#include<iostream>
#include<string.h>
using namespace std;
class Vehicle
{
	private:
    	string typeOfCar;
    	string Make;
		string Model;
		string Color;
		int year;
		float MilesDriven;
	public:
		
		Vehicle(string tc,string mak,string md,string clr,int yr,float mld):typeOfCar(tc),Make(mak),Model(md),Color(clr),year(yr),MilesDriven(mld)
		{
		}
		string getTypeOfcar(){
			return typeOfCar;
		}
		string getMake(){
			return Make;
		}
		string getModel(){
			return Model;
		}
		string getColor(){
			return Color;
		}
		int getyear(){
			return year;
		}
		float getMilesDriven(){
			return MilesDriven;
		}
	
};
class GasVehicle:virtual Vehicle
{
		string FuelTankSize;
	public:
		GasVehicle(string FTS,string tc,string mak,string md,string clr,int yr,float mld):FuelTankSize(FTS),Vehicle(tc,mak,md,clr,yr,mld)
		{
		}
};
class ElectricVehicle:virtual Vehicle
{
		string EnergyStrorage;
	public:
		ElectricVehicle(string EST,string tc,string mak,string md,string clr,int yr,float mld):EnergyStrorage(EST),Vehicle(tc,mak,md,clr,yr,mld)
		{
		}
};
class HeavyVehicle:GasVehicle,ElectricVehicle
{
	private:
		int NoOfwheels;
		string MaxWeight;
		float length;
	public:
		HeavyVehicle(int nw,string mw,float l,string es,string fs,string tc,string mak,string md,string clr,int yr,float mld):Vehicle(tc,mak,md,clr,yr,mld),NoOfwheels(nw),MaxWeight(mw),length(l),ElectricVehicle(es,tc,mak,md,clr,yr,mld),GasVehicle(fs,tc,mak,md,clr,yr,mld)
		{
		}	
};
class HighPerformanceVehicle:GasVehicle
{
	float HorsePower;
	float TopSpeed;
};
class SportsCar:HighPerformanceVehicle
{
	string gearbox;
	string DriveSystem;
};
class ConstructionTruck:HeavyVehicle
{
	string Cargo;
};
class Bus:HeavyVehicle
{
	int noOfseats;
	public:
		Bus(int NOS,string maxWt,float len,int NOW,string engStrg,string fuelsize,string TOCar,string Mk,string mdl,string clr,int yr,float MDrvn):noOfseats(NOS),HeavyVehicle(NOW,maxWt,len,engStrg,fuelsize,TOCar,Mk,mdl,clr,yr,MDrvn),Vehicle(TOCar,Mk,mdl,clr,yr,MDrvn)
		{
			
		}
		Display(){
			cout<<"No of seats : "<<noOfseats;
			cout<<"";
		}
		
	
};
main()
{
	Bus Eisha(5,"1100 Ton",22,30,"70 Kg","105 L","SUV","Hard Body","2010","White",2018,500);
}
