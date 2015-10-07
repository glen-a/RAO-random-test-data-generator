/*
ASSUMPTIONS



will create 100 random users, assign them random roles and add appropriatly to matches, teams etc

4 special accounts added with roles that are their names
admin:iamglen
player:iamglen
referee:iamglen
organizer:iamglen
everyone is glen


things that are not filled with this:
willinglocations 
infractions
alternate offers
oneOffAvailability
events

7/10/2015:
updated for new schema and teams+players+instances

Offers are now assigned to a placeholder referee, prepped for assigning by the system automatically


*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <vector>

using namespace std;

	std::vector<int> refereeIds;
	std::vector<string> refereeUserNames;
	std::vector<int> offerIds;

string fnames[90] = {
	"Omer"
	,"Williams"
	,"Moises"
	,"Marybelle"
	,"Shawnda"
	,"Anika"
	,"Laurena"
	,"Jacalyn"
	,"Socorro"
	,"Merlin"
	,"Alona"
	,"Teressa"
	,"Lindsy"
	,"Sherita"
	,"Carlena"
	,"Kenyatta"
	,"Drema"
	,"Howard"
	,"Georgene"
	,"Lezlie"
	,"See"
	,"Doloris"
	,"Sanjuanita"
	,"Christopher"
	,"Lorine"
	,"Cyrus"
	,"Sonny"
	,"Tamala"
	,"Cordie"
	,"Kamala"
	,"Leland"
	,"Kay"
	,"Zachary"
	,"Lottie"
	,"Odelia"
	,"Clemencia"
	,"Corrina"
	,"Alene"
	,"Emanuel"
	,"Syble"
	,"Jamal"
	,"Lisbeth"
	,"Arnette"
	,"Sherron"
	,"Takako"
	,"Donita"
	,"Sharilyn"
	,"Ervin"
	,"Marhta"
	,"Minda"
	,"Jazmine"
	,"Brittni"
	,"Serina"
	,"Akilah"
	,"Cornelia"
	,"Dimple"
	,"Juliette"
	,"Bethanie"
	,"Hiroko"
	,"Nicholle"
	,"Huong"
	,"Becky"
	,"Josphine"
	,"Terrell"
	,"Peter"
	,"Theodore"
	,"Herta"
	,"Kena"
	,"Dorsey"
	,"Sergio"
	,"Alessandra"
	,"Lurlene"
	,"Octavio"
	,"Despina"
	,"Antonetta"
	,"Craig"
	,"Tory"
	,"Torrie"
	,"Erminia"
	,"Ali"
};

string lNames[90]={
	"Marshall"
	,"Berry"
	,"Shout"
	,"Fortune"
	,"Catt"
	,"Hicks"
	,"Angles"
	,"Sutton"
	,"Hentze"
	,"Kisch"
	,"Brough"
	,"Franklin"
	,"Sandes"
	,"Edwards"
	,"Nicolay"
	,"Middleton"
	,"Cardell"
	,"Goudie"
	,"Tims"
	,"Beale"
	,"Murray"
	,"Moran"
	,"Tenison-Woods"
	,"Findley"
	,"Kraus"
	,"Crommelin"
	,"Beach"
	,"Treacy"
	,"McCombie"
	,"Chester"
	,"Kavanagh"
	,"Andrade"
	,"Keighley"
	,"Gadsdon"
	,"Woodfull"
	,"Wadsworth"
	,"Swanston"
	,"Kilvington"
	,"Torode"
	,"Best"
	,"Friend"
	,"Farmer"
	,"Shaw"
	,"Scollen"
	,"McCorkindale"
	,"Prinsep"
	,"Clibborn"
	,"North"
	,"Carandini"
	,"Ecuyer"
	,"Noell"
	,"Dunkel"
	,"Martinez"
	,"Brinkley"
	,"Keasler"
	,"Mccay"
	,"Dedeaux"
	,"Fleischmann"
	,"Lebeau"
	,"Valenti"
	,"Shanley"
	,"Ree"
	,"Chipps"
	,"Prudhomme"
	,"Parcell"
	,"Cullison"
	,"Wayland"
	,"Morace"
	,"Allmond"
	,"Sullens"
	,"Gaeth"
	,"Wain"
	,"Rosenberger"
	,"Murrell"
	,"Erikson"
	,"Cutter"
	,"Eager"
	,"Branscome"
	,"Hilliker"
	,"Spicer"

};

string streets[60] = {
	"Jacolite Street"
,"Little Myers Street"
,"McLeans Road"
,"unchs Creek Road"
,"Bayview Road"
,"Woerdens Road"
,"rgyle Street"
,"Bayfield Street"
,"Lane Street"
,"George Street"
,"Taylor Street"
,"Villeneuve Street"
,"Seaview Court"
,"Elizabeth Street"
,"Flinstone Drive"
,"Saggers Road"
,"Avondale Drive"
,"Beach Street"
,"Oriana Street"
,"Nandewar Street"
,"Halsey Road"
,"Tooraweenah Road"
,"Cedar Street"
,"Delan Road"
,"Martens Place"
,"Arthur Street"
,"Edward Bennett Drive"
,"Grey Street"
,"Isaac Road"
,"Noalimba Avenue"
,"Stanley Drive"
,"Boobialla Street"
,"Banksia Street"
,"Walter Crescent"
,"Rupara Street"
,"Insignia Way"
,"Southwell Crescent"
,"McPherson Road"
,"Parkes Road"
,"Corny Court"
,"Ageston Road"
,"Webb Road"
,"Garden Place"
,"Carba Road"
,"Fitzroy Street"
,"Nandewar Street"
,"ills Street"
,"Fitzroy Street"
,"Endeavour Drive"
,"Dossiter Street"
};

string domains[10]={
	"@gmail.com",
	"@hotmail.com",
	"@uow.edu.au",
	"@live.com",
	"@gorilla.com",
	"@aol.com",
	"@email.com"
};

string teamsFirst[30]={
	"grey",
	"wild",
	"wiley",
	"rabbit",
	"hot",
	"soulful"
	,"Sleepy"
	,"Safe"
	,"Understood"
	,"Entertaining"
	,"Healthy"
	,"Unsightly"
	,"Merciful"
	,"Kindhearted"
	,"Feigned"
	,"Threatening"
	,"Malicious"
	,"Elegant"
	,"Defeated"
	,"Cheap"
	,"Unbiased"
	,"Ceaseless"
	,"Sable"
	,"Venomous"
	,"Productive"

};

string teamLast[30]={
	"Cat",
	"Dog",
	"Wombat",
	"Table",
	"Chair",
	"Wolf",
	"Anteater",
	"Pokemon",
	"Elephant",
	"Fish",
	"Bird",
	"Computer",
	"String",
	"Rope",
	"Paper",
	"Women",
	"Men",
	"Bottle",
	"Water",
	"Fire",
	"Air",
	"Earth"
};

string states[10]={"ACT","NSW","QLD","VIC","TAS","NT","SA","WA"};
static string listOfRoles[4] ={"Admin","Player","Referee","Organizer"};
static string listOfFieldNames[11] = {"glens field", "collegens field", "steel field",
									  "grass knowles", "locks field", "cirpus paddock",
									  "middle field", "first field", "last field",
									  "main field"};
static string listOfTypes[4]={"Referee","Referee Assistant 1","Referee Assistant 2","Fourth Official"};
static string listOfQualifications[4]={"Referee"};

static string possibleTimesOfMatches[5]={"9:00:00 AM", "11:30:00 AM", "2:00:00 PM", "4:30:00 PM", "7:00:00 PM"};

int NUMMATCHES = 20;


int getRand(int upper,int lower){
	return static_cast<double>(std::rand()) / RAND_MAX * upper+lower;
}

string createDOB(){
	ostringstream ss;

	ss << getRand(65,1930);
	ss << "/";
	ss << getRand(12,1);
	ss << "/";
	ss << getRand(30,1);

	return ss.str();
}

int isReferee(int first, int second, int higherThan){
	if(getRand(first, second) > higherThan)
		return 1;
	return 0;
}

void generateUserRoles(ofstream &roles){

	for(int i = 0; i< 4;i++){
		roles << "INSERT INTO [dbo].[AspNetRoles] \n values \n(\n";
		roles << "\'" << i+1<<"\',\n"; //id
		roles << "\'" << listOfRoles[i] <<"\'\n"; //id
		roles << ")\n GO \n\n";
	}


}

void generateLocations(ofstream &locations){
/*
	locationId int  identity(1,1) NOT NULL,
	name nvarchar(255) not null,
	price float(53) null, --53 is default max
	street nvarchar(255) not null,
	city nvarchar(255) not null,
	postcode int not null,
	phoneNum int not null,
	country nvarchar(255) not null DEFAULT ('Australia'),
	[state] nvarchar(255),
	status int DEFAULT ((1)) NOT NULL, --0 deleted, 1 active
	geogCol1 geography NOT NULL, 
    geogCol2 AS GeogCol1.STAsText(),
*/

	for (int i=0;i<10;i++){

		locations<< "INSERT INTO [dbo].[LOCATION] \n ";
		locations << "(locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) \n";
		locations <<  "values \n(\n";
		locations << "\'" << i+1<<"\',\n"; //id
		locations << "\'" << listOfFieldNames[i] <<"\',\n"; //id
		locations << "\'" << getRand(1000,1)<<"\',\n"; //id
		locations << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		locations << "\'" << "Wollongong"<<"\',\n";
		locations << "\'" << getRand(9999,1111)<<"\',\n"; //pcode
		locations << "\'" << getRand(100000000,11111111)<<"\',\n"; //ph#
		locations << "\'" << "Australia" <<"\',\n";
		locations << "\'" << states[getRand(7,0)]<<"\',\n"; 
		locations << "\'" << 1<<"\',\n";//status
		locations << "" << "geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)"<<"\n";//geography
		locations << ")\n GO \n\n";
	}


}

void generateTeams(ofstream &teams, vector<int> users){

/*
	teamId int identity(1,1) NOT NULL,
	name nvarchar(100) ,
	ageBracket int null,
	grade nvarchar(100) not null,
	sport nvarchar(100) not null,
	managerId nvarchar(128) not null,
	shortName nvarchar(6) null,
	status int DEFAULT ((1)) NOT NULL, --0 deleted, 1 active
*/

	ofstream teamIns;
	teamIns.open("./insertsRaw/teamIns.sql");

	for(int i=0;i<20;i++){
		teams << "INSERT INTO [dbo].[TEAM] \n ";
		teams << "(teamId, name, ageBracket, grade, sport, managerId, shortName, status) \n";
		teams <<  "values \n(\n";
		teams << "\'" << i+1 <<"\',\n";
		teams << "\'" << teamsFirst[getRand(24,0)] << teamLast[getRand(21,0)]<<"\',\n";
		teams << "\'" << 16 <<"\',\n";
		teams << "\'" << 4 <<"\',\n";
		teams << "\'" << "Soccer" <<"\',\n";
		teams << "\'" << users.at(getRand(users.size(), 0)) <<"\',\n";
		teams << "" << "null" <<",\n";
		teams << "\'" << 1 <<"\'\n";
		teams << ")\n GO \n\n";


		/*
			teamID int not null,
			tournament int not null,
			currentPosition int not null,
			points int not null,
			wins int not null,
			draws int not null,
			losses int not null,
			goalsFor int not null,
			goalsAgainst int not null,
			goalDraw int not null,
			points int not null,
		*/
		teamIns << "INSERT INTO [dbo].[TEAMINS] \n values \n(\n";
		teamIns << "\'" << i+1 <<"\',\n";
		teamIns << "\'" << 1 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 0 <<"\',\n";
		teamIns << "\'" << 1 <<"\'\n";
		teamIns << ")\n GO \n\n";
	} 
	teamIns.close();

}

void generateType(){
	ofstream types;
	types.open("./insertsRaw/types.sql");
	types << "SET IDENTITY_INSERT TYPE ON  \n GO" << endl;

	for(int i = 0; i< 4;i++){
		types << "INSERT INTO [dbo].[TYPE] \n ";
		types << "(typeId, name, description, priority, status) \n";
		types <<  "values \n(\n";
		types << "\'" << i+1<<"\',\n"; //id
		types << "\'" << listOfTypes[i] <<"\',\n"; //name
		types <<"\'"  << "a description: " << listOfTypes[i] << " is pretty cool \',\n";
		types << "\'" << 5 <<"\',\n"; //priority
		types << "\'" << 1 <<"\'\n"; //status (1 is admin created)
		types << ")\n GO \n\n";
	}

	types << "SET IDENTITY_INSERT TYPE OFF  \n GO" << endl;
	types.close();
}

//random offers to existing referees
void generateOffer(int matchId, ofstream &offers, vector<int> refereeIds, int j){

	int offerId = getRand(100000,0);
	offerIds.push_back(offerId);


	offers << "INSERT INTO [dbo].[OFFER] \n ";
	offers << "(offerId, sport, matchId, refId, status, dateOfOffer, declinedReason, priority, typeOfOffer) \n";
	offers <<  "values \n(\n";
	offers << "\'" << offerId <<"\',\n"; //offer id
	offers << "\'" << "Soccer"<<"\',\n";
	offers << "\'" << matchId <<"\',\n";
	offers << "\'" << refereeIds.at(getRand(refereeIds.size(),0)) <<"\',\n"; //ref id
	offers << "\'" << 3 <<"\',\n"; //status
	offers << "\'" << "2015/9/11" <<"\',\n"; //todays date
	offers << "" << "null" <<",\n"; //status
	offers << "\'" << 1 <<"\',\n"; //status
	offers << "\'" << listOfTypes[j] <<"\'\n"; // type
	offers << ")\n GO \n\n";

}

//algorithm assigned offers
void generateOffer(int matchId, ofstream &offers, int j){
	int offerId = getRand(100000,0);
	offerIds.push_back(offerId);

	offers << "INSERT INTO [dbo].[OFFER] \n ";
	offers << "(offerId, sport, matchId, refId, status, dateOfOffer, declinedReason, priority, typeOfOffer) \n";
	offers <<  "values \n(\n";
	offers << "\'" << offerId <<"\',\n"; //offer id
	offers << "\'" << "Soccer"<<"\',\n";
	offers << "\'" << matchId <<"\',\n";
	offers << "\'" << 10000<<"\',\n"; //blank offer
	offers << "\'" << 4 <<"\',\n"; //status
	offers << "\'" << "2015/9/11" <<"\',\n"; //todays date
	offers << "" << "null" <<",\n"; //status
	offers << "\'" << 5 <<"\',\n"; //priority
	offers << "\'" << listOfTypes[j] <<"\'\n"; // type
	offers << ")\n GO \n\n";

}

void generateMatches(ofstream &matches, ofstream &offers, vector<int> refereeIds){

	for(int i=0;i<NUMMATCHES;i++){
		int teamA = getRand(20,1);
		int teamB = getRand(20,1);
		while(teamA==teamB){
			teamB = getRand(20,0);
		}

		matches << "INSERT INTO [dbo].[MATCH] \n";
		matches << "(matchId, matchDate, locationId, teamAId, teamBId, teamAScore, teamBScore, status, tournamentId, matchLength, halfTimeDuration) \n";
		matches <<  "values \n(\n";	

		matches << "\'" << i+1 <<"\',\n"; 
		matches << "\'" << "2015/" <<  10<<"/" <<getRand(1,24) << " " << possibleTimesOfMatches[getRand(4,0)]<< "\',\n"; //date yyyy/dd/mm
		matches << "\'" << getRand(10,1) <<"\',\n"; 
		matches << "\'" << teamA <<"\',\n";
		matches << "\'" << teamB <<"\',\n";
		matches << "\'" << 0 <<"\',\n"; //scorea
		matches << "\'" << 0 <<"\',\n"; //scoreb
		matches << "\'" << 0 <<"\',\n";  //status
		matches << "\'" << 1 <<"\',\n"; //tid
		matches << "\'" << 90 <<"\',\n";//length
		matches << "\'" << 30 <<"\',\n";//half time duration
		matches << "\'" << 1 <<"\'\n";//counts towards points
		matches << ")\n GO \n\n";
		if(getRand(10,0) > 5){
			for(int j=0;j<getRand(3,1);j++){
				generateOffer(i+1, offers, j);
			}
		}
	}

}

void generateWeekly(vector<int> refIDs){

	ofstream fout;
	fout.open("./insertsRaw/weeklyAval.sql");
	for(int i=0;i<refIDs.size();i++){

		fout << "INSERT INTO [dbo].[WEEKLYAVAILABILITY] \n values \n(\n";
		fout << "\'" << refIDs.at(i) <<"\',\n";
		fout << "\'" << getRand(3,3) <<"\',\n"; //monday
		fout << "\'" << getRand(3,3) <<"\',\n"; //
		fout << "\'" << getRand(3,3) <<"\',\n"; //
		fout << "\'" << getRand(3,3) <<"\',\n"; //
		fout << "\'" << getRand(3,3) <<"\',\n"; //
		fout << "\'" << getRand(3,3) <<"\',\n"; //
		fout << "\'" << getRand(3,3) <<"\'\n"; //sunday
		fout << ")\n GO \n\n";

	}
	fout.close();
}

void generatePlayers(ofstream &players){

/*
	teamId int not null,
	userId nvarchar(128) not null,
	position nvarchar(20),
	shirtNum int,
	status int DEFAULT ((1)) NOT NULL, --0 deleted, 1 active
*/

	int counter = 1;
	for(int i=1, j=1;i<200;i++, j++){

		players << "INSERT INTO [dbo].[WEEKLYAVAILABILITY] \n values \n(\n";
		players << "\'" << counter <<"\',\n"; //monday
		players << "\'" << i+100 <<"\',\n"; //
		players << "" << "null" <<",\n"; //
		players << "" << "null" <<",\n"; //
		players << "\'" << 1 <<"\'\n"; //status
		players << ")\n GO \n\n";
		
		if(j == 10){
			j = 1;
			counter++;
		}
		

	}
}

void generateQualifications(ofstream &qualifications){


		qualifications << "INSERT INTO [dbo].[QUALIFICATIONS] \n";
		qualifications << "(qualificationId, name, sport, description, qualificationLevel, status) \n";
		qualifications <<  "values \n(\n";	

		qualifications << "\'" << 1 <<"\',\n";  //id
		qualifications << "\'" << "Referee" <<"\',\n"; //name
		qualifications << "\'" << "Soccer" <<"\',\n"; //sport
		qualifications << "\'" << "referee qualification level" <<"\',\n";  //desc
		qualifications << "\'" << 4 <<"\',\n"; //qualLevelMax
		qualifications << "\'" << 1 <<"\'\n";//status
		qualifications << ")\n GO \n\n";
	
}

void generateUserQualifications(){

	ofstream qualifications;
	qualifications.open("./insertsRaw/refQuals.sql");

	for(int i=0;i<refereeIds.size();i++){

		qualifications << "INSERT INTO [dbo].[USERQUAL] values \n(\n";	

		qualifications << "\'" << 1 <<"\',\n";  //Qualid
		qualifications << "\'" << refereeIds.at(i) <<"\',\n"; //refId
		qualifications << "\'" << getRand(3,1) <<"\'\n";//level
		qualifications << ")\n GO \n\n";
	}
	qualifications.close();
}

void generateOfferQualifications(){

	ofstream qualifications;
	qualifications.open("./insertsRaw/offerQuals.sql");

	for(int i=0;i<offerIds.size();i++){

		qualifications << "INSERT INTO [dbo].[OFFERQUAL] values \n(\n";	

		qualifications << "\'" << 1 <<"\',\n";  //QualId
		qualifications << "\'" << offerIds.at(i) <<"\',\n"; //offerId
		qualifications << "\'" << getRand(3,1) <<"\'\n";//level
		qualifications << ")\n GO \n\n";
	}
	qualifications.close();
}

void generateSingleScript(){
	fstream output;
	fstream input;
	char c;
	output.open( "bulkInsert.sql", ios::out );//| ios::app );


		//add the sport
	output << "INSERT INTO [dbo].[SPORT] \n values \n(\n";
	output << "\'" << "Soccer" <<"\',\n"; //todays date
	output << "\'" << 1 <<"\'\n"; // status
	output << ")\n GO \n\n";

		//add users
	input.open( "./insertsRaw/userAccounts.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

		//add a tournament
	output << "SET IDENTITY_INSERT TOURNAMENT ON  \n GO" << endl;

	output << "INSERT INTO [dbo].[TOURNAMENT] \n ";
	output << "(tournamentId, name, startDate, organizer, ageBracket, grade, sport, status, priority) \n";
	output <<  "values \n(\n";	
	output << "\'" << 1 <<"\',\n"; //id
	output << "\'" << "angsty teen league" <<"\',\n"; // name
	output << "\'" << "2015/08/10" << "\',\n"; //date yyyy/dd/mm
	output << "\'" << "organizer" <<"\',\n";  //special organizer 
	output << "\'" << 16 <<"\',\n";  //age bracket
	output << "\'" << 4 <<"\',\n";  //grade
	output << "\'" << 3 <<"\',\n"; 
	output << "\'" << "Soccer" <<"\',\n"; 
	output << "\'" << 1 <<"\',\n"; 
	output << "\'" << 5 <<"\'\n"; //priority 
	output << ")\n GO \n\n";

	output << "SET IDENTITY_INSERT TOURNAMENT OFF  \n GO" << endl;


	//add organizer to tournament
	output << "INSERT INTO [dbo].[TOURNAMENTORGANIZERS] \n ";
	output <<  "values \n(\n";	
	output << "\'" << "Organizer" <<"\',\n"; //id
	output << "\'" << 1 <<"\'\n"; // name
	output << ")\n GO \n\n";

	//admin
	output << "INSERT INTO [dbo].[ADMINISTRATION] \n ";
	output <<  "values \n(\n";	
	output << "\'" << "X" <<"\',\n"; //id
	output << "\'" << 1 <<"\',\n"; // name
	output << "\'" << 1 <<"\',\n"; // name
	output << "\'" << 1 <<"\',\n"; // name
	output << "\'" << 1 <<"\',\n"; // name
	output << "\'" << 1 <<"\'\n"; // name
	output << ")\n GO \n\n";






		//add roles
	input.open( "./insertsRaw/netRoles.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

			//add userRoles
	input.open( "./insertsRaw/netUserRoles.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();
			//add types
	input.open( "./insertsRaw/types.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

			//add locations
	input.open( "./insertsRaw/locations.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

			//add referees
	input.open( "./insertsRaw/refereeData.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

			//add ref avaliavibility
	input.open( "./insertsRaw/weeklyAval.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

			//add teams
	input.open( "./insertsRaw/teams.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();
			//add teamins
	input.open( "./insertsRaw/teamins.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

		//add matches
	input.open( "./insertsRaw/matches.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

		//add offers
	input.open( "./insertsRaw/offers.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

		//add qualifications
		input.open( "./insertsRaw/qualifications.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

		//add user quals
		input.open( "./insertsRaw/refQuals.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();


		//add offerquals
		input.open( "./insertsRaw/offerQuals.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

			//add players
		input.open( "./insertsRaw/players.sql", ios::in );
	while(input.get(c)){
	    output << c;
	}
	input.close();

}

void addSpecialUsers(ofstream &fout, ofstream &userRolesOut, ofstream &refereesOut){

	//add users
		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << "admin" <<"\',\n"; //id
		fout << "\'" <<"5000"<<"\',\n"; //ffa num
		fout << "\'" << "admin" <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << "admin" <<"\',\n";
		fout << "\'" << "admin" <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << "admin" << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<"2500"<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'"<< 1 <<"\',\n"; //isAdmin
		fout << "\'"<< 0 <<"\',\n"; //isOrganizer
		fout << "\'"<< 0 <<"\',\n"; //isReferee
		fout << "\'"<< 0 <<"\',\n"; 
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";

			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << "admin" <<"\',\n"; //id
			userRolesOut << "\'" << 1 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";

		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << "player" <<"\',\n"; //id
		fout << "\'" <<"3000"<<"\',\n"; //ffa num
		fout << "\'" << "player" <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << "player" <<"\',\n";
		fout << "\'" << "player" <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << "player" << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<"2500"<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'"<< 0 <<"\',\n"; //isAdmin
		fout << "\'"<< 0 <<"\',\n"; //isOrganizer
		fout << "\'"<< 0 <<"\',\n"; //isReferee
		fout << "\'"<< 1 <<"\',\n"; 
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";

			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << "player" <<"\',\n"; //id
			userRolesOut << "\'" << 2 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";


		//referees
		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << "referee" <<"\',\n"; //id
		fout << "\'" <<"2000"<<"\',\n"; //ffa num
		fout << "\'" << "referee" <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << "referee" <<"\',\n";
		fout << "\'" << "referee" <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << "referee" << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<"2500"<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'"<< 0 <<"\',\n"; //isAdmin
		fout << "\'"<< 0 <<"\',\n"; //isOrganizer
		fout << "\'"<< 1 <<"\',\n"; //isReferee
		fout << "\'"<< 0 <<"\',\n"; 
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";

			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << "referee" <<"\',\n"; //id
			userRolesOut << "\'" << 3 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";

				refereeIds.push_back(1000);
				refereeUserNames.push_back("referee");
				refereesOut << "INSERT INTO [dbo].[REFEREE] \n";
				refereesOut << "(RefId, distTravel, sport, userId, maxGames, status, rating) \n";
				refereesOut <<  "values \n(\n";
				refereesOut << "\'" << 1000<<"\',\n"; //refId
				refereesOut << "\'" << getRand(100, 0) <<"\',\n"; //disttravel
				refereesOut << "\'" << "Soccer" <<"\',\n"; 
				refereesOut << "\'" << "referee" <<"\',\n"; //userId
				refereesOut << "\'" << getRand(4,1) <<"\',\n"; //maxGames
				refereesOut << "\'" << 1 <<"\',\n"; //active
				refereesOut << "\'" << getRand(4,1) <<"\'\n";//raiting
				refereesOut << ")\n GO \n\n";

		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << "algorithm" <<"\',\n"; //id
		fout << "\'" <<"10000"<<"\',\n"; //ffa num
		fout << "\'" << "algorithm" <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << "algorithm" <<"\',\n";
		fout << "\'" << "algorithm" <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << "referee" << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<"2500"<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'"<< 0 <<"\',\n"; //isAdmin
		fout << "\'"<< 0 <<"\',\n"; //isOrganizer
		fout << "\'"<< 1 <<"\',\n"; //isReferee
		fout << "\'"<< 0 <<"\',\n"; 
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";

			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << "algorithm" <<"\',\n"; //id
			userRolesOut << "\'" << 3 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";

				refereeIds.push_back(10000);
				refereeUserNames.push_back("referee");
				refereesOut << "INSERT INTO [dbo].[REFEREE] \n";
				refereesOut << "(RefId, distTravel, sport, userId, maxGames, status, rating) \n";
				refereesOut <<  "values \n(\n";
				refereesOut << "\'" << 10000<<"\',\n"; //refId
				refereesOut << "\'" << getRand(100, 0) <<"\',\n"; //disttravel
				refereesOut << "\'" << "Soccer" <<"\',\n"; 
				refereesOut << "\'" << "algorithm" <<"\',\n"; //userId
				refereesOut << "\'" << getRand(4,1) <<"\',\n"; //maxGames
				refereesOut << "\'" << 1 <<"\',\n"; //active
				refereesOut << "\'" << getRand(4,1) <<"\'\n";//raiting
				refereesOut << ")\n GO \n\n";



		//organizer
		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << "organizer" <<"\',\n"; //id
		fout << "\'" <<"1000"<<"\',\n"; //ffa num
		fout << "\'" << "organizer" <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << "organizer" <<"\',\n";
		fout << "\'" << "organizer" <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << "organizer" << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<"2500"<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'"<< 0 <<"\',\n"; //isAdmin
		fout << "\'"<< 1 <<"\',\n"; //isOrganizer
		fout << "\'"<< 0 <<"\',\n"; //isReferee
		fout << "\'"<< 0 <<"\',\n"; 
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";

			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << "organizer" <<"\',\n"; //id
			userRolesOut << "\'" << 4 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";

}



int main(){
	std::srand(std::time(NULL));

	system( "mkdir \"./insertsRaw\"");

	ofstream fout, userRolesOut, refereesOut, roles, locations, teams, matches, offers, qualifications, players;
	userRolesOut.open("./insertsRaw/netUserRoles.sql");
	fout.open("./insertsRaw/userAccounts.sql");
	refereesOut.open("./insertsRaw/refereeData.sql");
	roles.open("./insertsRaw/netRoles.sql");
	locations.open("./insertsRaw/locations.sql");
	teams.open("./insertsRaw/teams.sql");
	matches.open("./insertsRaw/matches.sql");
	offers.open("./insertsRaw/offers.sql");
	qualifications.open("./insertsRaw/qualifications.sql");
	players.open("./insertsRaw/players.sql");

	refereesOut << "SET IDENTITY_INSERT REFEREE ON  \n GO" << endl;
	locations << "SET IDENTITY_INSERT LOCATION ON  \n GO" << endl;
	teams << "SET IDENTITY_INSERT TEAM ON  \n GO" << endl;
	matches << "SET IDENTITY_INSERT MATCH ON  \n GO" << endl;
	offers << "SET IDENTITY_INSERT OFFER ON  \n GO" << endl;
	qualifications << "SET IDENTITY_INSERT QUALIFICATIONS ON  \n GO" << endl;


	addSpecialUsers(fout, userRolesOut, refereesOut);

	std::vector<int> teamManagers;

	generateUserRoles(roles);
	generateLocations(locations);
	generateType();



	for(int i=1;i<100;i++){

		int isRef = isReferee(10,0,7);
		int isAdmin = 0;
		int isPlayer = isReferee(10,0,5);
		int isOrganizer = isReferee(10,0,9);
		int userId = i;
		int ffaNum = getRand(999999,100000);

		




		string fname = fnames[getRand(79,0)];
		string lname = lNames[getRand(79,0)];
		string userName  = fname+"_"+lname;

		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << userId <<"\',\n"; //id
		fout << "\'" <<ffaNum<<"\',\n"; //ffa num
		fout << "\'" << userName <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << fname <<"\',\n";
		fout << "\'" << lname <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << userName << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<getRand(9999,1111)<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //wants to receive texts
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";


		if(isRef){
			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << userId <<"\',\n"; //id
			userRolesOut << "\'" << 3 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";


					//generate Referee things
					int refId = getRand(99999999,1000000);
					refereeIds.push_back(refId);
					refereeUserNames.push_back(userName);
					refereesOut << "INSERT INTO [dbo].[REFEREE] \n";
					refereesOut << "(RefId, distTravel, sport, userId, maxGames, status, rating) \n";
					refereesOut <<  "values \n(\n";
					refereesOut << "\'" << refId<<"\',\n"; //refId
					refereesOut << "\'" << getRand(100, 0) <<"\',\n"; //disttravel
					refereesOut << "\'" << "Soccer" <<"\',\n"; 
					refereesOut << "\'" << userId <<"\',\n"; //userId
					refereesOut << "\'" << getRand(4,1) <<"\',\n"; //maxGames
					refereesOut << "\'" << 1 <<"\',\n"; //active
					refereesOut << "\'" << getRand(4,1) <<"\'\n";//rating
					refereesOut << ")\n GO \n\n";

			generateWeekly(refereeIds);
			
		}
		if(isAdmin){
			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << userId <<"\',\n"; //id
			userRolesOut << "\'" << 1 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";
		}
		if(isPlayer){
			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << userId <<"\',\n"; //id
			userRolesOut << "\'" << 2 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";
		}
		if(isOrganizer){
			userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
			userRolesOut << "\'" << userId <<"\',\n"; //id
			userRolesOut << "\'" << 4 <<"\'\n"; //id
			userRolesOut << ")\n GO \n\n";
		}

		if(!isRef && !isAdmin && !isPlayer){
			teamManagers.push_back(userId);
		}
	}

	for(int i=100;i<300;i++){

		int userId = i;
		int ffaNum = getRand(999999,100000);

		string fname = fnames[getRand(79,0)];
		string lname = lNames[getRand(79,0)];
		string userName  = fname+"_"+lname;

		fout << "INSERT INTO [dbo].[AspNetUsers] \n values \n(\n";
		fout << "\'" << userId <<"\',\n"; //id
		fout << "\'" <<ffaNum<<"\',\n"; //ffa num
		fout << "\'" << userName <<"\',\n";//username
		//password is always 'iamglen'
		fout << "\'" <<"AMUiFUEhgvB6kzu5NUmEuRlE+0vT6iX/FechCHAcqgCT//qCo2WIDDPgBDOZ8MiyQQ=="<<"\',\n";
		fout << "\'" <<"b12dd7f0-b991-4dd2-aac4-109d89b0275f"<<"\',\n";
		fout << "\'" << fname <<"\',\n";
		fout << "\'" << lname <<"\',\n";
		fout << "\'" <<getRand(99999999,1000000)<<"\',\n";
		fout << "\'" << userName << domains[getRand(6,0)]<<"\',\n";
		fout << "\'" <<"~\\userprofile\\default.png"<<"\',\n";
		fout << "\'" <<"ApplicationUser"<<"\',\n";
		fout << "\'" <<"Australia"<<"\',\n";
		fout << "\'" <<getRand(9999,1111)<<"\',\n"; //post code
		fout << "\'" << getRand(100,1) << " " <<streets[getRand(49,0)]<<"\',\n"; //street+num
		fout << "\'" << "Wollongong"<<"\',\n";
		fout << "\'" <<states[getRand(7,0)]<<"\',\n";
		fout << "\'" <<createDOB()<<"\',\n";
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //share phone
		fout << "\'" << isReferee(10,0,4)<<"\',\n"; //showDOB
		fout << "\'" << isReferee(10,0,3)<<"\',\n"; //showADDRESS
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //SHOWEMAIL
		fout << "\'" << isReferee(10,0,5)<<"\',\n"; //wants to receive texts
		fout << "\'" << 1<<"\'\n"; //is active
		fout << ")\n GO \n\n";

		
		userRolesOut << "INSERT INTO [dbo].[AspNetUserRoles] \n values \n(\n";
		userRolesOut << "\'" << userId <<"\',\n"; //id
		userRolesOut << "\'" << 2 <<"\'\n"; //id
		userRolesOut << ")\n GO \n\n";
		

	}


	generateTeams(teams, teamManagers);
	generateMatches(matches, offers, refereeIds);
	generateQualifications(qualifications);
	generateOfferQualifications();
	generateUserQualifications();
	generatePlayers(players);

	fout.close();
	userRolesOut.close();
	roles.close();

	refereesOut << "SET IDENTITY_INSERT REFEREE OFF \n GO" << endl;
	teams << "SET IDENTITY_INSERT TEAM OFF \n GO" << endl;
	locations << "SET IDENTITY_INSERT LOCATION OFF \n GO" << endl;
	matches << "SET IDENTITY_INSERT MATCH OFF \n GO" << endl;
	offers << "SET IDENTITY_INSERT OFFER OFF \n GO" << endl;
	qualifications << "SET IDENTITY_INSERT QUALIFICATIONS OFF  \n GO" << endl;



	refereesOut.close();
	locations.close();
	teams.close();
	matches.close();
	offers.close();
	qualifications.close();
	players.close();


	generateSingleScript();

}




