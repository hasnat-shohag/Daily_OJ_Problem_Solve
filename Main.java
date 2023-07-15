interface Animal{

    public abstract void name(String animalName);
    String color();
}

interface Cow{
    void work();
}

public class Main implements Animal, Cow{

    public static void main(String[] args) {

        Main m = new Main();
        m.name("I don't know this :P");
        System.out.println(m.color());
        m.work();
    }

    @Override
    public void name(String animalName) {
        System.out.println(animalName);
    }

    @Override
    public String color() {
        return "Red";
    }

    @Override
    public void work() {
        System.out.println("Gives Milk");
    }
}