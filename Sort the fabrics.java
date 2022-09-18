import java.util.*;

class Fabrics{
    String color;
    int dur;
    int id;

    public Fabrics(String color, int dur, int id) {
        this.color = color;
        this.dur = dur;
        this.id = id;
    }

    public String getColor() {
        return color;
    }

    public int getDur() {
        return dur;
    }

    public int getId() {
        return id;
    }
}
class ColorComparator implements Comparator{
    public int compare(Object o1,Object o2){
        Fabrics f1=(Fabrics) o1;
        Fabrics f2=(Fabrics) o2;
        if(f1.getColor().equals(f2.getColor()))
            return f1.getId()-f2.getId();

        return f1.getColor().compareTo(f2.getColor());
    }
}

class DurComparator implements Comparator{
    public int compare(Object o1,Object o2){
        Fabrics f1=(Fabrics) o1;
        Fabrics f2=(Fabrics) o2;
        if(f1.getDur()==f2.getDur())
            return f1.getId()-f2.getId();

        return f1.getDur()-f2.getDur();
    }
}
public class Solution {

    public static int solve(List<Fabrics> fabricsList, int n){
        List<Fabrics> fabricsList1=new ArrayList<>(fabricsList);
        List<Fabrics> fabricsList2=new ArrayList<>(fabricsList);
        Collections.sort(fabricsList1,new ColorComparator());
        Collections.sort(fabricsList2,new DurComparator());
        int ans=0;
        for(int i=0;i<n;i++){
            if(fabricsList1.get(i).getId()==fabricsList2.get(i).getId())
                ans++;
        }
        return ans;
    }
    public static void main(String[] agrs){
        Scanner sc=new Scanner(System.in);
        int testCase=sc.nextInt();
        for(int test=1;test<=testCase;test++){
            int n=sc.nextInt();
            List<Fabrics> fabricsList=new ArrayList<>();
            for(int i=0;i<n;i++){
                String color= sc.next();
                int dur= sc.nextInt();
                int id= sc.nextInt();
                fabricsList.add(new Fabrics(color,dur,id));
            }
            int ans=solve(fabricsList,n);
            System.out.println("Case #"+test+": "+ans);
        }
    }

}
