class Movie:
    def __init__(self, title, length, genre, age_limit, release_date):
        self.title = title
        self.length = length
        self.genre = genre
        self.age_limit = age_limit
        self.validate_date(release_date)
        self.get_time_passed(release_date)
        self.release_date = release_date

    def validate_date(self, date):
        if type(date) is not str:
            raise TypeError('Realise date must be string')
        spliteDate = date.split('/')
        if len(spliteDate) != 3:
            raise ValueError('Realise date must meet format YYY/MM/DD')
        for date in spliteDate:
            try:
                int(date)
            except Exception as e:
                raise ValueError(f'Could not load date from string: "{date}"') 
            pass

        if(int(spliteDate[1]) > 12 or int(spliteDate[1]) < 1):
            raise ValueError('Invalid month "{date}"')
        
        if(int(spliteDate[2]) > 31):
            if(int(spliteDate[1]) == 1):
                raise ValueError('Invalid day for January: "{date}"')
            elif(int(spliteDate[1]) == 2):
                raise ValueError('Invalid day for February: "{date}"')
            elif(int(spliteDate[1]) == 3):
                raise ValueError('Invalid day for March: "{date}"')
            elif(int(spliteDate[1]) == 4):
                raise ValueError('Invalid day for April: "{date}"')
            elif(int(spliteDate[1]) == 5):
                raise ValueError('Invalid day for May: "{date}"')
            elif(int(spliteDate[1]) == 6):
                raise ValueError('Invalid day for June: "{date}"')
            elif(int(spliteDate[1]) == 7):
                raise ValueError('Invalid day for July: "{date}"')
            elif(int(spliteDate[1]) == 8):
                raise ValueError('Invalid day for August: "{date}"')            
            elif(int(spliteDate[1]) == 9):
                raise ValueError('Invalid day for September: "{date}"')
            elif(int(spliteDate[1]) == 10):
                raise ValueError('Invalid day for October: "{date}"')
            elif(int(spliteDate[1]) == 11):
                raise ValueError('Invalid day for November: "{date}"')
            elif(int(spliteDate[1]) == 12):
                raise ValueError('Invalid day for December: "{date}"')
            
        if(int(spliteDate[2]) == 31):
            if(int(spliteDate[1]) == 4):
                raise ValueError('Invalid day for April: "{date}"')
            elif(int(spliteDate[1]) == 6):
                raise ValueError('Invalid day for June: "{date}"')
            elif(int(spliteDate[1]) == 9):
                raise ValueError('Invalid day for September: "{date}"')
            elif(int(spliteDate[1]) == 11):
                raise ValueError('Invalid day for November: "{date}"')
            
        if(int(spliteDate[2]) > 29):
            if(int(spliteDate[1]) == 2):
                raise ValueError('Invalid day for February: "{date}"')

    def get_time_passed(self, date):
        from datetime import datetime
        current_datetime = datetime.now()
        
        return 0


if __name__ == '__main__':

    pass
