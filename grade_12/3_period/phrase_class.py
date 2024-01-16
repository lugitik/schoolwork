class Over:
    def __init__(self, one, two, three):
        self.one = one
        self.two = two
        self.three = three

class Phrase(Over):
    pass

    def method(self):
        sentence = ""

        for word in self.one:
            if word == "rovente":
                word = self.three
            sentence += word + " "

        print(sentence)

def main():
    ph = Phrase(["Meriggiare", "rovente", "e", "assorto"], 1, "pallido")
    ph.method()

main()
