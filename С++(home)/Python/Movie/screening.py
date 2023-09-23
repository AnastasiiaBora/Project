class Screening:
    def __init__(self, movie, auditorium, time):
        self.movie = movie
        self.auditorium = auditorium
        self.time = time
        self.tickets_sold = 0

    def sell_tickets(self, count):
        return False

    def get_occupancy(self):
        return 0.0

    def get_end_time(self):
        
        return (0, 0)


if __name__ == '__main__':
    # you can run your tests here
    pass
