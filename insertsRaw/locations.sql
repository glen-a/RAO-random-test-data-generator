SET IDENTITY_INSERT LOCATION ON  
 GO
INSERT INTO [dbo].[LOCATION] 
 (locationId, name, price, street, city, postcode, phoneNum, country, state, status, geogCol1) 
values 
(
'1',
'glens field',
'548',
'68 ills Street',
'Wollongong',
'4239',
'75406901',
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
'9',
'50 Saggers Road',
'Wollongong',
'6609',
'62478321',
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
'3',
'steel field',
'922',
'84 Lane Street',
'Wollongong',
'1197',
'59108302',
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
'929',
'9 Villeneuve Street',
'Wollongong',
'1517',
'99580326',
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
'5',
'locks field',
'445',
'2 Taylor Street',
'Wollongong',
'6200',
'109650401',
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
'6',
'cirpus paddock',
'235',
'68 McLeans Road',
'Wollongong',
'3604',
'77998247',
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
'735',
'30 Taylor Street',
'Wollongong',
'2758',
'104681561',
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
'8',
'first field',
'579',
'44 Webb Road',
'Wollongong',
'3009',
'51845580',
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
'9',
'last field',
'939',
'13 Southwell Crescent',
'Wollongong',
'3447',
'27405894',
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
'10',
'main field',
'6',
'87 McPherson Road',
'Wollongong',
'2057',
'44332252',
'Australia',
'VIC',
'1',
geography::STGeomFromText('LINESTRING(-122.360 47.656, -122.343 47.656 )', 4326)
)
 GO 

SET IDENTITY_INSERT LOCATION OFF 
 GO
