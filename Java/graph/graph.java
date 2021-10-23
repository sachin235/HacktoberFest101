package graph;
import java.util.*;


public class graph{
    HashMap<Integer,LinkedList<Integer>> graph = new HashMap<Integer,LinkedList<Integer>>();

    
    void add(int key,int value){
        if(graph.containsKey(key)){
            LinkedList<Integer>vertex = graph.get(key);
            vertex.add(value);
            graph.put(key, vertex);
        }
        else{
            LinkedList<Integer> vertex = new LinkedList<Integer>();
            vertex.add(value);
            graph.put(key,vertex);
        }
    }

    void show(int key){
        if(graph.containsKey(key)){
            LinkedList<Integer>vertex = graph.get(key);
            
            ListIterator<Integer>it = vertex.listIterator(0);

            while(it.hasNext()){
                System.out.print(it.next()+"->");
            }
            System.out.println();
        }
        else{
            System.out.println("no such vertex present");
        }
    }
}

/*class basic_implementation{
    public static void main(String args[]){
        graph gr1 = new graph();

        gr1.add(1, 2);
        gr1.add(1,3);
        gr1.add(2,1);
        gr1.add(2,4);
        gr1.add(2,5);
        gr1.add(3,1);
        gr1.add(3,5);
        gr1.add(4,2);
        gr1.add(4,5);
        gr1.add(5,2);
        gr1.add(5,4);

        gr1.show(1);
        gr1.show(2);
        gr1.show(3);
        gr1.show(4);
        gr1.show(6);
        gr1.show(5);

    }
}*/