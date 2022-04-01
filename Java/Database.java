/*
An educational institution which is to maintain a database of its 
employee .The database is divided into number of classes whoes heirarcial
realationship are shown in figure.

				--------------------------------------------
				|          		  Staff      			   \	
		        |		       Name Code				   \	
		        --------------------------------------------
   				 /                |                 \
				/	              |				 	 \					
			Teacher 		     Typist			   Officer
	Subject Publication          Speed				Grade
								/      \
						 	   /        \
				 			Regular		Casual
				
				
										Daily Wages
The figure also shows the minimum information required for each class.
Specify all the classes and define method to create the database and 
retrieve individual information as and when required.
*/
class Staff{
    string name;
    int code;
}
class Teacher extends Staff{
    string subject;
    string publication;
}
class Typist extends Staff{
    int speed;
}
class Officer extends Staff{
    char  grade;
}
public class Database{
	public static void main(String []args){
		
	}
}