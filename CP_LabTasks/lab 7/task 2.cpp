#include<iostream>
using namespace std;
class vehicle{
	private:
		string typeOfCar,make,model,color,year,milesDriven;
	public:
		vehicle()
		{
		}
		vehicle(string t,string m,string mo,string c,string y,string mi)
		:typeOfCar(t),make(m),model(mo),color(c),year(y),milesDriven(mi)
		{
		}
		string gettypeOfCar()
		{
			return typeOfCar;
		}
		string getmake()
		{
			return make;
		}
		string getmodel()
		{
			return model;
		}
		string getcolor()
		{
			return color;
		}
		string getyear()
		{
			return year;
		}
		string getmilesDriven()
		{
			return milesDriven;
		}
};
class gasVehicle:virtual public vehicle{
	private:
		int fuelTankSize;
	public:
		gasVehicle():vehicle()
		{
		}
		gasVehicle(string t,string m,string mo,string c,string y,string mi,int f)
		:vehicle(t,m,mo,c,y,mi),fuelTankSize(f)
		{
			
		}
		int getfuelTankSize()
		{
			return fuelTankSize;
		}
			
};
class electricVehicle:virtual public vehicle{
	private:
		int energyStorage;
	public:
		electricVehicle():vehicle()
		{
		}
		electricVehicle(string t,string m,string mo,string c,string y,string mi,int e)
		:vehicle(t,m,mo,c,y,mi),energyStorage(e)
		{
		}
		int getenergyStorage()
		{
			return energyStorage;
		}
};
class heavyVehicle:public gasVehicle,public electricVehicle{
	private:
		int maximumWeight,noOfWheels,lenght;
	public:
		heavyVehicle():gasVehicle(),electricVehicle()
		{
		}
		heavyVehicle(string t,string m,string mo,string c,string y,string mi,int f,int e,int ma,int n,int l)
		:gasVehicle(t,m,mo,c,y,mi,f),vehicle(t,m,mo,c,y,mi),electricVehicle(t,m,mo,c,y,mi,e),maximumWeight(ma),noOfWheels(n),lenght(l)
		{
		}
		int getmaximumWeight()
		{
			return maximumWeight;
		}
		int getnoOfWheels()
		{
			return noOfWheels;
		}
		int getlenght()
		{
			return lenght;
		}
};
class highPerformance:public gasVehicle{
	private:
		int horsePower,topSpeed;
	public:
		highPerformance():gasVehicle()
		{
		}
		highPerformance(string ti,string m,string mo,string c,string y,string mi,int f,int h,int t)
		:gasVehicle(ti,m,mo,c,y,mi,f),vehicle(ti,m,mo,c,y,mi),horsePower(h),topSpeed(t)
		{
		}
		int gethorsePower()
		{
			return horsePower;
		}
		int gettopSpeed()
		{
			return topSpeed;
		}
};
class sportsCar:public highPerformance{
	private:
		string gearBox,driveSystem;
	public:
		sportsCar():highPerformance()
		{
		}
		sportsCar(string ti,string m,string mo,string c,string y,string mi,int f,int h,int t,string g,string d)
		:highPerformance(ti,m,mo,c,y,mi,f,h,t),gearBox(g),driveSystem(d)
		{
		}
		string getgearBox()
		{
			return gearBox;
		}
		string getdriveSystem()
		{
			return driveSystem;
		}
};
class constructionTruck:public heavyVehicle {
	private:
		string cargo;
	public:
		constructionTruck():heavyVehicle()
		{
		}
		constructionTruck(string t,string m,string mo,string c,string y,string mi,int f,int e,int ma,int n,int l,string ca)
		:heavyVehicle(t,m,mo,c,y,mi,f,e,ma,n,l),cargo(ca)
		{
		}
		string getcargo()
		{
			return cargo;
		}
};
class Bus:public heavyVehicle{
	private:
		int numberOfSeats;
	public:
		Bus():heavyVehicle()
		{
		}
		Bus(string t,string m,string mo,string c,string y,string mi,int f,int e,int ma,int n,int l,int nu)
		:heavyVehicle(t,m,mo,c,y,mi,f,e,ma,n,l),numberOfSeats(nu),vehicle(t,m,mo,c,y,mi)
		{
		}
		int getnumberOfSeats()
		{
			return numberOfSeats;
		}
		void display()
		{
			cout<<"The details for the Bus are :\n";
			cout<<"\nNumber of seats : "<< getnumberOfSeats();
			cout<<"\nMaximum weight  : "<<getmaximumWeight();
			cout<<"\nNumber of wheels: "<<getnoOfWheels();
			cout<<"\nLength          : "<<getlenght();
			cout<<"\nFuel tank size  : "<<getfuelTankSize();
			cout<<"\nEnergy storage  : "<< getenergyStorage();
			cout<<"\nType of car     : "<<gettypeOfCar();
			cout<<"\nMake            : "<<getmake();
			cout<<"\nModel           : "<<getmodel();
			cout<<"\nColor           : "<<getcolor();
			cout<<"\nYear            : "<<getyear();
			cout<<"\nMiles driven    : "<<getmilesDriven();
		}
};
main()
{
	Bus Eisha("SUV","Hard body","2445","White","2018","10,000 KM",73,576,930,7,55,22);
	Eisha.display();
}
