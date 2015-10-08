SET IDENTITY_INSERT LOCATION ON  
 GO
INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'1',
'glens field',
'969',
'28 Webb Road',
'Wollongong',
'6736',
'15396494',
'Australia',
'NSW',
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
'650',
'88 Elizabeth Street',
'Wollongong',
'2159',
'93690014',
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
'3',
'steel field',
'819',
'26 Seaview Court',
'Wollongong',
'4676',
'88822195',
'Australia',
'SA',
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
'319',
'92 Halsey Road',
'Wollongong',
'9234',
'15280113',
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
'5',
'locks field',
'887',
'61 Lane Street',
'Wollongong',
'7148',
'62169407',
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
'6',
'cirpus paddock',
'809',
'34 Endeavour Drive',
'Wollongong',
'3954',
'93783995',
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
'7',
'middle field',
'934',
'32 Avondale Drive',
'Wollongong',
'6908',
'22996733',
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
'420',
'26 Garden Place',
'Wollongong',
'1709',
'29915072',
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
'9',
'last field',
'254',
'33 Nandewar Street',
'Wollongong',
'5228',
'30895643',
'Australia',
'NSW',
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
'618',
'80 Taylor Street',
'Wollongong',
'9583',
'99328500',
'Australia',
'TAS',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

SET IDENTITY_INSERT LOCATION OFF 
 GO
