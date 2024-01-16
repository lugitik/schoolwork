class Book:
    def __init__(self, title, author, publisher):
        self.title = title
        self.author = author
        self.publisher = publisher

def main():
    book_number = int(input("number of books to return: "))
    library = []

    for i in range(book_number):
        print(f"\nbook {i + 1}:")
        book = Book(input("title ~> "), input("author ~> "), input("publisher ~> "))
        library.append(book)

    library.sort(key=lambda x: book.title)

    print("\nbooks returned: ")
    for book in library:
        print(f"{book.title} by {book.author}, {book.publisher}")

main()
