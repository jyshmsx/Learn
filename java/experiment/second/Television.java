package inclass.experiment.second;

public class Television {
    private String tvModel;
    private int tvPrice;
    private String tvBrand;
    private int tvCount;

    public Television()
    {

    }

    public void setTV(String tvBrand, String tvModel, int tvPrice, int tvCount)
    {
        this.tvBrand = tvBrand;
        this.tvModel = tvModel;
        this.tvPrice = tvPrice;
        this.tvCount = tvCount;
    }

    public String toString()
    {
        return "Brand: " + this.tvBrand + " Name:" + this.tvModel + " Price:" + this.tvPrice + " Count: " + this.tvCount;
    }

    public void cellTVCount()
    {
        this.tvCount--;
    }

    public void addTVCount(int count)
    {
        this.tvCount += count;
    }


}