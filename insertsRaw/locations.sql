SET IDENTITY_INSERT LOCATION ON  
 GO
INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'1',
'glens field',
'902',
'9 Southwell Crescent',
'Wollongong',
'5284',
'91636072',
'Australia',
'NT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'2',
'collegens field',
'325',
'79 Flinstone Drive',
'Wollongong',
'7350',
'89468275',
'Australia',
'VIC',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'3',
'steel field',
'151',
'78 Jacolite Street',
'Wollongong',
'9104',
'37681625',
'Australia',
'TAS',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'4',
'grass knowles',
'677',
'86 Webb Road',
'Wollongong',
'10168',
'45462700',
'Australia',
'VIC',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'5',
'locks field',
'450',
'8 Oriana Street',
'Wollongong',
'10479',
'17608455',
'Australia',
'ACT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'6',
'cirpus paddock',
'420',
'12 Beach Street',
'Wollongong',
'2749',
'60210067',
'Australia',
'ACT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'7',
'middle field',
'882',
'20 Isaac Road',
'Wollongong',
'9354',
'76367338',
'Australia',
'TAS',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'8',
'first field',
'565',
'99 Elizabeth Street',
'Wollongong',
'10758',
'57590269',
'Australia',
'NT',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'9',
'last field',
'700',
'30 Fitzroy Street',
'Wollongong',
'10713',
'49775370',
'Australia',
'QLD',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'10',
'main field',
'245',
'96 George Street',
'Wollongong',
'5088',
'76461277',
'Australia',
'QLD',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

SET IDENTITY_INSERT LOCATION OFF 
 GO
