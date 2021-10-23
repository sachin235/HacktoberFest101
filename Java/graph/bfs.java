package graph;

import java.util.*;

public class bfs {

    static void bredth_first_search(graph gr) {
        Queue<Integer> exploration = new LinkedList<Integer>();
        ArrayList<Integer> visited = new ArrayList<Integer>();

        if (!gr.graph.isEmpty()) {          //put the 1st element inside the queue and arraylist
            Set<Integer>keys = gr.graph.keySet();
            Iterator<Integer> it = keys.iterator();

            int initial_vertex = (int) it.next();
            System.out.print(initial_vertex + "->");
            exploration.add(initial_vertex);
            visited.add(initial_vertex);
        }

        while (!exploration.isEmpty()) {  //now do exploration of other elements
            LinkedList<Integer> ll = gr.graph.get(exploration.poll());
            ListIterator<Integer>lit = ll.listIterator(0);

            while (lit.hasNext()) {
                int adj_vertex = (int) lit.next();

                if (!visited.contains(adj_vertex)) {
                    visited.add(adj_vertex);
                    exploration.add(adj_vertex);
                    System.out.print(adj_vertex + "->");
                }
            }
        }
    }

    public static void main(String args[]) {
        graph gr1 = new graph();
        gr1.add(1, 2);
        gr1.add(1, 3);
        gr1.add(2, 1);
        gr1.add(2, 4);
        gr1.add(2, 5);
        gr1.add(3, 1);
        gr1.add(3, 5);
        gr1.add(4, 2);
        gr1.add(4, 5);
        gr1.add(5, 2);
        gr1.add(5, 4);

        bredth_first_search(gr1);

    }
}
