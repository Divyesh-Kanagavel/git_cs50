import csv

titles = {}

with open("TVshow_form.csv","r") as file:
	reader =  csv.DictReader(file)
	next(reader)
	
	for row in reader:
		title = row['TV show'].upper().strip()
		if title in titles:
			titles[title]+=1
			
		else:
			titles[title] = 1
			
			
	
			
			
		

		
	for title in sorted(titles,key = lambda title: titles[title],reverse=True):
		print(title, titles[title])
		
	 	
	 	
