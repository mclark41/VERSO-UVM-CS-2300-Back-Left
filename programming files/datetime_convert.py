from datetime import datetime

# initialize date string var with arbitrary date
date_str = "2022-03-17 10:45:30"
# store formatted date into obeject
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')
# store formatted date into string
formatted_date = date_obj.strftime('%m/%d/%Y %H:%M:%S')
# print formatted data
print(formatted_date)