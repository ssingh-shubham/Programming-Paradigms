class NumberSorter:
    def __init(self):
        self.numbers = []

    def read_data(self, n):
        for _ in range(n):
            num = float(input("Enter a number: "))
            self.numbers.append(num)

    def selection_sort(self):
        for i in range(len(self.numbers)):
            min_idx = i
            for j in range(i + 1, len(self.numbers)):
                if self.numbers[j] < self.numbers[min_idx]:
                    min_idx = j
            self.numbers[i], self.numbers[min_idx] = self.numbers[min_idx], self.numbers[i]

    def display_data(self):
        print("Sorted Numbers:", self.numbers)

n = int(input("Enter the number of numbers: "))
sorter = NumberSorter()
sorter.read_data(n)
sorter.selection_sort()
sorter.display_data()
