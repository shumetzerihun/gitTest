#define PI 3.14

class Box {
	private:
		double length;         // Length of a box
		double bredth;        // Breadth of a box
		double height;         // Height of a box      
	public:
		double getVolume(void);
		void setLength(double);
		void setBredth(double);
		void setHeight(double);
		Box(double, double, double);        //Constructor
		~Box();
};


class Cylinder {
	private:
		double height;
		double radius;

	public: 
		double getVolume(void);
		void setHeight(double);
		void setRadius(double);
		Cylinder(double, double);        //Constructor
		~Cylinder();	
};
